﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class UpdateSegmentResult
  {
  public:
    AWS_PINPOINT_API UpdateSegmentResult();
    AWS_PINPOINT_API UpdateSegmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateSegmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SegmentResponse& GetSegmentResponse() const{ return m_segmentResponse; }

    
    inline void SetSegmentResponse(const SegmentResponse& value) { m_segmentResponse = value; }

    
    inline void SetSegmentResponse(SegmentResponse&& value) { m_segmentResponse = std::move(value); }

    
    inline UpdateSegmentResult& WithSegmentResponse(const SegmentResponse& value) { SetSegmentResponse(value); return *this;}

    
    inline UpdateSegmentResult& WithSegmentResponse(SegmentResponse&& value) { SetSegmentResponse(std::move(value)); return *this;}

  private:

    SegmentResponse m_segmentResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
