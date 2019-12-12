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
#include <aws/ecr/ECR_EXPORTS.h>

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
namespace ECR
{
namespace Model
{

  /**
   * <p>The image scanning configuration for a repository.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageScanningConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API ImageScanningConfiguration
  {
  public:
    ImageScanningConfiguration();
    ImageScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ImageScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The setting that determines whether images are scanned after being pushed to
     * a repository. If set to <code>true</code>, images will be scanned after being
     * pushed. If this parameter is not specified, it will default to
     * <code>false</code> and images will not be scanned unless a scan is manually
     * started with the <a>StartImageScan</a> API.</p>
     */
    inline bool GetScanOnPush() const{ return m_scanOnPush; }

    /**
     * <p>The setting that determines whether images are scanned after being pushed to
     * a repository. If set to <code>true</code>, images will be scanned after being
     * pushed. If this parameter is not specified, it will default to
     * <code>false</code> and images will not be scanned unless a scan is manually
     * started with the <a>StartImageScan</a> API.</p>
     */
    inline bool ScanOnPushHasBeenSet() const { return m_scanOnPushHasBeenSet; }

    /**
     * <p>The setting that determines whether images are scanned after being pushed to
     * a repository. If set to <code>true</code>, images will be scanned after being
     * pushed. If this parameter is not specified, it will default to
     * <code>false</code> and images will not be scanned unless a scan is manually
     * started with the <a>StartImageScan</a> API.</p>
     */
    inline void SetScanOnPush(bool value) { m_scanOnPushHasBeenSet = true; m_scanOnPush = value; }

    /**
     * <p>The setting that determines whether images are scanned after being pushed to
     * a repository. If set to <code>true</code>, images will be scanned after being
     * pushed. If this parameter is not specified, it will default to
     * <code>false</code> and images will not be scanned unless a scan is manually
     * started with the <a>StartImageScan</a> API.</p>
     */
    inline ImageScanningConfiguration& WithScanOnPush(bool value) { SetScanOnPush(value); return *this;}

  private:

    bool m_scanOnPush;
    bool m_scanOnPushHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws