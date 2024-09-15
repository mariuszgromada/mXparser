/*
 * @(#)SerializationUtils.hpp        6.1.0    2024-09-08
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

#ifndef ORG_MARIUSZGROMADA_MATH_MXPARSER_SERIALIZATIONUTILS_H
#define ORG_MARIUSZGROMADA_MATH_MXPARSER_SERIALIZATIONUTILS_H

#include "org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp"
#include "org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp"
#include "org/mariuszgromada/math/mxparser/StringModel.hpp"
#include <cereal/archives/binary.hpp>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace org::mariuszgromada::math::mxparser {
	using namespace org::mariuszgromada::math::mxparser::wrapper;

	class API_VISIBLE SerializationUtils {
	public:

		SerializationUtils() = delete;

		// ***********************************************************

		static void enableBinarySerializationIamAwareOfSecurityRisks();
		static void disableBinarySerialization();
		static bool isBinarySerializationEnabled();

		// ***********************************************************

		static bool checkLastOperationWasSuccessful();
		static StringPtr getLastOperationMessage();

		// ***********************************************************

		/**
		 * Serialization of an object to String data.
		 *
		 * Important - using binary serialization you confirm that
		 * you understand the security risks.
		 *
		 * WARNING: Deserializing data from an untrusted source can introduce
		 * security vulnerabilities to your application. Depending on the settings
		 * used during deserialization, untrusted data may be able to execute
		 * arbitrary code or cause a denial of service attack. Untrusted data
		 * can come from over the network from an untrusted source
		 * (e.g. any network client), or it can be manipulated/tampered by
		 * an intermediary while in transit over an unauthenticated connection,
		 * or from local storage where it may have been compromised/tampered,
		 * or from many other sources. MathParser.org-mXparser does not provide
		 * any means to authenticate data or secure it from tampering.
		 * Use an appropriate data authentication method before deserializing.
		 * Be very mindful of these attack scenarios; many projects and companies
		 * and users of serialization libraries in general have been bitten by
		 * untrusted deserialization of user data in the past.
		 *
		 * @param objectToSerialize The object for which serialization is possible.
		 *
		 * @return The data string if the operation was successful, otherwise it returns null.
		 * @see #getLastOperationMessage()
		 * @see #checkLastOperationWasSuccessful()
		 */
		template<typename SerializableType>
		static StdStringPtr serializeToString(const Ptr<SerializableType> &objectToSerialize) {
			lastOperationWasSuccessful = false;
			if (!binarySerializationEnabled) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->BINARY_SERIALIZATION_DISABLED);
				return nullptr;
			}
			if (objectToSerialize == nullptr) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_OBJECT_PROVIDED);
				return nullptr;
			}
			try {
				StringStreamPtr ss = new_StringStream();
				cereal::BinaryOutputArchive oarchive(*ss);
				oarchive(objectToSerialize);
				logLastOperationMessage(StringModel::STRING_RESOURCES->SERIALIZATION_PERFORMED + StringInvariant::SPACE + getSimpleName<SerializableType>(objectToSerialize));
				lastOperationWasSuccessful = true;
				StdStringPtr result = new_StdString(ss->str());
				return result;
			} catch (const cereal::Exception& e) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
				return nullptr;
			} catch (std::exception &e) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
				return nullptr;
			} catch (...) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION);
				return nullptr;
			}
			return nullptr;
		}


		/**
		 * Serialization of an object to byte data.
		 *
		 * Important - using binary serialization you confirm that
		 * you understand the security risks.
		 *
		 * WARNING: Deserializing data from an untrusted source can introduce
		 * security vulnerabilities to your application. Depending on the settings
		 * used during deserialization, untrusted data may be able to execute
		 * arbitrary code or cause a denial of service attack. Untrusted data
		 * can come from over the network from an untrusted source
		 * (e.g. any network client), or it can be manipulated/tampered by
		 * an intermediary while in transit over an unauthenticated connection,
		 * or from local storage where it may have been compromised/tampered,
		 * or from many other sources. MathParser.org-mXparser does not provide
		 * any means to authenticate data or secure it from tampering.
		 * Use an appropriate data authentication method before deserializing.
		 * Be very mindful of these attack scenarios; many projects and companies
		 * and users of serialization libraries in general have been bitten by
		 * untrusted deserialization of user data in the past.
		 *
		 * @param objectToSerialize The object for which serialization is possible.
		 *
		 * @return The data object if the operation was successful, otherwise it returns null.
		 * @see #getLastOperationMessage()
		 * @see #checkLastOperationWasSuccessful()
		 */
		template<typename SerializableType>
		static VectorPtr<char> serializeToBytes(const Ptr<SerializableType> &objectToSerialize) {
			lastOperationWasSuccessful = false;
			StdStringPtr data = serializeToString<SerializableType>(objectToSerialize);
			if (data == nullptr) return nullptr;
			return std::make_shared<std::vector<char>>(data->begin(), data->end());
		}
	    /**
	     * Serialization of an object to a file.
	     *
	     * Important - using binary serialization you confirm that
	     * you understand the security risks.
	     *
	     * WARNING: Deserializing data from an untrusted source can introduce
	     * security vulnerabilities to your application. Depending on the settings
	     * used during deserialization, untrusted data may be able to execute
	     * arbitrary code or cause a denial of service attack. Untrusted data
	     * can come from over the network from an untrusted source
	     * (e.g. any network client), or it can be manipulated/tampered by
	     * an intermediary while in transit over an unauthenticated connection,
	     * or from local storage where it may have been compromised/tampered,
	     * or from many other sources. MathParser.org-mXparser does not provide
	     * any means to authenticate data or secure it from tampering.
	     * Use an appropriate data authentication method before deserializing.
	     * Be very mindful of these attack scenarios; many projects and companies
	     * and users of serialization libraries in general have been bitten by
	     * untrusted deserialization of user data in the past.
	     *
	     * @param objectToSerialize The object for which serialization is possible.
	     * @param filePath  File path
	     *
	     * @return true if the operation was successful, otherwise it returns false.
	     * @see #getLastOperationMessage()
	     * @see #checkLastOperationWasSuccessful()
	     */
		template<typename SerializableType>
	    static bool serializeToFile(const Ptr<SerializableType> &objectToSerialize, const StdStringPtr &filePath) {
	        lastOperationWasSuccessful = false;
	        if (!binarySerializationEnabled) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->BINARY_SERIALIZATION_DISABLED);
	            return false;
	        }
	        if (filePath == nullptr) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_FILE_PATH_PROVIDED);
	            return false;
	        }
	        if (filePath->length() == 0) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->FILE_PATH_ZERO_LENGTH_PROVIDED);
	            return false;
	        }
	        if (objectToSerialize == nullptr) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_OBJECT_PROVIDED);
	            return false;
	        }
	        try {
	        	std::ofstream outputFile;
	        	outputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	        	outputFile.open(*filePath, std::ios::binary);
	        	StdStringPtr data = serializeToString<SerializableType>(objectToSerialize);
	        	outputFile << *data;
	        	outputFile.close();
	            logLastOperationMessage(StringModel::STRING_RESOURCES->SERIALIZATION_PERFORMED + StringInvariant::SPACE + getSimpleName<SerializableType>(objectToSerialize) + StringInvariant::COLON_SPACE + *filePath);
	            lastOperationWasSuccessful = true;
	            return true;
	        } catch (const std::exception &e) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
	            return false;
	        }
	    }
		template<typename SerializableType>
		static bool serializeToFile(const Ptr<SerializableType> &objectToSerialize, const std::string &filePath) {
			return serializeToFile<SerializableType>(objectToSerialize, new_StdString(filePath));
		}
		/**
		 * Deserializes an object from string data.
		 *
		 * Important - using binary serialization you confirm that
		 * you understand the security risks.
		 *
		 * WARNING: Deserializing data from an untrusted source can introduce
		 * security vulnerabilities to your application. Depending on the settings
		 * used during deserialization, untrusted data may be able to execute
		 * arbitrary code or cause a denial of service attack. Untrusted data
		 * can come from over the network from an untrusted source
		 * (e.g. any network client), or it can be manipulated/tampered by
		 * an intermediary while in transit over an unauthenticated connection,
		 * or from local storage where it may have been compromised/tampered,
		 * or from many other sources. MathParser.org-mXparser does not provide
		 * any means to authenticate data or secure it from tampering.
		 * Use an appropriate data authentication method before deserializing.
		 * Be very mindful of these attack scenarios; many projects and companies
		 * and users of serialization libraries in general have been bitten by
		 * untrusted deserialization of user data in the past.
		 *
		 * @param data Data object.
		 * @param {SerializableType} Resulting class type.
		 *
		 * @return The deserialized object if operation was successful, otherwise it returns null.
		 */
		template<typename SerializableType>
		static Ptr<SerializableType> deserializeFromString(const StdStringPtr &data) {
			lastOperationWasSuccessful = false;
			if (!binarySerializationEnabled) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->BINARY_SERIALIZATION_DISABLED);
				return nullptr;
			}
			if (data == nullptr) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_DATA_PROVIDED);
				return nullptr;
			}
			try {
				StringStreamPtr ss = new_StringStream();
				*ss << *data;
				cereal::BinaryInputArchive iarchive(*ss);
				Ptr<SerializableType> deserializedObject;
				iarchive(deserializedObject);
				lastOperationWasSuccessful = true;
				logLastOperationMessage(StringModel::STRING_RESOURCES->DESERIALIZATION_PERFORMED + StringInvariant::SPACE + getSimpleName<SerializableType>(deserializedObject));
				return deserializedObject;
			} catch (const cereal::Exception& e) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
				return nullptr;
			} catch (const std::exception &e) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
				return nullptr;
			} catch (...) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION);
				return nullptr;
			}
		}

		/**
		 * Deserializes an object from byte data.
		 *
		 * Important - using binary serialization you confirm that
		 * you understand the security risks.
		 *
		 * WARNING: Deserializing data from an untrusted source can introduce
		 * security vulnerabilities to your application. Depending on the settings
		 * used during deserialization, untrusted data may be able to execute
		 * arbitrary code or cause a denial of service attack. Untrusted data
		 * can come from over the network from an untrusted source
		 * (e.g. any network client), or it can be manipulated/tampered by
		 * an intermediary while in transit over an unauthenticated connection,
		 * or from local storage where it may have been compromised/tampered,
		 * or from many other sources. MathParser.org-mXparser does not provide
		 * any means to authenticate data or secure it from tampering.
		 * Use an appropriate data authentication method before deserializing.
		 * Be very mindful of these attack scenarios; many projects and companies
		 * and users of serialization libraries in general have been bitten by
		 * untrusted deserialization of user data in the past.
		 *
		 * @param data Data object.
		 * @param {T} Resulting class type.
		 *
		 * @return The deserialized object if operation was successful, otherwise it returns null.
		 */
		template<typename SerializableType>
		static Ptr<SerializableType> deserializeFromBytes(const VectorPtr<char> &data) {
			lastOperationWasSuccessful = false;
			if (!binarySerializationEnabled) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->BINARY_SERIALIZATION_DISABLED);
				return nullptr;
			}
			if (data == nullptr) {
				logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_DATA_PROVIDED);
				return nullptr;
			}
			StdStringPtr dataAsString = std::make_shared<std::string>(data->begin(), data->end());
			return deserializeFromString<SerializableType>(dataAsString);
		}


	    /**
	     * Deserializes an object from byte data.
	     *
	     * Important - using binary serialization you confirm that
	     * you understand the security risks.
	     *
	     * WARNING: Deserializing data from an untrusted source can introduce
	     * security vulnerabilities to your application. Depending on the settings
	     * used during deserialization, untrusted data may be able to execute
	     * arbitrary code or cause a denial of service attack. Untrusted data
	     * can come from over the network from an untrusted source
	     * (e.g. any network client), or it can be manipulated/tampered by
	     * an intermediary while in transit over an unauthenticated connection,
	     * or from local storage where it may have been compromised/tampered,
	     * or from many other sources. MathParser.org-mXparser does not provide
	     * any means to authenticate data or secure it from tampering.
	     * Use an appropriate data authentication method before deserializing.
	     * Be very mindful of these attack scenarios; many projects and companies
	     * and users of serialization libraries in general have been bitten by
	     * untrusted deserialization of user data in the past.
	     *
	     * @param filePath File path.
	     * @param {T} Resulting class type.
	     *
	     * @return The deserialized object if operation was successful, otherwise it returns null.
	     */
		template<typename SerializableType>
	    static Ptr<SerializableType> deserializeFromFile(const StdStringPtr &filePath) {
	        lastOperationWasSuccessful = false;
	        if (!binarySerializationEnabled) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->BINARY_SERIALIZATION_DISABLED);
	            return nullptr;
	        }
	        if (filePath == nullptr) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->NULL_FILE_PATH_PROVIDED);
	            return nullptr;
	        }
	        if (filePath->length() == 0) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->FILE_PATH_ZERO_LENGTH_PROVIDED);
	            return nullptr;
	        }
	        if (!std::filesystem::exists(*filePath)) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->FILE_PATH_NOT_EXISTS + StringInvariant::SPACE + *filePath);
	            return nullptr;
	        }
	        if (!std::filesystem::is_regular_file(*filePath)) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->FILE_PATH_IS_NOT_A_FILE + StringInvariant::SPACE + *filePath);
	            return nullptr;
	        }
	        try {
	        	std::ifstream inputFile;
	        	inputFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	        	inputFile.open(*filePath, std::ios::binary);
	        	inputFile.seekg(0, std::ios::end);
	        	std::streamsize fileSize = inputFile.tellg();
	        	inputFile.seekg(0, std::ios::beg);
	        	if (fileSize == 0) {
	        		inputFile.close();
	        		throw std::ios_base::failure("File is empty!");
	        	}

	        	StdStringPtr buffer = new_StdString(std::string(fileSize, '\0'));
	        	if (!inputFile.read(&(*buffer)[0], fileSize)) {
	        		inputFile.close();
	        		throw std::ios_base::failure("File reading error!");
	        	}
	        	inputFile.close();
	        	Ptr<SerializableType> deserializedObject = deserializeFromString<SerializableType>(buffer);
	            lastOperationWasSuccessful = true;
	            logLastOperationMessage(StringModel::STRING_RESOURCES->DESERIALIZATION_PERFORMED + StringInvariant::SPACE + getSimpleName<SerializableType>(deserializedObject) + StringInvariant::COLON_SPACE + *filePath);
	            return deserializedObject;
	        } catch (const std::exception &e) {
	            logLastOperationMessage(StringModel::STRING_RESOURCES->EXCEPTION + StringInvariant::COLON_SPACE + getSimpleName(e) + StringInvariant::COLON_SPACE + e.what());
	            return nullptr;
	        }
	    }

		template<typename SerializableType>
		static Ptr<SerializableType> deserializeFromFile(const std::string &filePath) {
			return deserializeFromFile<SerializableType>(new_StdString(filePath));
		}

	private:

		// ***********************************************************

		static bool binarySerializationEnabled;
		static bool lastOperationWasSuccessful;
		static StringPtr lastOperationMessage;

		// ***********************************************************

		static void logLastOperationMessage(const StringPtr &message);

		// ***********************************************************

		template<typename SerializableType>
		static StringPtr getSimpleName(const Ptr<SerializableType> &objectToSerialize) {
			return S(typeid(SerializableType).name());
		}
		static StringPtr getSimpleName(const cereal::Exception& e) {
			return S(typeid(cereal::Exception).name());
		}
		static StringPtr getSimpleName(const std::exception &e) {
			return S(typeid(std::exception).name());
		}

	};
} // namespace org::mariuszgromada::math::mxparser

#endif // ORG_MARIUSZGROMADA_MATH_MXPARSER_SERIALIZATIONUTILS_H