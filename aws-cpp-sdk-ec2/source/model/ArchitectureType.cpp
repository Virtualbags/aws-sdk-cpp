﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/ArchitectureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ArchitectureTypeMapper
      {

        static const int i386_HASH = HashingUtils::HashString("i386");
        static const int x86_64_HASH = HashingUtils::HashString("x86_64");
        static const int arm64_HASH = HashingUtils::HashString("arm64");


        ArchitectureType GetArchitectureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == i386_HASH)
          {
            return ArchitectureType::i386;
          }
          else if (hashCode == x86_64_HASH)
          {
            return ArchitectureType::x86_64;
          }
          else if (hashCode == arm64_HASH)
          {
            return ArchitectureType::arm64;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchitectureType>(hashCode);
          }

          return ArchitectureType::NOT_SET;
        }

        Aws::String GetNameForArchitectureType(ArchitectureType enumValue)
        {
          switch(enumValue)
          {
          case ArchitectureType::i386:
            return "i386";
          case ArchitectureType::x86_64:
            return "x86_64";
          case ArchitectureType::arm64:
            return "arm64";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchitectureTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws