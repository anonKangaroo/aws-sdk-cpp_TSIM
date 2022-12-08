﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class GetCellReadinessSummaryRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetCellReadinessSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCellReadinessSummary"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RECOVERYREADINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * <p>The name of the cell.</p>
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellReadinessSummaryRequest& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellReadinessSummaryRequest& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline GetCellReadinessSummaryRequest& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The number of objects that you want to return with this call.</p>
     */
    inline GetCellReadinessSummaryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetCellReadinessSummaryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetCellReadinessSummaryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline GetCellReadinessSummaryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
