﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/CalculationSummary.h>
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
namespace Athena
{
namespace Model
{
  class ListCalculationExecutionsResult
  {
  public:
    AWS_ATHENA_API ListCalculationExecutionsResult();
    AWS_ATHENA_API ListCalculationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API ListCalculationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListCalculationExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListCalculationExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by the Athena service that specifies where to continue
     * pagination if a previous request was truncated. To obtain the next set of pages,
     * pass in the <code>NextToken</code> from the response object of the previous page
     * call.</p>
     */
    inline ListCalculationExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline const Aws::Vector<CalculationSummary>& GetCalculations() const{ return m_calculations; }

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline void SetCalculations(const Aws::Vector<CalculationSummary>& value) { m_calculations = value; }

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline void SetCalculations(Aws::Vector<CalculationSummary>&& value) { m_calculations = std::move(value); }

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline ListCalculationExecutionsResult& WithCalculations(const Aws::Vector<CalculationSummary>& value) { SetCalculations(value); return *this;}

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline ListCalculationExecutionsResult& WithCalculations(Aws::Vector<CalculationSummary>&& value) { SetCalculations(std::move(value)); return *this;}

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline ListCalculationExecutionsResult& AddCalculations(const CalculationSummary& value) { m_calculations.push_back(value); return *this; }

    /**
     * <p>A list of <a>CalculationSummary</a> objects.</p>
     */
    inline ListCalculationExecutionsResult& AddCalculations(CalculationSummary&& value) { m_calculations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CalculationSummary> m_calculations;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
