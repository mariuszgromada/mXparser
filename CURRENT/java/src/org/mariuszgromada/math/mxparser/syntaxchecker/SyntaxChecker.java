/* SyntaxChecker.java */
/* Generated By:JavaCC: Do not edit this line. SyntaxChecker.java */
package org.mariuszgromada.math.mxparser.syntaxchecker;

public final class SyntaxChecker implements SyntaxCheckerConstants {
        public final void checkSyntax() throws ParseException, TokenMgrError {
                start();
        }

/*
 * Lexer logic - grammar
 */
  final public void start() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case DECIMAL:
    case BASE1:
    case BASE2:
    case BASE3:
    case BASE4:
    case BASE5:
    case BASE6:
    case BASE7:
    case BASE8:
    case BASE9:
    case BASE10:
    case BASE11:
    case BASE12:
    case BASE13:
    case BASE14:
    case BASE15:
    case BASE16:
    case BASE17:
    case BASE18:
    case BASE19:
    case BASE20:
    case BASE21:
    case BASE22:
    case BASE23:
    case BASE24:
    case BASE25:
    case BASE26:
    case BASE27:
    case BASE28:
    case BASE29:
    case BASE30:
    case BASE31:
    case BASE32:
    case BASE33:
    case BASE34:
    case BASE35:
    case BASE36:
    case BINARY:
    case OCTAL:
    case HEXADECIMAL:
    case FRACTION:
    case LEFT_PAR:
    case PLUS:
    case MINUS:
    case NOT:
    case BITNOT:
    case IDENTIFIER:
    case LEFT_OR_RIGHT_DER:
    case 124:
    case 125:
    case 126:{
      expression();
      jj_consume_token(0);
      break;
      }
    case 0:{
      jj_consume_token(0);
      break;
      }
    default:
      jj_la1[0] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void expression() throws ParseException {
    binaryExpression();
}

  final public void binaryExpression() throws ParseException {
    unaryRigthExpression();
    label_1:
    while (true) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PLUS:
      case MINUS:
      case MULTIPLY:
      case DIV:
      case POWER:
      case TETRATION:
      case MODULO:
      case EQ:
      case NEQ:
      case LT:
      case LEQ:
      case GT:
      case GEQ:
      case OR:
      case AND:
      case IMP:
      case CIMP:
      case NIMP:
      case CNIMP:
      case NAND:
      case EQV:
      case NOR:
      case BITWISE:
      case XOR:{
        ;
        break;
        }
      default:
        jj_la1[1] = jj_gen;
        break label_1;
      }
      binaryOperator();
      unaryRigthExpression();
    }
}

  final public void unaryRigthExpression() throws ParseException {
    unaryLeftExpression();
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case FACTORIAL:
    case PERCENTAGE:{
      unaryRigthOperator();
      break;
      }
    default:
      jj_la1[2] = jj_gen;
      ;
    }
}

  final public void unaryLeftExpression() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case NOT:
    case BITNOT:{
      unaryLeftOperator();
      break;
      }
    default:
      jj_la1[3] = jj_gen;
      ;
    }
    itemExpression();
}

  final public void binaryOperator() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case PLUS:{
      jj_consume_token(PLUS);
      break;
      }
    case MINUS:{
      jj_consume_token(MINUS);
      break;
      }
    case MULTIPLY:{
      jj_consume_token(MULTIPLY);
      break;
      }
    case DIV:{
      jj_consume_token(DIV);
      break;
      }
    case MODULO:{
      jj_consume_token(MODULO);
      break;
      }
    case POWER:{
      jj_consume_token(POWER);
      break;
      }
    case TETRATION:{
      jj_consume_token(TETRATION);
      break;
      }
    case EQ:{
      jj_consume_token(EQ);
      break;
      }
    case NEQ:{
      jj_consume_token(NEQ);
      break;
      }
    case GT:{
      jj_consume_token(GT);
      break;
      }
    case GEQ:{
      jj_consume_token(GEQ);
      break;
      }
    case LT:{
      jj_consume_token(LT);
      break;
      }
    case LEQ:{
      jj_consume_token(LEQ);
      break;
      }
    case OR:{
      jj_consume_token(OR);
      break;
      }
    case AND:{
      jj_consume_token(AND);
      break;
      }
    case NOR:{
      jj_consume_token(NOR);
      break;
      }
    case NAND:{
      jj_consume_token(NAND);
      break;
      }
    case XOR:{
      jj_consume_token(XOR);
      break;
      }
    case IMP:{
      jj_consume_token(IMP);
      break;
      }
    case CIMP:{
      jj_consume_token(CIMP);
      break;
      }
    case NIMP:{
      jj_consume_token(NIMP);
      break;
      }
    case CNIMP:{
      jj_consume_token(CNIMP);
      break;
      }
    case EQV:{
      jj_consume_token(EQV);
      break;
      }
    case BITWISE:{
      jj_consume_token(BITWISE);
      break;
      }
    default:
      jj_la1[4] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void unaryRigthOperator() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case FACTORIAL:{
      jj_consume_token(FACTORIAL);
      break;
      }
    case PERCENTAGE:{
      jj_consume_token(PERCENTAGE);
      break;
      }
    default:
      jj_la1[5] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void unaryLeftOperator() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case NOT:{
      jj_consume_token(NOT);
      break;
      }
    case BITNOT:{
      jj_consume_token(BITNOT);
      break;
      }
    default:
      jj_la1[6] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void itemExpression() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case PLUS:
    case MINUS:{
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case PLUS:{
        jj_consume_token(PLUS);
        break;
        }
      case MINUS:{
        jj_consume_token(MINUS);
        break;
        }
      default:
        jj_la1[7] = jj_gen;
        jj_consume_token(-1);
        throw new ParseException();
      }
      break;
      }
    default:
      jj_la1[8] = jj_gen;
      ;
    }
    label_2:
    while (true) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DECIMAL:
      case BASE1:
      case BASE2:
      case BASE3:
      case BASE4:
      case BASE5:
      case BASE6:
      case BASE7:
      case BASE8:
      case BASE9:
      case BASE10:
      case BASE11:
      case BASE12:
      case BASE13:
      case BASE14:
      case BASE15:
      case BASE16:
      case BASE17:
      case BASE18:
      case BASE19:
      case BASE20:
      case BASE21:
      case BASE22:
      case BASE23:
      case BASE24:
      case BASE25:
      case BASE26:
      case BASE27:
      case BASE28:
      case BASE29:
      case BASE30:
      case BASE31:
      case BASE32:
      case BASE33:
      case BASE34:
      case BASE35:
      case BASE36:
      case BINARY:
      case OCTAL:
      case HEXADECIMAL:
      case FRACTION:
      case IDENTIFIER:
      case LEFT_OR_RIGHT_DER:
      case 124:
      case 125:
      case 126:{
        itemOrFunctionOptionalImpliedMultiplication();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case LEFT_PAR:{
          bracketedExpressionOptionalImpliedMultiplication();
          break;
          }
        default:
          jj_la1[9] = jj_gen;
          ;
        }
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case DECIMAL:
        case BASE1:
        case BASE2:
        case BASE3:
        case BASE4:
        case BASE5:
        case BASE6:
        case BASE7:
        case BASE8:
        case BASE9:
        case BASE10:
        case BASE11:
        case BASE12:
        case BASE13:
        case BASE14:
        case BASE15:
        case BASE16:
        case BASE17:
        case BASE18:
        case BASE19:
        case BASE20:
        case BASE21:
        case BASE22:
        case BASE23:
        case BASE24:
        case BASE25:
        case BASE26:
        case BASE27:
        case BASE28:
        case BASE29:
        case BASE30:
        case BASE31:
        case BASE32:
        case BASE33:
        case BASE34:
        case BASE35:
        case BASE36:
        case BINARY:
        case OCTAL:
        case HEXADECIMAL:
        case FRACTION:
        case IDENTIFIER:
        case LEFT_OR_RIGHT_DER:
        case 124:
        case 125:
        case 126:{
          itemOrFunctionOptionalImpliedMultiplication();
          break;
          }
        default:
          jj_la1[10] = jj_gen;
          ;
        }
        break;
        }
      case LEFT_PAR:{
        bracketedExpressionOptionalImpliedMultiplication();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case DECIMAL:
        case BASE1:
        case BASE2:
        case BASE3:
        case BASE4:
        case BASE5:
        case BASE6:
        case BASE7:
        case BASE8:
        case BASE9:
        case BASE10:
        case BASE11:
        case BASE12:
        case BASE13:
        case BASE14:
        case BASE15:
        case BASE16:
        case BASE17:
        case BASE18:
        case BASE19:
        case BASE20:
        case BASE21:
        case BASE22:
        case BASE23:
        case BASE24:
        case BASE25:
        case BASE26:
        case BASE27:
        case BASE28:
        case BASE29:
        case BASE30:
        case BASE31:
        case BASE32:
        case BASE33:
        case BASE34:
        case BASE35:
        case BASE36:
        case BINARY:
        case OCTAL:
        case HEXADECIMAL:
        case FRACTION:
        case IDENTIFIER:
        case LEFT_OR_RIGHT_DER:
        case 124:
        case 125:
        case 126:{
          itemOrFunctionOptionalImpliedMultiplication();
          break;
          }
        default:
          jj_la1[11] = jj_gen;
          ;
        }
        break;
        }
      default:
        jj_la1[12] = jj_gen;
        jj_consume_token(-1);
        throw new ParseException();
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DECIMAL:
      case BASE1:
      case BASE2:
      case BASE3:
      case BASE4:
      case BASE5:
      case BASE6:
      case BASE7:
      case BASE8:
      case BASE9:
      case BASE10:
      case BASE11:
      case BASE12:
      case BASE13:
      case BASE14:
      case BASE15:
      case BASE16:
      case BASE17:
      case BASE18:
      case BASE19:
      case BASE20:
      case BASE21:
      case BASE22:
      case BASE23:
      case BASE24:
      case BASE25:
      case BASE26:
      case BASE27:
      case BASE28:
      case BASE29:
      case BASE30:
      case BASE31:
      case BASE32:
      case BASE33:
      case BASE34:
      case BASE35:
      case BASE36:
      case BINARY:
      case OCTAL:
      case HEXADECIMAL:
      case FRACTION:
      case LEFT_PAR:
      case IDENTIFIER:
      case LEFT_OR_RIGHT_DER:
      case 124:
      case 125:
      case 126:{
        ;
        break;
        }
      default:
        jj_la1[13] = jj_gen;
        break label_2;
      }
    }
}

  final public void bracketedExpressionOptionalImpliedMultiplication() throws ParseException {
    bracketedExpression();
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case LEFT_PAR:{
      bracketedExpression();
      break;
      }
    default:
      jj_la1[14] = jj_gen;
      ;
    }
}

  final public void bracketedExpression() throws ParseException {
    jj_consume_token(LEFT_PAR);
    expression();
    jj_consume_token(RIGHT_PAR);
}

  final public void itemOrFunctionOptionalImpliedMultiplication() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case DECIMAL:{
      jj_consume_token(DECIMAL);
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case BASE1:
      case BASE2:
      case BASE3:
      case BASE4:
      case BASE5:
      case BASE6:
      case BASE7:
      case BASE8:
      case BASE9:
      case BASE10:
      case BASE11:
      case BASE12:
      case BASE13:
      case BASE14:
      case BASE15:
      case BASE16:
      case BASE17:
      case BASE18:
      case BASE19:
      case BASE20:
      case BASE21:
      case BASE22:
      case BASE23:
      case BASE24:
      case BASE25:
      case BASE26:
      case BASE27:
      case BASE28:
      case BASE29:
      case BASE30:
      case BASE31:
      case BASE32:
      case BASE33:
      case BASE34:
      case BASE35:
      case BASE36:
      case BINARY:
      case OCTAL:
      case HEXADECIMAL:
      case FRACTION:
      case IDENTIFIER:
      case LEFT_OR_RIGHT_DER:
      case 124:
      case 125:
      case 126:{
        itemOrFunctionImpliedMultiplication();
        break;
        }
      default:
        jj_la1[15] = jj_gen;
        ;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DECIMAL:{
        jj_consume_token(DECIMAL);
        break;
        }
      default:
        jj_la1[16] = jj_gen;
        ;
      }
      break;
      }
    case BASE1:
    case BASE2:
    case BASE3:
    case BASE4:
    case BASE5:
    case BASE6:
    case BASE7:
    case BASE8:
    case BASE9:
    case BASE10:
    case BASE11:
    case BASE12:
    case BASE13:
    case BASE14:
    case BASE15:
    case BASE16:
    case BASE17:
    case BASE18:
    case BASE19:
    case BASE20:
    case BASE21:
    case BASE22:
    case BASE23:
    case BASE24:
    case BASE25:
    case BASE26:
    case BASE27:
    case BASE28:
    case BASE29:
    case BASE30:
    case BASE31:
    case BASE32:
    case BASE33:
    case BASE34:
    case BASE35:
    case BASE36:
    case BINARY:
    case OCTAL:
    case HEXADECIMAL:
    case FRACTION:
    case IDENTIFIER:
    case LEFT_OR_RIGHT_DER:
    case 124:
    case 125:
    case 126:{
      itemOrFunctionImpliedMultiplication();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case DECIMAL:{
        jj_consume_token(DECIMAL);
        break;
        }
      default:
        jj_la1[17] = jj_gen;
        ;
      }
      break;
      }
    default:
      jj_la1[18] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void itemOrFunctionImpliedMultiplication() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case IDENTIFIER:
    case LEFT_OR_RIGHT_DER:
    case 124:
    case 125:
    case 126:{
      label_3:
      while (true) {
        itemOrFunction();
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case IDENTIFIER:
        case LEFT_OR_RIGHT_DER:
        case 124:
        case 125:
        case 126:{
          ;
          break;
          }
        default:
          jj_la1[19] = jj_gen;
          break label_3;
        }
      }
      break;
      }
    case BASE1:
    case BASE2:
    case BASE3:
    case BASE4:
    case BASE5:
    case BASE6:
    case BASE7:
    case BASE8:
    case BASE9:
    case BASE10:
    case BASE11:
    case BASE12:
    case BASE13:
    case BASE14:
    case BASE15:
    case BASE16:
    case BASE17:
    case BASE18:
    case BASE19:
    case BASE20:
    case BASE21:
    case BASE22:
    case BASE23:
    case BASE24:
    case BASE25:
    case BASE26:
    case BASE27:
    case BASE28:
    case BASE29:
    case BASE30:
    case BASE31:
    case BASE32:
    case BASE33:
    case BASE34:
    case BASE35:
    case BASE36:
    case BINARY:
    case OCTAL:
    case HEXADECIMAL:
    case FRACTION:{
      otherBaseNumber();
      break;
      }
    default:
      jj_la1[20] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void itemOrFunction() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 124:
    case 125:
    case 126:{
      unitOrSpecialConstant();
      break;
      }
    case IDENTIFIER:
    case LEFT_OR_RIGHT_DER:{
      itemName();
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case LEFT_PAR:{
        argumentList();
        break;
        }
      default:
        jj_la1[21] = jj_gen;
        ;
      }
      break;
      }
    default:
      jj_la1[22] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void otherBaseNumber() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case HEXADECIMAL:{
      jj_consume_token(HEXADECIMAL);
      break;
      }
    case OCTAL:{
      jj_consume_token(OCTAL);
      break;
      }
    case BINARY:{
      jj_consume_token(BINARY);
      break;
      }
    case BASE1:{
      jj_consume_token(BASE1);
      break;
      }
    case BASE2:{
      jj_consume_token(BASE2);
      break;
      }
    case BASE3:{
      jj_consume_token(BASE3);
      break;
      }
    case BASE4:{
      jj_consume_token(BASE4);
      break;
      }
    case BASE5:{
      jj_consume_token(BASE5);
      break;
      }
    case BASE6:{
      jj_consume_token(BASE6);
      break;
      }
    case BASE7:{
      jj_consume_token(BASE7);
      break;
      }
    case BASE8:{
      jj_consume_token(BASE8);
      break;
      }
    case BASE9:{
      jj_consume_token(BASE9);
      break;
      }
    case BASE10:{
      jj_consume_token(BASE10);
      break;
      }
    case BASE11:{
      jj_consume_token(BASE11);
      break;
      }
    case BASE12:{
      jj_consume_token(BASE12);
      break;
      }
    case BASE13:{
      jj_consume_token(BASE13);
      break;
      }
    case BASE14:{
      jj_consume_token(BASE14);
      break;
      }
    case BASE15:{
      jj_consume_token(BASE15);
      break;
      }
    case BASE16:{
      jj_consume_token(BASE16);
      break;
      }
    case BASE17:{
      jj_consume_token(BASE17);
      break;
      }
    case BASE18:{
      jj_consume_token(BASE18);
      break;
      }
    case BASE19:{
      jj_consume_token(BASE19);
      break;
      }
    case BASE20:{
      jj_consume_token(BASE20);
      break;
      }
    case BASE21:{
      jj_consume_token(BASE21);
      break;
      }
    case BASE22:{
      jj_consume_token(BASE22);
      break;
      }
    case BASE23:{
      jj_consume_token(BASE23);
      break;
      }
    case BASE24:{
      jj_consume_token(BASE24);
      break;
      }
    case BASE25:{
      jj_consume_token(BASE25);
      break;
      }
    case BASE26:{
      jj_consume_token(BASE26);
      break;
      }
    case BASE27:{
      jj_consume_token(BASE27);
      break;
      }
    case BASE28:{
      jj_consume_token(BASE28);
      break;
      }
    case BASE29:{
      jj_consume_token(BASE29);
      break;
      }
    case BASE30:{
      jj_consume_token(BASE30);
      break;
      }
    case BASE31:{
      jj_consume_token(BASE31);
      break;
      }
    case BASE32:{
      jj_consume_token(BASE32);
      break;
      }
    case BASE33:{
      jj_consume_token(BASE33);
      break;
      }
    case BASE34:{
      jj_consume_token(BASE34);
      break;
      }
    case BASE35:{
      jj_consume_token(BASE35);
      break;
      }
    case BASE36:{
      jj_consume_token(BASE36);
      break;
      }
    case FRACTION:{
      jj_consume_token(FRACTION);
      break;
      }
    default:
      jj_la1[23] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void itemName() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case IDENTIFIER:{
      jj_consume_token(IDENTIFIER);
      break;
      }
    case LEFT_OR_RIGHT_DER:{
      jj_consume_token(LEFT_OR_RIGHT_DER);
      break;
      }
    default:
      jj_la1[24] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void unitOrSpecialConstant() throws ParseException {
    switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
    case 124:{
      jj_consume_token(124);
      break;
      }
    case 125:{
      jj_consume_token(125);
      break;
      }
    case 126:{
      jj_consume_token(126);
      label_4:
      while (true) {
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case OTHER_CHAR:{
          jj_consume_token(OTHER_CHAR);
          break;
          }
        case IDENTIFIER:{
          jj_consume_token(IDENTIFIER);
          label_5:
          while (true) {
            switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
            case DECIMAL:
            case LEFT_PAR:
            case RIGHT_PAR:
            case COMMA:
            case PLUS:
            case MINUS:
            case MULTIPLY:
            case DIV:
            case POWER:
            case MODULO:
            case LT:
            case GT:
            case OR:
            case AND:
            case NOT:{
              ;
              break;
              }
            default:
              jj_la1[25] = jj_gen;
              break label_5;
            }
            switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
            case NOT:{
              jj_consume_token(NOT);
              break;
              }
            case MODULO:{
              jj_consume_token(MODULO);
              break;
              }
            case POWER:{
              jj_consume_token(POWER);
              break;
              }
            case AND:{
              jj_consume_token(AND);
              break;
              }
            case MULTIPLY:{
              jj_consume_token(MULTIPLY);
              break;
              }
            case DIV:{
              jj_consume_token(DIV);
              break;
              }
            case LEFT_PAR:{
              jj_consume_token(LEFT_PAR);
              break;
              }
            case RIGHT_PAR:{
              jj_consume_token(RIGHT_PAR);
              break;
              }
            case MINUS:{
              jj_consume_token(MINUS);
              break;
              }
            case PLUS:{
              jj_consume_token(PLUS);
              break;
              }
            case COMMA:{
              jj_consume_token(COMMA);
              break;
              }
            case OR:{
              jj_consume_token(OR);
              break;
              }
            case GT:{
              jj_consume_token(GT);
              break;
              }
            case LT:{
              jj_consume_token(LT);
              break;
              }
            case DECIMAL:{
              jj_consume_token(DECIMAL);
              break;
              }
            default:
              jj_la1[26] = jj_gen;
              jj_consume_token(-1);
              throw new ParseException();
            }
          }
          break;
          }
        default:
          jj_la1[27] = jj_gen;
          jj_consume_token(-1);
          throw new ParseException();
        }
        switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
        case IDENTIFIER:
        case OTHER_CHAR:{
          ;
          break;
          }
        default:
          jj_la1[28] = jj_gen;
          break label_4;
        }
      }
      jj_consume_token(127);
      break;
      }
    default:
      jj_la1[29] = jj_gen;
      jj_consume_token(-1);
      throw new ParseException();
    }
}

  final public void argumentList() throws ParseException {
    jj_consume_token(LEFT_PAR);
    expression();
    label_6:
    while (true) {
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case COMMA:
      case SEMICOLON:{
        ;
        break;
        }
      default:
        jj_la1[30] = jj_gen;
        break label_6;
      }
      switch ((jj_ntk==-1)?jj_ntk_f():jj_ntk) {
      case COMMA:{
        jj_consume_token(COMMA);
        break;
        }
      case SEMICOLON:{
        jj_consume_token(SEMICOLON);
        break;
        }
      default:
        jj_la1[31] = jj_gen;
        jj_consume_token(-1);
        throw new ParseException();
      }
      expression();
    }
    jj_consume_token(RIGHT_PAR);
}

  /** Generated Token Manager. */
  public SyntaxCheckerTokenManager token_source;
  SimpleCharStream jj_input_stream;
  /** Current token. */
  public Token token;
  /** Next token. */
  public Token jj_nt;
  private int jj_ntk;
  private int jj_gen;
  final private int[] jj_la1 = new int[32];
  static private int[] jj_la1_0;
  static private int[] jj_la1_1;
  static private int[] jj_la1_2;
  static private int[] jj_la1_3;
  static private int[] jj_la1_4;
  static {
	   jj_la1_init_0();
	   jj_la1_init_1();
	   jj_la1_init_2();
	   jj_la1_init_3();
	   jj_la1_init_4();
	}
	private static void jj_la1_init_0() {
	   jj_la1_0 = new int[] {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};
	}
	private static void jj_la1_init_1() {
	   jj_la1_1 = new int[] {0xffff0000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xffff0000,0xffff0000,0xffff0000,0xffff0000,0x0,0xfffe0000,0x10000,0x10000,0xffff0000,0x0,0xfffe0000,0x0,0x0,0xfffe0000,0x0,0x10000,0x10000,0x0,0x0,0x0,0x0,0x0,};
	}
	private static void jj_la1_init_2() {
	   jj_la1_2 = new int[] {0x63ffffff,0xe0000000,0x0,0x0,0xe0000000,0x0,0x0,0x60000000,0x60000000,0x2000000,0x1ffffff,0x1ffffff,0x3ffffff,0x3ffffff,0x2000000,0x1ffffff,0x0,0x0,0x1ffffff,0x0,0x1ffffff,0x2000000,0x0,0x1ffffff,0x0,0xee000000,0xee000000,0x0,0x0,0x0,0x18000000,0x18000000,};
	}
	private static void jj_la1_init_3() {
	   jj_la1_3 = new int[] {0x7600c000,0x1ff3fcf,0x30,0xc000,0x1ff3fcf,0x30,0xc000,0x0,0x0,0x0,0x76000000,0x76000000,0x76000000,0x76000000,0x0,0x76000000,0x0,0x0,0x76000000,0x76000000,0x76000000,0x0,0x76000000,0x0,0x6000000,0x750b,0x750b,0xa000000,0xa000000,0x70000000,0x0,0x0,};
	}
	private static void jj_la1_init_4() {
	   jj_la1_4 = new int[] {0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};
	}

  /** Constructor with InputStream. */
  public SyntaxChecker(java.io.InputStream stream) {
	  this(stream, null);
  }
  /** Constructor with InputStream and supplied encoding */
  public SyntaxChecker(java.io.InputStream stream, String encoding) {
	 try { jj_input_stream = new SimpleCharStream(stream, encoding, 1, 1); } catch(java.io.UnsupportedEncodingException e) { throw new RuntimeException(e); }
	 token_source = new SyntaxCheckerTokenManager(jj_input_stream);
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  public void ReInit(java.io.InputStream stream) {
	  ReInit(stream, null);
  }
  /** Reinitialise. */
  public void ReInit(java.io.InputStream stream, String encoding) {
	 try { jj_input_stream.ReInit(stream, encoding, 1, 1); } catch(java.io.UnsupportedEncodingException e) { throw new RuntimeException(e); }
	 token_source.ReInit(jj_input_stream);
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  /** Constructor. */
  public SyntaxChecker(java.io.Reader stream) {
	 jj_input_stream = new SimpleCharStream(stream, 1, 1);
	 token_source = new SyntaxCheckerTokenManager(jj_input_stream);
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  public void ReInit(java.io.Reader stream) {
	if (jj_input_stream == null) {
	   jj_input_stream = new SimpleCharStream(stream, 1, 1);
	} else {
	   jj_input_stream.ReInit(stream, 1, 1);
	}
	if (token_source == null) {
 token_source = new SyntaxCheckerTokenManager(jj_input_stream);
	}

	 token_source.ReInit(jj_input_stream);
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  /** Constructor with generated Token Manager. */
  public SyntaxChecker(SyntaxCheckerTokenManager tm) {
	 token_source = tm;
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  /** Reinitialise. */
  public void ReInit(SyntaxCheckerTokenManager tm) {
	 token_source = tm;
	 token = new Token();
	 jj_ntk = -1;
	 jj_gen = 0;
	 for (int i = 0; i < 32; i++) jj_la1[i] = -1;
  }

  private Token jj_consume_token(int kind) throws ParseException {
	 Token oldToken;
	 if ((oldToken = token).next != null) token = token.next;
	 else token = token.next = token_source.getNextToken();
	 jj_ntk = -1;
	 if (token.kind == kind) {
	   jj_gen++;
	   return token;
	 }
	 token = oldToken;
	 jj_kind = kind;
	 throw generateParseException();
  }


/** Get the next Token. */
  final public Token getNextToken() {
	 if (token.next != null) token = token.next;
	 else token = token.next = token_source.getNextToken();
	 jj_ntk = -1;
	 jj_gen++;
	 return token;
  }

/** Get the specific Token. */
  final public Token getToken(int index) {
	 Token t = token;
	 for (int i = 0; i < index; i++) {
	   if (t.next != null) t = t.next;
	   else t = t.next = token_source.getNextToken();
	 }
	 return t;
  }

  private int jj_ntk_f() {
	 if ((jj_nt=token.next) == null)
	   return (jj_ntk = (token.next=token_source.getNextToken()).kind);
	 else
	   return (jj_ntk = jj_nt.kind);
  }

  private java.util.List<int[]> jj_expentries = new java.util.ArrayList<int[]>();
  private int[] jj_expentry;
  private int jj_kind = -1;

  /** Generate ParseException. */
  public ParseException generateParseException() {
	 jj_expentries.clear();
	 boolean[] la1tokens = new boolean[130];
	 if (jj_kind >= 0) {
	   la1tokens[jj_kind] = true;
	   jj_kind = -1;
	 }
	 for (int i = 0; i < 32; i++) {
	   if (jj_la1[i] == jj_gen) {
		 for (int j = 0; j < 32; j++) {
		   if ((jj_la1_0[i] & (1<<j)) != 0) {
			 la1tokens[j] = true;
		   }
		   if ((jj_la1_1[i] & (1<<j)) != 0) {
			 la1tokens[32+j] = true;
		   }
		   if ((jj_la1_2[i] & (1<<j)) != 0) {
			 la1tokens[64+j] = true;
		   }
		   if ((jj_la1_3[i] & (1<<j)) != 0) {
			 la1tokens[96+j] = true;
		   }
		   if ((jj_la1_4[i] & (1<<j)) != 0) {
			 la1tokens[128+j] = true;
		   }
		 }
	   }
	 }
	 for (int i = 0; i < 130; i++) {
	   if (la1tokens[i]) {
		 jj_expentry = new int[1];
		 jj_expentry[0] = i;
		 jj_expentries.add(jj_expentry);
	   }
	 }
	 int[][] exptokseq = new int[jj_expentries.size()][];
	 for (int i = 0; i < jj_expentries.size(); i++) {
	   exptokseq[i] = jj_expentries.get(i);
	 }
	 return new ParseException(token, exptokseq, tokenImage);
  }

  private boolean trace_enabled;

/** Trace enabled. */
  final public boolean trace_enabled() {
	 return trace_enabled;
  }

  /** Enable tracing. */
  final public void enable_tracing() {
  }

  /** Disable tracing. */
  final public void disable_tracing() {
  }

}
