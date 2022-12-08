﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>CreateDataSourceFromRedshift</code>
   * operation, and is an acknowledgement that Amazon ML received the request.</p>
   * <p>The <code>CreateDataSourceFromRedshift</code> operation is asynchronous. You
   * can poll for updates by using the <code>GetBatchPrediction</code> operation and
   * checking the <code>Status</code> parameter. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateDataSourceFromRedshiftOutput">AWS
   * API Reference</a></p>
   */
  class CreateDataSourceFromRedshiftResult
  {
  public:
    AWS_MACHINELEARNING_API CreateDataSourceFromRedshiftResult();
    AWS_MACHINELEARNING_API CreateDataSourceFromRedshiftResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateDataSourceFromRedshiftResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRedshiftResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRedshiftResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRedshiftResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
