﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class ListGroupVersionsRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API ListGroupVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupVersions"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the Greengrass group.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline ListGroupVersionsRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline ListGroupVersionsRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline ListGroupVersionsRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * The maximum number of results to be returned per request.
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of results to be returned per request.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The maximum number of results to be returned per request.
     */
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of results to be returned per request.
     */
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }

    /**
     * The maximum number of results to be returned per request.
     */
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }

    /**
     * The maximum number of results to be returned per request.
     */
    inline ListGroupVersionsRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}

    /**
     * The maximum number of results to be returned per request.
     */
    inline ListGroupVersionsRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}

    /**
     * The maximum number of results to be returned per request.
     */
    inline ListGroupVersionsRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListGroupVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
