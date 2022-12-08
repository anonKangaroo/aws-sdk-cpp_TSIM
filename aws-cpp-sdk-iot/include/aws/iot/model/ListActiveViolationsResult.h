﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ActiveViolation.h>
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
namespace IoT
{
namespace Model
{
  class ListActiveViolationsResult
  {
  public:
    AWS_IOT_API ListActiveViolationsResult();
    AWS_IOT_API ListActiveViolationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListActiveViolationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of active violations.</p>
     */
    inline const Aws::Vector<ActiveViolation>& GetActiveViolations() const{ return m_activeViolations; }

    /**
     * <p>The list of active violations.</p>
     */
    inline void SetActiveViolations(const Aws::Vector<ActiveViolation>& value) { m_activeViolations = value; }

    /**
     * <p>The list of active violations.</p>
     */
    inline void SetActiveViolations(Aws::Vector<ActiveViolation>&& value) { m_activeViolations = std::move(value); }

    /**
     * <p>The list of active violations.</p>
     */
    inline ListActiveViolationsResult& WithActiveViolations(const Aws::Vector<ActiveViolation>& value) { SetActiveViolations(value); return *this;}

    /**
     * <p>The list of active violations.</p>
     */
    inline ListActiveViolationsResult& WithActiveViolations(Aws::Vector<ActiveViolation>&& value) { SetActiveViolations(std::move(value)); return *this;}

    /**
     * <p>The list of active violations.</p>
     */
    inline ListActiveViolationsResult& AddActiveViolations(const ActiveViolation& value) { m_activeViolations.push_back(value); return *this; }

    /**
     * <p>The list of active violations.</p>
     */
    inline ListActiveViolationsResult& AddActiveViolations(ActiveViolation&& value) { m_activeViolations.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListActiveViolationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListActiveViolationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListActiveViolationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActiveViolation> m_activeViolations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
