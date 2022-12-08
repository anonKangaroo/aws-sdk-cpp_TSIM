﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/VpcPeeringAuthorization.h>
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
namespace GameLift
{
namespace Model
{
  class DescribeVpcPeeringAuthorizationsResult
  {
  public:
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult();
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<VpcPeeringAuthorization>& GetVpcPeeringAuthorizations() const{ return m_vpcPeeringAuthorizations; }

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline void SetVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { m_vpcPeeringAuthorizations = value; }

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline void SetVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { m_vpcPeeringAuthorizations = std::move(value); }

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { SetVpcPeeringAuthorizations(value); return *this;}

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { SetVpcPeeringAuthorizations(std::move(value)); return *this;}

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(const VpcPeeringAuthorization& value) { m_vpcPeeringAuthorizations.push_back(value); return *this; }

    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(VpcPeeringAuthorization&& value) { m_vpcPeeringAuthorizations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VpcPeeringAuthorization> m_vpcPeeringAuthorizations;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
