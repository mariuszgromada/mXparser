/*
 * @(#)Token.java        5.0.0    2022-01-16
 *
 * You may use this software under the condition of "Simplified BSD License"
 *
 * Copyright 2010-2017 MARIUSZ GROMADA. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY <MARIUSZ GROMADA> ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of MARIUSZ GROMADA.
 *
 * If you have any questions/bugs feel free to contact:
 *
 *     Mariusz Gromada
 *     mariuszgromada.org@gmail.com
 *     http://mathparser.org
 *     http://mathspace.pl
 *     http://janetsudoku.mariuszgromada.org
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://mariuszgromada.github.io/MathParser.org-mXparser
 *     http://mxparser.sourceforge.net
 *     http://bitbucket.org/mariuszgromada/mxparser
 *     http://mxparser.codeplex.com
 *     http://github.com/mariuszgromada/Janet-Sudoku
 *     http://janetsudoku.codeplex.com
 *     http://sourceforge.net/projects/janetsudoku
 *     http://bitbucket.org/mariuszgromada/janet-sudoku
 *     http://github.com/mariuszgromada/MathParser.org-mXparser
 *     http://scalarmath.org/
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite
 *     https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro
 *
 *                              Asked if he believes in one God, a mathematician answered:
 *                              "Yes, up to isomorphism."
 */
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.Argument;
import org.mariuszgromada.math.mxparser.Constant;

/**
 * Token recognized by mXparser after string tokenization process.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="mailto:mariuszgromada.org@gmail.com">mariuszgromada.org@gmail.com</a><br>
 *                 <a href="http://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *                 <a href="http://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="http://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="http://mxparser.sourceforge.net" target="_blank">mXparser on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/mxparser" target="_blank">mXparser on Bitbucket</a><br>
 *                 <a href="http://mxparser.codeplex.com" target="_blank">mXparser on CodePlex</a><br>
 *                 <a href="http://janetsudoku.mariuszgromada.org" target="_blank">Janet Sudoku - project web page</a><br>
 *                 <a href="http://github.com/mariuszgromada/Janet-Sudoku" target="_blank">Janet Sudoku on GitHub</a><br>
 *                 <a href="http://janetsudoku.codeplex.com" target="_blank">Janet Sudoku on CodePlex</a><br>
 *                 <a href="http://sourceforge.net/projects/janetsudoku" target="_blank">Janet Sudoku on SourceForge</a><br>
 *                 <a href="http://bitbucket.org/mariuszgromada/janet-sudoku" target="_blank">Janet Sudoku on BitBucket</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Free</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="http://scalarmath.org/" target="_blank">ScalarMath.org</a><br>
 *
 * @version        5.0.0
 */
public class Token {
	/**
	 * Indicator that token was not matched
	 */
	public static final int NOT_MATCHED = KeyWord.NO_DEFINITION;
	/**
	 * String token
	 */
	public String tokenStr;
	/**
	 * Key word string (if matched)
	 */
	public String keyWord;
	/**
	 * Token identifier
	 */
	public int tokenId;
	/**
	 * Token type
	 */
	public int tokenTypeId;
	/**
	 * Token level
	 */
	public int tokenLevel;
	/**
	 * Token value if number
	 */
	public double tokenValue;
	/**
	 * If token was not matched then
	 * looksLike functionality is trying asses
	 * the kind of token
	 */
	public String looksLike;
	/**
	 * Verification if the token is a left unary operator.
	 *
	 * @return true in case token is unary left operator,
	 * otherwise returns false
	 */
	public boolean isUnaryLeftOperator() {
		if (tokenTypeId == Operator.TYPE_ID) {
			if (tokenId == Operator.SQUARE_ROOT_ID) return true;
			if (tokenId == Operator.CUBE_ROOT_ID) return true;
			if (tokenId == Operator.FOURTH_ROOT_ID) return true;
		}
		if (tokenTypeId == BooleanOperator.TYPE_ID) {
			if (tokenId == BooleanOperator.NEG_ID) return true;
		}
		if (tokenTypeId == BitwiseOperator.TYPE_ID) {
			if (tokenId == BitwiseOperator.COMPL_ID) return true;
		}
		return false;
	}
	/**
	 * Verification if the token is a right unary operator.
	 *
	 * @return true in case token is unary right operator,
	 * otherwise returns false
	 */
	public boolean isUnaryRightOperator() {
		if (tokenTypeId == Operator.TYPE_ID) {
			if (tokenId == Operator.FACT_ID) return true;
			if (tokenId == Operator.PERC_ID) return true;
		}
		return false;
	}
	/**
	 * Verification if the token is a left parenthesis.
	 *
	 * @return true in case token is a left parenthesis,
	 * otherwise returns false
	 */
	public boolean isLeftParenthesis() {
		if (tokenTypeId == ParserSymbol.TYPE_ID && tokenId == ParserSymbol.LEFT_PARENTHESES_ID)
			return true;
		else
			return false;
	}
	/**
	 * Verification if the token is a right parenthesis.
	 *
	 * @return true in case token is a right parenthesis,
	 * otherwise returns false
	 */
	public boolean isRightParenthesis() {
		if (tokenTypeId == ParserSymbol.TYPE_ID && tokenId == ParserSymbol.RIGHT_PARENTHESES_ID)
			return true;
		else
			return false;
	}
	/**
	 * Verification if the token is an identifier.
	 *
	 * @return true in case token is an identifier,
	 * otherwise returns false
	 */
	public boolean isIdentifier() {
		if (	tokenTypeId == Constant.TYPE_ID ||
				tokenTypeId == ConstantValue.TYPE_ID ||
				tokenTypeId == Unit.TYPE_ID ||
				tokenTypeId == Argument.TYPE_ID )
			return true;
		else
			return false;
	}
	/**
	 * Verification if the token is a binary operator.
	 *
	 * @return true in case token is a binary operator,
	 * otherwise returns false
	 */
	public boolean isBinaryOperator() {
		if (isUnaryLeftOperator()) return false;
		if (isUnaryRightOperator()) return false;
		if (tokenTypeId == BinaryRelation.TYPE_ID) return true;
		if (tokenTypeId == BitwiseOperator.TYPE_ID) return true;
		if (tokenTypeId == BooleanOperator.TYPE_ID) return true;
		if (tokenTypeId == Operator.TYPE_ID) {
			if (	tokenId != Operator.SQUARE_ROOT_ID
					&& tokenId != Operator.CUBE_ROOT_ID
					&& tokenId != Operator.FOURTH_ROOT_ID
					&& tokenId != Operator.FACT_ID
					&& tokenId != Operator.PERC_ID
			)  return true;
		}
		return false;
	}
	/**
	 * Verification if the token is a parameter separator.
	 *
	 * @return true in case token is a parameter separator,
	 * otherwise returns false
	 */
	public boolean isParameterSeparator() {
		if (tokenTypeId == ParserSymbol.TYPE_ID && tokenId == ParserSymbol.COMMA_ID)
			return true;
		else
			return false;
	}
	/**
	 * Verification if the token is a number.
	 *
	 * @return true in case token is a number,
	 * otherwise returns false
	 */
	public boolean isNumber() {
		if (tokenTypeId == ParserSymbol.NUMBER_TYPE_ID && tokenId == ParserSymbol.NUMBER_ID)
			return true;
		else
			return false;
	}
	/**
	 * Verification if the token is represented by a special name in the form [...].
	 *
	 * @return true in case token is represented by a special name in the form [...],
	 * otherwise returns false
	 */
	public boolean isSpecialTokenName() {
		if (tokenStr.length() == 0) return false;
		if (tokenStr.charAt(0) == '[') return true;
		else return false;
	}
	/**
	 * Verification if the token represents unicode root operator
	 *
	 * @return true in case token represents unicode root operator
	 * otherwise returns false
	 */
	public boolean isUnicodeRootOperator() {
		if (tokenTypeId == Operator.TYPE_ID) {
			if (tokenId == Operator.SQUARE_ROOT_ID) return true;
			if (tokenId == Operator.CUBE_ROOT_ID) return true;
			if (tokenId == Operator.FOURTH_ROOT_ID) return true;
		}
		return false;
	}
	/**
	 * Creates token representing multiplication operator.
	 *
	 * @return token representing multiplication operator.
	 */
	public static Token makeMultiplyToken() {
		Token multiplyToken = new Token();
		multiplyToken.tokenTypeId = Operator.TYPE_ID;
		multiplyToken.tokenId = Operator.MULTIPLY_ID;
		multiplyToken.tokenStr = Operator.MULTIPLY_STR;
		return multiplyToken;
	}
	/**
	 * Default constructor
	 */
	public Token() {
		tokenStr = "";
		keyWord = "";
		tokenId = NOT_MATCHED;
		tokenTypeId = NOT_MATCHED;
		tokenLevel = -1;
		tokenValue = Double.NaN;
		looksLike = "";
	}
	/**
	 * Token cloning.
	 */
	public Token clone() {
		Token token = new Token();
		token.keyWord = keyWord;
		token.tokenStr = tokenStr;
		token.tokenId = tokenId;
		token.tokenLevel = tokenLevel;
		token.tokenTypeId = tokenTypeId;
		token.tokenValue = tokenValue;
		token.looksLike = looksLike;
		return token;
	}
}
