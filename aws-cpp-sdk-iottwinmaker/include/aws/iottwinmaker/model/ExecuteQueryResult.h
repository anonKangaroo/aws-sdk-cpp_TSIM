﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/ColumnDescription.h>
#include <aws/iottwinmaker/model/Row.h>
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
namespace IoTTwinMaker
{
namespace Model
{
  class ExecuteQueryResult
  {
  public:
    AWS_IOTTWINMAKER_API ExecuteQueryResult();
    AWS_IOTTWINMAKER_API ExecuteQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API ExecuteQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline const Aws::Vector<ColumnDescription>& GetColumnDescriptions() const{ return m_columnDescriptions; }

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline void SetColumnDescriptions(const Aws::Vector<ColumnDescription>& value) { m_columnDescriptions = value; }

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline void SetColumnDescriptions(Aws::Vector<ColumnDescription>&& value) { m_columnDescriptions = std::move(value); }

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline ExecuteQueryResult& WithColumnDescriptions(const Aws::Vector<ColumnDescription>& value) { SetColumnDescriptions(value); return *this;}

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline ExecuteQueryResult& WithColumnDescriptions(Aws::Vector<ColumnDescription>&& value) { SetColumnDescriptions(std::move(value)); return *this;}

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline ExecuteQueryResult& AddColumnDescriptions(const ColumnDescription& value) { m_columnDescriptions.push_back(value); return *this; }

    /**
     * <p>A list of ColumnDescription objects.</p>
     */
    inline ExecuteQueryResult& AddColumnDescriptions(ColumnDescription&& value) { m_columnDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline const Aws::Vector<Row>& GetRows() const{ return m_rows; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline void SetRows(const Aws::Vector<Row>& value) { m_rows = value; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline void SetRows(Aws::Vector<Row>&& value) { m_rows = std::move(value); }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& WithRows(const Aws::Vector<Row>& value) { SetRows(value); return *this;}

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& WithRows(Aws::Vector<Row>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& AddRows(const Row& value) { m_rows.push_back(value); return *this; }

    /**
     * <p>Represents a single row in the query results.</p>
     */
    inline ExecuteQueryResult& AddRows(Row&& value) { m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline ExecuteQueryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ColumnDescription> m_columnDescriptions;

    Aws::Vector<Row> m_rows;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
