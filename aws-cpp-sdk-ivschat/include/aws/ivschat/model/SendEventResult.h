﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
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
namespace ivschat
{
namespace Model
{
  class SendEventResult
  {
  public:
    AWS_IVSCHAT_API SendEventResult();
    AWS_IVSCHAT_API SendEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSCHAT_API SendEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline SendEventResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline SendEventResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An identifier generated by Amazon IVS Chat. This identifier must be used in
     * subsequent operations for this message, such as DeleteMessage.</p>
     */
    inline SendEventResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
