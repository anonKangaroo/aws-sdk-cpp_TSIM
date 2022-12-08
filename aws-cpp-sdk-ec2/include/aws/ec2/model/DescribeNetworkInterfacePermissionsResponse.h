﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NetworkInterfacePermission.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output for DescribeNetworkInterfacePermissions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacePermissionsResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse();
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInterfacePermissionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The network interface permissions.</p>
     */
    inline const Aws::Vector<NetworkInterfacePermission>& GetNetworkInterfacePermissions() const{ return m_networkInterfacePermissions; }

    /**
     * <p>The network interface permissions.</p>
     */
    inline void SetNetworkInterfacePermissions(const Aws::Vector<NetworkInterfacePermission>& value) { m_networkInterfacePermissions = value; }

    /**
     * <p>The network interface permissions.</p>
     */
    inline void SetNetworkInterfacePermissions(Aws::Vector<NetworkInterfacePermission>&& value) { m_networkInterfacePermissions = std::move(value); }

    /**
     * <p>The network interface permissions.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& WithNetworkInterfacePermissions(const Aws::Vector<NetworkInterfacePermission>& value) { SetNetworkInterfacePermissions(value); return *this;}

    /**
     * <p>The network interface permissions.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& WithNetworkInterfacePermissions(Aws::Vector<NetworkInterfacePermission>&& value) { SetNetworkInterfacePermissions(std::move(value)); return *this;}

    /**
     * <p>The network interface permissions.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& AddNetworkInterfacePermissions(const NetworkInterfacePermission& value) { m_networkInterfacePermissions.push_back(value); return *this; }

    /**
     * <p>The network interface permissions.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& AddNetworkInterfacePermissions(NetworkInterfacePermission&& value) { m_networkInterfacePermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline DescribeNetworkInterfacePermissionsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkInterfacePermissionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkInterfacePermissionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<NetworkInterfacePermission> m_networkInterfacePermissions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
