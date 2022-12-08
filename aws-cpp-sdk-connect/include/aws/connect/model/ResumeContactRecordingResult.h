﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{
  class ResumeContactRecordingResult
  {
  public:
    AWS_CONNECT_API ResumeContactRecordingResult();
    AWS_CONNECT_API ResumeContactRecordingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ResumeContactRecordingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace Connect
} // namespace Aws
