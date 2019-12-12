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

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RecoveryOptionNameType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A map containing a priority as a key, and recovery method name as a
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RecoveryOptionType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType
  {
  public:
    RecoveryOptionType();
    RecoveryOptionType(Aws::Utils::Json::JsonView jsonValue);
    RecoveryOptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline RecoveryOptionType& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline const RecoveryOptionNameType& GetName() const{ return m_name; }

    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline void SetName(const RecoveryOptionNameType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline void SetName(RecoveryOptionNameType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline RecoveryOptionType& WithName(const RecoveryOptionNameType& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the recovery method for a user.</p>
     */
    inline RecoveryOptionType& WithName(RecoveryOptionNameType&& value) { SetName(std::move(value)); return *this;}

  private:

    int m_priority;
    bool m_priorityHasBeenSet;

    RecoveryOptionNameType m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws