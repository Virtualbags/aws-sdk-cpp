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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a local gateway virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayVirtualInterface">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LocalGatewayVirtualInterface
  {
  public:
    LocalGatewayVirtualInterface();
    LocalGatewayVirtualInterface(const Aws::Utils::Xml::XmlNode& xmlNode);
    LocalGatewayVirtualInterface& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceId() const{ return m_localGatewayVirtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline bool LocalGatewayVirtualInterfaceIdHasBeenSet() const { return m_localGatewayVirtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceId(const Aws::String& value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceId(Aws::String&& value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetLocalGatewayVirtualInterfaceId(const char* value) { m_localGatewayVirtualInterfaceIdHasBeenSet = true; m_localGatewayVirtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayVirtualInterfaceId(const char* value) { SetLocalGatewayVirtualInterfaceId(value); return *this;}


    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}


    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline bool VlanHasBeenSet() const { return m_vlanHasBeenSet; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline void SetVlan(int value) { m_vlanHasBeenSet = true; m_vlan = value; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline LocalGatewayVirtualInterface& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The local address.</p>
     */
    inline const Aws::String& GetLocalAddress() const{ return m_localAddress; }

    /**
     * <p>The local address.</p>
     */
    inline bool LocalAddressHasBeenSet() const { return m_localAddressHasBeenSet; }

    /**
     * <p>The local address.</p>
     */
    inline void SetLocalAddress(const Aws::String& value) { m_localAddressHasBeenSet = true; m_localAddress = value; }

    /**
     * <p>The local address.</p>
     */
    inline void SetLocalAddress(Aws::String&& value) { m_localAddressHasBeenSet = true; m_localAddress = std::move(value); }

    /**
     * <p>The local address.</p>
     */
    inline void SetLocalAddress(const char* value) { m_localAddressHasBeenSet = true; m_localAddress.assign(value); }

    /**
     * <p>The local address.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalAddress(const Aws::String& value) { SetLocalAddress(value); return *this;}

    /**
     * <p>The local address.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalAddress(Aws::String&& value) { SetLocalAddress(std::move(value)); return *this;}

    /**
     * <p>The local address.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalAddress(const char* value) { SetLocalAddress(value); return *this;}


    /**
     * <p>The peer address.</p>
     */
    inline const Aws::String& GetPeerAddress() const{ return m_peerAddress; }

    /**
     * <p>The peer address.</p>
     */
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }

    /**
     * <p>The peer address.</p>
     */
    inline void SetPeerAddress(const Aws::String& value) { m_peerAddressHasBeenSet = true; m_peerAddress = value; }

    /**
     * <p>The peer address.</p>
     */
    inline void SetPeerAddress(Aws::String&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::move(value); }

    /**
     * <p>The peer address.</p>
     */
    inline void SetPeerAddress(const char* value) { m_peerAddressHasBeenSet = true; m_peerAddress.assign(value); }

    /**
     * <p>The peer address.</p>
     */
    inline LocalGatewayVirtualInterface& WithPeerAddress(const Aws::String& value) { SetPeerAddress(value); return *this;}

    /**
     * <p>The peer address.</p>
     */
    inline LocalGatewayVirtualInterface& WithPeerAddress(Aws::String&& value) { SetPeerAddress(std::move(value)); return *this;}

    /**
     * <p>The peer address.</p>
     */
    inline LocalGatewayVirtualInterface& WithPeerAddress(const char* value) { SetPeerAddress(value); return *this;}


    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline int GetLocalBgpAsn() const{ return m_localBgpAsn; }

    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline bool LocalBgpAsnHasBeenSet() const { return m_localBgpAsnHasBeenSet; }

    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline void SetLocalBgpAsn(int value) { m_localBgpAsnHasBeenSet = true; m_localBgpAsn = value; }

    /**
     * <p>The Border Gateway Protocol (BGP) Autonomous System Number (ASN) of the local
     * gateway.</p>
     */
    inline LocalGatewayVirtualInterface& WithLocalBgpAsn(int value) { SetLocalBgpAsn(value); return *this;}


    /**
     * <p>The peer BGP ASN.</p>
     */
    inline int GetPeerBgpAsn() const{ return m_peerBgpAsn; }

    /**
     * <p>The peer BGP ASN.</p>
     */
    inline bool PeerBgpAsnHasBeenSet() const { return m_peerBgpAsnHasBeenSet; }

    /**
     * <p>The peer BGP ASN.</p>
     */
    inline void SetPeerBgpAsn(int value) { m_peerBgpAsnHasBeenSet = true; m_peerBgpAsn = value; }

    /**
     * <p>The peer BGP ASN.</p>
     */
    inline LocalGatewayVirtualInterface& WithPeerBgpAsn(int value) { SetPeerBgpAsn(value); return *this;}

  private:

    Aws::String m_localGatewayVirtualInterfaceId;
    bool m_localGatewayVirtualInterfaceIdHasBeenSet;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet;

    int m_vlan;
    bool m_vlanHasBeenSet;

    Aws::String m_localAddress;
    bool m_localAddressHasBeenSet;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet;

    int m_localBgpAsn;
    bool m_localBgpAsnHasBeenSet;

    int m_peerBgpAsn;
    bool m_peerBgpAsnHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws