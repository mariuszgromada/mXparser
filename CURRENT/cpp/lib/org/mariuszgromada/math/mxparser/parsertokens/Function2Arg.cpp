/*
 * @(#)Function2Arg.cpp        6.1.0    2024-10-06
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

#include "org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp"
// --------------------------------------------------------------------------
#include "org/mariuszgromada/math/mxparser/mXparser.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp"
#include "org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp"

namespace org::mariuszgromada::math::mxparser::parsertokens {
	using namespace syntaxstringbuilder;

		API_VISIBLE StringPtr Function2Arg::TYPE_DESC = nullptr;

		/*
		 * BinaryFunction - tokens key words.
		 */
		API_VISIBLE StringPtr Function2Arg::LOG_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::MOD_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_NCK_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::BERNOULLI_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING1_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING2_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::WORPITZKY_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::KRONECKER_DELTA_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_POLYNOMIAL_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::HARMONIC_NUMBER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_CONT_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_DISCR_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROUND_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_NORMAL_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::NDIG_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::DIGIT10_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTVAL_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTEXP_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROOT_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_LOWER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_UPPER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_P_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_Q_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::PERMUTATIONS_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::BETA_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::LOG_BETA_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_STUDENT_T_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_STUDENT_T_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_STUDENT_T_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_CHI2_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_CHI2_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_CHI2_STR = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_F_SNEDECOR_STR = nullptr;
		/*
		 * BinaryFunction - syntax.
		 */
		API_VISIBLE StringPtr Function2Arg::LOG_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::MOD_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::BERNOULLI_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING1_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING2_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::WORPITZKY_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::KRONECKER_DELTA_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_POLYNOMIAL_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::HARMONIC_NUMBER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_CONT_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_DISCR_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROUND_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_NORMAL_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::NDIG_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::DIGIT10_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTVAL_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTEXP_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROOT_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_LOWER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_UPPER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_P_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_Q_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_NCK_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::PERMUTATIONS_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::BETA_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::LOG_BETA_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_STUDENT_T_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_STUDENT_T_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_STUDENT_T_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_CHI2_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_CHI2_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_CHI2_SYN = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_F_SNEDECOR_SYN = nullptr;
		/*
		 * BinaryFunction - tokens description.
		 */
		API_VISIBLE StringPtr Function2Arg::LOG_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::MOD_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::BERNOULLI_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING1_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING2_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::WORPITZKY_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::KRONECKER_DELTA_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_POLYNOMIAL_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::HARMONIC_NUMBER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_CONT_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_DISCR_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROUND_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_NORMAL_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::NDIG_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::DIGIT10_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTVAL_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTEXP_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROOT_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_LOWER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_UPPER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::PERMUTATIONS_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::BETA_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::LOG_BETA_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_STUDENT_T_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_STUDENT_T_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_STUDENT_T_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_CHI2_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_CHI2_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_CHI2_DESC = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_F_SNEDECOR_DESC = nullptr;
		/*
		 * BinaryFunction - since.
		 */
		API_VISIBLE StringPtr Function2Arg::LOG_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::MOD_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::BINOM_COEFF_NCK_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::BERNOULLI_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING1_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::STIRLING2_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::WORPITZKY_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::KRONECKER_DELTA_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::EULER_POLYNOMIAL_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::HARMONIC_NUMBER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_CONT_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_UNIFORM_DISCR_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROUND_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_NORMAL_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::NDIG_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::DIGIT10_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTVAL_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::FACTEXP_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::ROOT_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_LOWER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::INC_GAMMA_UPPER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_LOWER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::REG_GAMMA_UPPER_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::PERMUTATIONS_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::BETA_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::LOG_BETA_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_STUDENT_T_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_STUDENT_T_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_STUDENT_T_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::PDF_CHI2_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::CDF_CHI2_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::QNT_CHI2_SINCE = nullptr;
		API_VISIBLE StringPtr Function2Arg::RND_F_SNEDECOR_SINCE = nullptr;

		STATIC_VARS_INITI_CPP(Function2Arg,

			STATIC_VARS_INITI_DEPENDENCY(mXparser);
			STATIC_VARS_INITI_DEPENDENCY(ParserSymbol);
			STATIC_VARS_INITI_DEPENDENCY(SyntaxStringBuilder);

			INIT_WITH_NA(TYPE_DESC);

			/*
			 * BinaryFunction - tokens key words.
			 */
			LOG_STR = S(UTF("log"));
			MOD_STR = S(UTF("mod"));
			BINOM_COEFF_STR = S(UTF("C"));
			BINOM_COEFF_NCK_STR = S(UTF("nCk"));
			BERNOULLI_NUMBER_STR = S(UTF("Bern"));
			STIRLING1_NUMBER_STR = S(UTF("Stirl1"));
			STIRLING2_NUMBER_STR = S(UTF("Stirl2"));
			WORPITZKY_NUMBER_STR = S(UTF("Worp"));
			EULER_NUMBER_STR = S(UTF("Euler"));
			KRONECKER_DELTA_STR = S(UTF("KDelta"));
			EULER_POLYNOMIAL_STR = S(UTF("EulerPol"));
			HARMONIC_NUMBER_STR = S(UTF("Harm"));
			RND_UNIFORM_CONT_STR = S(UTF("rUni"));
			RND_UNIFORM_DISCR_STR = S(UTF("rUnid"));
			ROUND_STR = S(UTF("round"));
			RND_NORMAL_STR = S(UTF("rNor"));
			NDIG_STR = S(UTF("ndig"));
			DIGIT10_STR = S(UTF("dig10"));
			FACTVAL_STR = S(UTF("factval"));
			FACTEXP_STR = S(UTF("factexp"));
			ROOT_STR = S(UTF("root"));
			INC_GAMMA_LOWER_STR = S(UTF("GammaL"));
			INC_GAMMA_UPPER_STR = S(UTF("GammaU"));
			REG_GAMMA_LOWER_STR = S(UTF("GammaRegL"));
			REG_GAMMA_UPPER_STR = S(UTF("GammaRegU"));
			REG_GAMMA_LOWER_P_STR = S(UTF("GammaP"));
			REG_GAMMA_UPPER_Q_STR = S(UTF("GammaQ"));
			PERMUTATIONS_STR = S(UTF("nPk"));
			BETA_STR = S(UTF("Beta"));
			LOG_BETA_STR = S(UTF("logBeta"));
			PDF_STUDENT_T_STR = S(UTF("pStud"));
			CDF_STUDENT_T_STR = S(UTF("cStud"));
			QNT_STUDENT_T_STR = S(UTF("qStud"));
			PDF_CHI2_STR = S(UTF("pChi2"));
			CDF_CHI2_STR = S(UTF("cChi2"));
			QNT_CHI2_STR = S(UTF("qChi2"));
			RND_F_SNEDECOR_STR = S(UTF("rFSned"));
			/*
			 * BinaryFunction - syntax.
			 */
			LOG_SYN = SyntaxStringBuilder::binaryFunction(LOG_STR, SyntaxStringBuilder::a, SyntaxStringBuilder::b);
			MOD_SYN = SyntaxStringBuilder::binaryFunction(MOD_STR, SyntaxStringBuilder::a, SyntaxStringBuilder::b);
			BINOM_COEFF_SYN = SyntaxStringBuilder::binaryFunction(BINOM_COEFF_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			BERNOULLI_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(BERNOULLI_NUMBER_STR, SyntaxStringBuilder::m, SyntaxStringBuilder::n);
			STIRLING1_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(STIRLING1_NUMBER_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			STIRLING2_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(STIRLING2_NUMBER_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			WORPITZKY_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(WORPITZKY_NUMBER_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			EULER_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(EULER_NUMBER_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			KRONECKER_DELTA_SYN = SyntaxStringBuilder::binaryFunction(KRONECKER_DELTA_STR, SyntaxStringBuilder::i, SyntaxStringBuilder::j);
			EULER_POLYNOMIAL_SYN = SyntaxStringBuilder::binaryFunction(EULER_POLYNOMIAL_STR, SyntaxStringBuilder::m, SyntaxStringBuilder::x);
			HARMONIC_NUMBER_SYN = SyntaxStringBuilder::binaryFunction(HARMONIC_NUMBER_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::n);
			RND_UNIFORM_CONT_SYN = SyntaxStringBuilder::binaryFunction(RND_UNIFORM_CONT_STR, SyntaxStringBuilder::a, SyntaxStringBuilder::b);
			RND_UNIFORM_DISCR_SYN = SyntaxStringBuilder::binaryFunction(RND_UNIFORM_DISCR_STR, SyntaxStringBuilder::a, SyntaxStringBuilder::b);
			ROUND_SYN = SyntaxStringBuilder::binaryFunction(ROUND_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::n);
			RND_NORMAL_SYN = SyntaxStringBuilder::binaryFunction(RND_NORMAL_STR, SyntaxStringBuilder::mean, SyntaxStringBuilder::stdv);
			NDIG_SYN = SyntaxStringBuilder::binaryFunction(NDIG_STR, SyntaxStringBuilder::number, SyntaxStringBuilder:: basestr);
			DIGIT10_SYN = SyntaxStringBuilder::binaryFunction(DIGIT10_STR, SyntaxStringBuilder::num, SyntaxStringBuilder ::pos);
			FACTVAL_SYN = SyntaxStringBuilder::binaryFunction(FACTVAL_STR, SyntaxStringBuilder::number, SyntaxStringBuilder::factorid);
			FACTEXP_SYN = SyntaxStringBuilder::binaryFunction(FACTEXP_STR, SyntaxStringBuilder::number, SyntaxStringBuilder::factorid);
			ROOT_SYN = SyntaxStringBuilder::binaryFunction(ROOT_STR, SyntaxStringBuilder::rootorder, SyntaxStringBuilder::number);
			INC_GAMMA_LOWER_SYN = SyntaxStringBuilder::binaryFunction(INC_GAMMA_LOWER_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			INC_GAMMA_UPPER_SYN = SyntaxStringBuilder::binaryFunction(INC_GAMMA_UPPER_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			REG_GAMMA_LOWER_SYN = SyntaxStringBuilder::binaryFunction(REG_GAMMA_LOWER_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			REG_GAMMA_UPPER_SYN = SyntaxStringBuilder::binaryFunction(REG_GAMMA_UPPER_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			REG_GAMMA_LOWER_P_SYN = SyntaxStringBuilder::binaryFunction(REG_GAMMA_LOWER_P_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			REG_GAMMA_UPPER_Q_SYN = SyntaxStringBuilder::binaryFunction(REG_GAMMA_UPPER_Q_STR, SyntaxStringBuilder::s, SyntaxStringBuilder::x);
			BINOM_COEFF_NCK_SYN = SyntaxStringBuilder::binaryFunction(BINOM_COEFF_NCK_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			PERMUTATIONS_SYN = SyntaxStringBuilder::binaryFunction(PERMUTATIONS_STR, SyntaxStringBuilder::n, SyntaxStringBuilder::k);
			BETA_SYN = SyntaxStringBuilder::binaryFunction(BETA_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::y);
			LOG_BETA_SYN = SyntaxStringBuilder::binaryFunction(LOG_BETA_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::y);
			PDF_STUDENT_T_SYN = SyntaxStringBuilder::binaryFunction(PDF_STUDENT_T_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::v);
			CDF_STUDENT_T_SYN = SyntaxStringBuilder::binaryFunction(CDF_STUDENT_T_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::v);
			QNT_STUDENT_T_SYN = SyntaxStringBuilder::binaryFunction(QNT_STUDENT_T_STR, SyntaxStringBuilder::p, SyntaxStringBuilder::v);
			PDF_CHI2_SYN = SyntaxStringBuilder::binaryFunction(PDF_CHI2_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::k);
			CDF_CHI2_SYN = SyntaxStringBuilder::binaryFunction(CDF_CHI2_STR, SyntaxStringBuilder::x, SyntaxStringBuilder::k);
			QNT_CHI2_SYN = SyntaxStringBuilder::binaryFunction(QNT_CHI2_STR, SyntaxStringBuilder::p, SyntaxStringBuilder::k);
			RND_F_SNEDECOR_SYN = SyntaxStringBuilder::binaryFunction(RND_F_SNEDECOR_STR, SyntaxStringBuilder::d1, SyntaxStringBuilder::d2);
			/*
			 * BinaryFunction - tokens description.
			 */
			INIT_WITH_NA(LOG_DESC);
			INIT_WITH_NA(MOD_DESC);
			INIT_WITH_NA(BINOM_COEFF_DESC);
			INIT_WITH_NA(BERNOULLI_NUMBER_DESC);
			INIT_WITH_NA(STIRLING1_NUMBER_DESC);
			INIT_WITH_NA(STIRLING2_NUMBER_DESC);
			INIT_WITH_NA(WORPITZKY_NUMBER_DESC);
			INIT_WITH_NA(EULER_NUMBER_DESC);
			INIT_WITH_NA(KRONECKER_DELTA_DESC);
			INIT_WITH_NA(EULER_POLYNOMIAL_DESC);
			INIT_WITH_NA(HARMONIC_NUMBER_DESC);
			INIT_WITH_NA(RND_UNIFORM_CONT_DESC);
			INIT_WITH_NA(RND_UNIFORM_DISCR_DESC);
			INIT_WITH_NA(ROUND_DESC);
			INIT_WITH_NA(RND_NORMAL_DESC);
			INIT_WITH_NA(NDIG_DESC);
			INIT_WITH_NA(DIGIT10_DESC);
			INIT_WITH_NA(FACTVAL_DESC);
			INIT_WITH_NA(FACTEXP_DESC);
			INIT_WITH_NA(ROOT_DESC);
			INIT_WITH_NA(INC_GAMMA_LOWER_DESC);
			INIT_WITH_NA(INC_GAMMA_UPPER_DESC);
			INIT_WITH_NA(REG_GAMMA_LOWER_DESC);
			INIT_WITH_NA(REG_GAMMA_UPPER_DESC);
			INIT_WITH_NA(PERMUTATIONS_DESC);
			INIT_WITH_NA(BETA_DESC);
			INIT_WITH_NA(LOG_BETA_DESC);
			INIT_WITH_NA(PDF_STUDENT_T_DESC);
			INIT_WITH_NA(CDF_STUDENT_T_DESC);
			INIT_WITH_NA(QNT_STUDENT_T_DESC);
			INIT_WITH_NA(PDF_CHI2_DESC);
			INIT_WITH_NA(CDF_CHI2_DESC);
			INIT_WITH_NA(QNT_CHI2_DESC);
			INIT_WITH_NA(RND_F_SNEDECOR_DESC);
			/*
			 * BinaryFunction - since.
			 */
			LOG_SINCE = mXparser::NAMEv10;
			MOD_SINCE = mXparser::NAMEv10;
			BINOM_COEFF_SINCE = mXparser::NAMEv10;
			BINOM_COEFF_NCK_SINCE = mXparser::NAMEv42;
			BERNOULLI_NUMBER_SINCE = mXparser::NAMEv10;
			STIRLING1_NUMBER_SINCE = mXparser::NAMEv10;
			STIRLING2_NUMBER_SINCE = mXparser::NAMEv10;
			WORPITZKY_NUMBER_SINCE = mXparser::NAMEv10;
			EULER_NUMBER_SINCE = mXparser::NAMEv10;
			KRONECKER_DELTA_SINCE = mXparser::NAMEv10;
			EULER_POLYNOMIAL_SINCE = mXparser::NAMEv10;
			HARMONIC_NUMBER_SINCE = mXparser::NAMEv10;
			RND_UNIFORM_CONT_SINCE = mXparser::NAMEv30;
			RND_UNIFORM_DISCR_SINCE = mXparser::NAMEv30;
			ROUND_SINCE = mXparser::NAMEv30;
			RND_NORMAL_SINCE = mXparser::NAMEv30;
			NDIG_SINCE = mXparser::NAMEv41;
			DIGIT10_SINCE = mXparser::NAMEv41;
			FACTVAL_SINCE = mXparser::NAMEv41;
			FACTEXP_SINCE = mXparser::NAMEv41;
			ROOT_SINCE = mXparser::NAMEv41;
			INC_GAMMA_LOWER_SINCE = mXparser::NAMEv42;
			INC_GAMMA_UPPER_SINCE = mXparser::NAMEv42;
			REG_GAMMA_LOWER_SINCE = mXparser::NAMEv42;
			REG_GAMMA_UPPER_SINCE = mXparser::NAMEv42;
			PERMUTATIONS_SINCE = mXparser::NAMEv42;
			BETA_SINCE = mXparser::NAMEv42;
			LOG_BETA_SINCE = mXparser::NAMEv42;
			PDF_STUDENT_T_SINCE = mXparser::NAMEv50;
			CDF_STUDENT_T_SINCE = mXparser::NAMEv50;
			QNT_STUDENT_T_SINCE = mXparser::NAMEv50;
			PDF_CHI2_SINCE = mXparser::NAMEv50;
			CDF_CHI2_SINCE = mXparser::NAMEv50;
			QNT_CHI2_SINCE = mXparser::NAMEv50;
			RND_F_SNEDECOR_SINCE = mXparser::NAMEv51;
	);
} // namespace org::mariuszgromada::math::mxparser::parsertokens