﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClientVpnEndpoint.h>
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
  class DescribeClientVpnEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnEndpointsResponse();
    AWS_EC2_API DescribeClientVpnEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline const Aws::Vector<ClientVpnEndpoint>& GetClientVpnEndpoints() const{ return m_clientVpnEndpoints; }

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline void SetClientVpnEndpoints(const Aws::Vector<ClientVpnEndpoint>& value) { m_clientVpnEndpoints = value; }

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline void SetClientVpnEndpoints(Aws::Vector<ClientVpnEndpoint>&& value) { m_clientVpnEndpoints = std::move(value); }

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline DescribeClientVpnEndpointsResponse& WithClientVpnEndpoints(const Aws::Vector<ClientVpnEndpoint>& value) { SetClientVpnEndpoints(value); return *this;}

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline DescribeClientVpnEndpointsResponse& WithClientVpnEndpoints(Aws::Vector<ClientVpnEndpoint>&& value) { SetClientVpnEndpoints(std::move(value)); return *this;}

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline DescribeClientVpnEndpointsResponse& AddClientVpnEndpoints(const ClientVpnEndpoint& value) { m_clientVpnEndpoints.push_back(value); return *this; }

    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline DescribeClientVpnEndpointsResponse& AddClientVpnEndpoints(ClientVpnEndpoint&& value) { m_clientVpnEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnEndpointsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnEndpointsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnEndpointsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClientVpnEndpointsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClientVpnEndpointsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ClientVpnEndpoint> m_clientVpnEndpoints;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
