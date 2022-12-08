﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTWireless
{
namespace Model
{
  class CreateNetworkAnalyzerConfigurationResult
  {
  public:
    AWS_IOTWIRELESS_API CreateNetworkAnalyzerConfigurationResult();
    AWS_IOTWIRELESS_API CreateNetworkAnalyzerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API CreateNetworkAnalyzerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateNetworkAnalyzerConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateNetworkAnalyzerConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline CreateNetworkAnalyzerConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline CreateNetworkAnalyzerConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateNetworkAnalyzerConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateNetworkAnalyzerConfigurationResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
