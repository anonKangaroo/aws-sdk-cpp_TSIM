﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/ExpirationTimeResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerFeatureStoreRuntime
  {
    namespace Model
    {
      namespace ExpirationTimeResponseMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        ExpirationTimeResponse GetExpirationTimeResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return ExpirationTimeResponse::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return ExpirationTimeResponse::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExpirationTimeResponse>(hashCode);
          }

          return ExpirationTimeResponse::NOT_SET;
        }

        Aws::String GetNameForExpirationTimeResponse(ExpirationTimeResponse enumValue)
        {
          switch(enumValue)
          {
          case ExpirationTimeResponse::Enabled:
            return "Enabled";
          case ExpirationTimeResponse::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExpirationTimeResponseMapper
    } // namespace Model
  } // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
