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

#include <aws/chime/model/VoiceConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

VoiceConnector::VoiceConnector() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outboundHostNameHasBeenSet(false),
    m_requireEncryption(false),
    m_requireEncryptionHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

VoiceConnector::VoiceConnector(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outboundHostNameHasBeenSet(false),
    m_requireEncryption(false),
    m_requireEncryptionHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnector& VoiceConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundHostName"))
  {
    m_outboundHostName = jsonValue.GetString("OutboundHostName");

    m_outboundHostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireEncryption"))
  {
    m_requireEncryption = jsonValue.GetBool("RequireEncryption");

    m_requireEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnector::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_outboundHostNameHasBeenSet)
  {
   payload.WithString("OutboundHostName", m_outboundHostName);

  }

  if(m_requireEncryptionHasBeenSet)
  {
   payload.WithBool("RequireEncryption", m_requireEncryption);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws