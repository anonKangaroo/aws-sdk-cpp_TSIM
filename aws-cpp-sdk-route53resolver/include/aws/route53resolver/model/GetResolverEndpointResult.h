﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class GetResolverEndpointResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetResolverEndpointResult();
    AWS_ROUTE53RESOLVER_API GetResolverEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetResolverEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Resolver endpoint that you specified in a
     * <code>GetResolverEndpoint</code> request.</p>
     */
    inline const ResolverEndpoint& GetResolverEndpoint() const{ return m_resolverEndpoint; }

    /**
     * <p>Information about the Resolver endpoint that you specified in a
     * <code>GetResolverEndpoint</code> request.</p>
     */
    inline void SetResolverEndpoint(const ResolverEndpoint& value) { m_resolverEndpoint = value; }

    /**
     * <p>Information about the Resolver endpoint that you specified in a
     * <code>GetResolverEndpoint</code> request.</p>
     */
    inline void SetResolverEndpoint(ResolverEndpoint&& value) { m_resolverEndpoint = std::move(value); }

    /**
     * <p>Information about the Resolver endpoint that you specified in a
     * <code>GetResolverEndpoint</code> request.</p>
     */
    inline GetResolverEndpointResult& WithResolverEndpoint(const ResolverEndpoint& value) { SetResolverEndpoint(value); return *this;}

    /**
     * <p>Information about the Resolver endpoint that you specified in a
     * <code>GetResolverEndpoint</code> request.</p>
     */
    inline GetResolverEndpointResult& WithResolverEndpoint(ResolverEndpoint&& value) { SetResolverEndpoint(std::move(value)); return *this;}

  private:

    ResolverEndpoint m_resolverEndpoint;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
