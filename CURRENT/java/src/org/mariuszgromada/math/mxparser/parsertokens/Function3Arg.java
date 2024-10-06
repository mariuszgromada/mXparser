/*
 * @(#)Function3Arg.java        6.1.0    2024-10-06
 *
 * MathParser.org-mXparser DUAL LICENSE AGREEMENT as of date 2024-05-19
 * The most up-to-date license is available at the below link:
 * - https://mathparser.org/mxparser-license
 *
 * AUTHOR: Copyright 2010 - 2024 Mariusz Gromada - All rights reserved
 * PUBLISHER: INFIMA - https://payhip.com/infima
 *
 * SOFTWARE means source code and/or binary form and/or documentation.
 * PRODUCT: MathParser.org-mXparser SOFTWARE
 * LICENSE: DUAL LICENSE AGREEMENT
 *
 * BY INSTALLING, COPYING, OR OTHERWISE USING THE PRODUCT, YOU AGREE TO BE
 * BOUND BY ALL OF THE TERMS AND CONDITIONS OF THE DUAL LICENSE AGREEMENT.
 *
 * The AUTHOR & PUBLISHER provide the PRODUCT under the DUAL LICENSE AGREEMENT
 * model designed to meet the needs of both non-commercial use and commercial
 * use.
 *
 * NON-COMMERCIAL USE means any use or activity where a fee is not charged
 * and the purpose is not the sale of a good or service, and the use or
 * activity is not intended to produce a profit. Examples of NON-COMMERCIAL USE
 * include:
 *
 * 1. Non-commercial open-source software.
 * 2. Non-commercial mobile applications.
 * 3. Non-commercial desktop software.
 * 4. Non-commercial web applications/solutions.
 * 5. Non-commercial use in research, scholarly and educational context.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * COMMERCIAL USE means any use or activity where a fee is charged or the
 * purpose is the sale of a good or service, or the use or activity is
 * intended to produce a profit. COMMERCIAL USE examples:
 *
 * 1. OEMs (Original Equipment Manufacturers).
 * 2. ISVs (Independent Software Vendors).
 * 3. VARs (Value Added Resellers).
 * 4. Other distributors that combine and distribute commercially licensed
 *    software.
 *
 * The above list is non-exhaustive and illustrative only.
 *
 * IN CASE YOU WANT TO USE THE PRODUCT COMMERCIALLY, YOU MUST PURCHASE THE
 * APPROPRIATE LICENSE FROM "INFIMA" ONLINE STORE, STORE ADDRESS:
 *
 * 1. https://mathparser.org/order-commercial-license
 * 2. https://payhip.com/infima
 *
 * NON-COMMERCIAL LICENSE
 *
 * Redistribution and use of the PRODUCT in source and/or binary forms,
 * with or without modification, are permitted provided that the following
 * conditions are met:
 *
 * 1. Redistributions of source code must retain the unmodified content of
 *    the entire MathParser.org-mXparser DUAL LICENSE AGREEMENT, including
 *    the definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE,
 *    the NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 2. Redistributions in binary form must reproduce the entire content of
 *    MathParser.org-mXparser DUAL LICENSE AGREEMENT in the documentation
 *    and/or other materials provided with the distribution, including the
 *    definition of NON-COMMERCIAL USE, the definition of COMMERCIAL USE, the
 *    NON-COMMERCIAL LICENSE conditions, the COMMERCIAL LICENSE conditions,
 *    and the following DISCLAIMER.
 * 3. Any form of redistribution requires confirmation and signature of
 *    the NON-COMMERCIAL USE by successfully calling the method:
 *       License.iConfirmNonCommercialUse(...)
 *    The method call is used only internally for logging purposes, and
 *    there is no connection with other external services, and no data is
 *    sent or collected. The lack of a method call (or its successful call)
 *    does not affect the operation of the PRODUCT in any way. Please see
 *    the API documentation.
 *
 * COMMERCIAL LICENSE
 *
 *  1. Before purchasing a commercial license, the AUTHOR & PUBLISHER allow
 *     you to download, install, and use up to three copies of the PRODUCT to
 *     perform integration tests, confirm the quality of the PRODUCT, and
 *     its suitability. The testing period should be limited to fourteen
 *     days. Tests should be performed under the test environments conditions
 *     and not for profit generation.
 *  2. Provided that you purchased a license from "INFIMA" online store
 *     (store address: https://mathparser.org/order-commercial-license or
 *     https://payhip.com/infima), and you comply with all terms and
 *     conditions below, and you have acknowledged and understood the
 *     following DISCLAIMER, the AUTHOR & PUBLISHER grant you a nonexclusive
 *     license with the following rights:
 *  3. The license is granted only to you, the person or entity that made
 *     the purchase, identified and confirmed by the data provided during
 *     the purchase.
 *  4. If you purchased a license in the "ONE-TIME PURCHASE" model, the
 *     license is granted only for the PRODUCT version specified in the
 *     purchase. The upgrade policy gives you additional rights, described
 *     in the dedicated section below.
 *  5. If you purchased a license in the "SUBSCRIPTION" model, you may
 *     install and use any version of the PRODUCT during the subscription
 *     validity period.
 *  6. If you purchased a "SINGLE LICENSE" you may install and use the
 *     PRODUCT on/from one workstation that is located/accessible at/from
 *     any of your premises.
 *  7. Additional copies of the PRODUCT may be installed and used on/from
 *     more than one workstation, limited to the number of workstations
 *     purchased per order.
 *  8. If you purchased a "SITE LICENSE", the PRODUCT may be installed
 *     and used on/from all workstations located/accessible at/from any
 *     of your premises.
 *  9. You may incorporate the unmodified PRODUCT into your own products
 *     and software.
 * 10. If you purchased a license with the "SOURCE CODE" option, you may
 *     modify the PRODUCT's source code and incorporate the modified source
 *     code into your own products and/or software.
 * 11. Provided that the license validity period has not expired, you may
 *     distribute your product and/or software with the incorporated
 *     PRODUCT royalty-free.
 * 12. You may make copies of the PRODUCT for backup and archival purposes.
 * 13. Any form of redistribution requires confirmation and signature of
 *     the COMMERCIAL USE by successfully calling the method:
 *        License.iConfirmCommercialUse(...)
 *     The method call is used only internally for logging purposes, and
 *     there is no connection with other external services, and no data is
 *     sent or collected. The lack of a method call (or its successful call)
 *     does not affect the operation of the PRODUCT in any way. Please see
 *     the API documentation.
 * 14. The AUTHOR & PUBLISHER reserve all rights not expressly granted to
 *     you in this agreement.
 *
 * ADDITIONAL CLARIFICATION ON WORKSTATION
 *
 * A workstation is a device, a remote device, or a virtual device, used by
 * you, your employees, or other entities to whom you have commissioned
 * tasks. For example, the number of workstations may refer to the number
 * of software developers, engineers, architects, scientists, and other
 * professionals who use the PRODUCT on your behalf. The number of
 * workstations is not the number of copies of your end-product that you
 * distribute to your end-users.
 *
 * By purchasing the COMMERCIAL LICENSE, you only pay for the number of
 * workstations, while the number of copies/users of your final product
 * (delivered to your end-users) is not limited.
 *
 * Below are some examples to help you select the right license size:
 *
 * Example 1: Single Workstation License
 * Only one developer works on the development of your application. You do
 * not use separate environments for testing, meaning you design, create,
 * test, and compile your final application on one environment. In this
 * case, you need a license for a single workstation.
 *
 * Example 2: Up to 5 Workstations License
 * Two developers are working on the development of your application.
 * Additionally, one tester conducts tests in a separate environment.
 * You use three workstations in total, so you need a license for up to
 * five workstations.
 *
 * Example 3: Up to 20 Workstations License
 * Ten developers are working on the development of your application.
 * Additionally, five testers conduct tests in separate environments.
 * You use fifteen workstations in total, so you need a license for
 * up to twenty workstations.
 *
 * Example 4: Site License
 * Several dozen developers and testers work on the development of your
 * application using multiple environments. You have a large,
 * multi-disciplinary team involved in creating your solution. As your team
 * is growing and you want to avoid licensing limitations, the best choice
 * would be a site license.
 *
 * UPGRADE POLICY
 *
 * The PRODUCT is versioned according to the following convention:
 *
 *    [MAJOR].[MINOR].[PATCH]
 *
 * 1. COMMERCIAL LICENSE holders can install and use the updated version
 *    for bug fixes free of charge, i.e. if you have purchased a license
 *    for the [MAJOR].[MINOR] version (e.g., 5.0), you can freely install
 *    all releases specified in the [PATCH] version (e.g., 5.0.2).
 *    The license terms remain unchanged after the update.
 * 2. COMMERCIAL LICENSE holders for the [MAJOR].[MINOR] version (e.g., 5.0)
 *    can install and use the updated version [MAJOR].[MINOR + 1] free of
 *    charge, i.e., plus one release in the [MINOR] range (e.g., 5.1). The
 *    license terms remain unchanged after the update.
 * 3. COMMERCIAL LICENSE holders who wish to upgrade their version, but are
 *    not eligible for the free upgrade, can claim a discount when
 *    purchasing the upgrade. For this purpose, please contact us via e-mail.
 *
 * DISCLAIMER
 *
 * THIS PRODUCT IS PROVIDED BY THE AUTHOR & PUBLISHER "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AUTHOR OR PUBLISHER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS PRODUCT, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VIEWS AND CONCLUSIONS CONTAINED IN THE PRODUCT AND DOCUMENTATION ARE
 * THOSE OF THE AUTHORS AND SHOULD NOT BE INTERPRETED AS REPRESENTING
 * OFFICIAL POLICIES, EITHER EXPRESSED OR IMPLIED, OF THE AUTHOR OR PUBLISHER.
 *
 * CONTACT
 *
 * - e-mail: info@mathparser.org
 * - website: https://mathparser.org
 * - source code: https://github.com/mariuszgromada/MathParser.org-mXparser
 * - online store: https://mathparser.org/order-commercial-license
 * - online store: https://payhip.com/infima
 */
package org.mariuszgromada.math.mxparser.parsertokens;

import org.mariuszgromada.math.mxparser.mXparser;
/**
 * Functions with 3 arguments - mXparser tokens definition.
 *
 * @author         <b>Mariusz Gromada</b><br>
 *                 <a href="https://mathparser.org" target="_blank">MathParser.org - mXparser project page</a><br>
 *                 <a href="https://github.com/mariuszgromada/MathParser.org-mXparser" target="_blank">mXparser on GitHub</a><br>
 *                 <a href="https://payhip.com/INFIMA" target="_blank">INFIMA place to purchase a commercial MathParser.org-mXparser software license</a><br>
 *                 <a href="mailto:info@mathparser.org">info@mathparser.org</a><br>
 *                 <a href="https://scalarmath.org/" target="_blank">ScalarMath.org - a powerful math engine and math scripting language</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.lite" target="_blank">Scalar Lite</a><br>
 *                 <a href="https://play.google.com/store/apps/details?id=org.mathparser.scalar.pro" target="_blank">Scalar Pro</a><br>
 *                 <a href="https://mathspace.pl" target="_blank">MathSpace.pl</a><br>
 *
 * @version        5.2.0
 */
public final class Function3Arg {
	/*
	 * 3-args Function - token type id.
	 */
	public static final int TYPE_ID = 6;
	public static String TYPE_DESC = ParserSymbol.NA;
	/*
	 * 3-args Function - tokens id.
	 */
	public static final int IF_CONDITION_ID					= 1;
	public static final int IF_ID 							= 2;
	public static final int CHI_ID							= 3;
	public static final int CHI_LR_ID						= 4;
	public static final int CHI_L_ID						= 5;
	public static final int CHI_R_ID						= 6;
	public static final int PDF_UNIFORM_CONT_ID				= 7;
	public static final int CDF_UNIFORM_CONT_ID				= 8;
	public static final int QNT_UNIFORM_CONT_ID				= 9;
	public static final int PDF_NORMAL_ID					= 10;
	public static final int CDF_NORMAL_ID					= 11;
	public static final int QNT_NORMAL_ID					= 12;
	public static final int DIGIT_ID						= 13;
	public static final int INC_BETA_ID						= 14;
	public static final int REG_BETA_ID						= 15;
	public static final int PDF_F_SNEDECOR_ID				= 16;
	public static final int CDF_F_SNEDECOR_ID				= 17;
	public static final int QNT_F_SNEDECOR_ID				= 18;
	/*
	 * 3-args Function - tokens key words.
	 */
	public static final String IF_STR 						= "if";
	public static final String CHI_STR						= "chi";
	public static final String CHI_LR_STR					= "CHi";
	public static final String CHI_L_STR					= "Chi";
	public static final String CHI_R_STR					= "cHi";
	public static final String PDF_UNIFORM_CONT_STR			= "pUni";
	public static final String CDF_UNIFORM_CONT_STR			= "cUni";
	public static final String QNT_UNIFORM_CONT_STR			= "qUni";
	public static final String PDF_NORMAL_STR				= "pNor";
	public static final String CDF_NORMAL_STR				= "cNor";
	public static final String QNT_NORMAL_STR				= "qNor";
	public static final String DIGIT_STR					= "dig";
	public static final String INC_BETA_STR					= "BetaInc";
	public static final String REG_BETA_STR					= "BetaReg";
	public static final String REG_BETA_I_STR				= "BetaI";
	public static final String PDF_F_SNEDECOR_STR			= "pFSned";
	public static final String CDF_F_SNEDECOR_STR			= "cFSned";
	public static final String QNT_F_SNEDECOR_STR			= "qFSned";
	/*
	 * 3-args Function - syntax.
	 */
	public static final String IF_SYN 						= SyntaxStringBuilder.function3Arg(IF_STR, SyntaxStringBuilder.cond, SyntaxStringBuilder.exprIfTrue, SyntaxStringBuilder.exprIfFalse);
	public static final String CHI_SYN						= SyntaxStringBuilder.function3Arg(CHI_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String CHI_LR_SYN					= SyntaxStringBuilder.function3Arg(CHI_LR_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String CHI_L_SYN					= SyntaxStringBuilder.function3Arg(CHI_L_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String CHI_R_SYN					= SyntaxStringBuilder.function3Arg(CHI_R_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String PDF_UNIFORM_CONT_SYN			= SyntaxStringBuilder.function3Arg(PDF_UNIFORM_CONT_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String CDF_UNIFORM_CONT_SYN			= SyntaxStringBuilder.function3Arg(CDF_UNIFORM_CONT_STR, SyntaxStringBuilder.a, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String QNT_UNIFORM_CONT_SYN			= SyntaxStringBuilder.function3Arg(QNT_UNIFORM_CONT_STR, SyntaxStringBuilder.q, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String PDF_NORMAL_SYN				= SyntaxStringBuilder.function3Arg(PDF_NORMAL_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.mean, SyntaxStringBuilder.stdv);
	public static final String CDF_NORMAL_SYN				= SyntaxStringBuilder.function3Arg(CDF_NORMAL_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.mean, SyntaxStringBuilder.stdv);
	public static final String QNT_NORMAL_SYN				= SyntaxStringBuilder.function3Arg(QNT_NORMAL_STR, SyntaxStringBuilder.q, SyntaxStringBuilder.mean, SyntaxStringBuilder.stdv);
	public static final String DIGIT_SYN					= SyntaxStringBuilder.function3Arg(DIGIT_STR, SyntaxStringBuilder.num, SyntaxStringBuilder.pos, SyntaxStringBuilder.basestr);
	public static final String INC_BETA_SYN					= SyntaxStringBuilder.function3Arg(INC_BETA_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String REG_BETA_SYN					= SyntaxStringBuilder.function3Arg(REG_BETA_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String REG_BETA_I_SYN				= SyntaxStringBuilder.function3Arg(REG_BETA_I_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.a, SyntaxStringBuilder.b);
	public static final String PDF_F_SNEDECOR_SYN			= SyntaxStringBuilder.function3Arg(PDF_F_SNEDECOR_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.d1, SyntaxStringBuilder.d2);
	public static final String CDF_F_SNEDECOR_SYN			= SyntaxStringBuilder.function3Arg(CDF_F_SNEDECOR_STR, SyntaxStringBuilder.x, SyntaxStringBuilder.d1, SyntaxStringBuilder.d2);
	public static final String QNT_F_SNEDECOR_SYN			= SyntaxStringBuilder.function3Arg(QNT_F_SNEDECOR_STR, SyntaxStringBuilder.p, SyntaxStringBuilder.d1, SyntaxStringBuilder.d2);
	/*
	 * 3-args Function - tokens description.
	 */
	public static String IF_DESC = ParserSymbol.NA;
	public static String CHI_DESC = ParserSymbol.NA;
	public static String CHI_LR_DESC = ParserSymbol.NA;
	public static String CHI_L_DESC = ParserSymbol.NA;
	public static String CHI_R_DESC = ParserSymbol.NA;
	public static String PDF_UNIFORM_CONT_DESC = ParserSymbol.NA;
	public static String CDF_UNIFORM_CONT_DESC = ParserSymbol.NA;
	public static String QNT_UNIFORM_CONT_DESC = ParserSymbol.NA;
	public static String PDF_NORMAL_DESC = ParserSymbol.NA;
	public static String CDF_NORMAL_DESC = ParserSymbol.NA;
	public static String QNT_NORMAL_DESC = ParserSymbol.NA;
	public static String DIGIT_DESC = ParserSymbol.NA;
	public static String INC_BETA_DESC = ParserSymbol.NA;
	public static String REG_BETA_DESC = ParserSymbol.NA;
	public static String PDF_F_SNEDECOR_DESC = ParserSymbol.NA;
	public static String CDF_F_SNEDECOR_DESC = ParserSymbol.NA;
	public static String QNT_F_SNEDECOR_DESC = ParserSymbol.NA;
	/*
	 * 3-args Function - since.
	 */
	public static final String IF_SINCE 					= mXparser.NAMEv10;
	public static final String CHI_SINCE					= mXparser.NAMEv10;
	public static final String CHI_LR_SINCE					= mXparser.NAMEv10;
	public static final String CHI_L_SINCE					= mXparser.NAMEv10;
	public static final String CHI_R_SINCE					= mXparser.NAMEv10;
	public static final String PDF_UNIFORM_CONT_SINCE		= mXparser.NAMEv30;
	public static final String CDF_UNIFORM_CONT_SINCE		= mXparser.NAMEv30;
	public static final String QNT_UNIFORM_CONT_SINCE		= mXparser.NAMEv30;
	public static final String PDF_NORMAL_SINCE				= mXparser.NAMEv30;
	public static final String CDF_NORMAL_SINCE				= mXparser.NAMEv30;
	public static final String QNT_NORMAL_SINCE				= mXparser.NAMEv30;
	public static final String DIGIT_SINCE					= mXparser.NAMEv41;
	public static final String INC_BETA_SINCE				= mXparser.NAMEv42;
	public static final String REG_BETA_SINCE				= mXparser.NAMEv42;
	public static final String REG_BETA_I_SINCE				= mXparser.NAMEv42;
	public static final String PDF_F_SNEDECOR_SINCE			= mXparser.NAMEv51;
	public static final String CDF_F_SNEDECOR_SINCE			= mXparser.NAMEv51;
	public static final String QNT_F_SNEDECOR_SINCE			= mXparser.NAMEv51;
}