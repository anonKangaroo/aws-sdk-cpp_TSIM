﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Contact.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListContactsResult
  {
  public:
    AWS_SSMCONTACTS_API ListContactsResult();
    AWS_SSMCONTACTS_API ListContactsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListContactsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListContactsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline const Aws::Vector<Contact>& GetContacts() const{ return m_contacts; }

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline void SetContacts(const Aws::Vector<Contact>& value) { m_contacts = value; }

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline void SetContacts(Aws::Vector<Contact>&& value) { m_contacts = std::move(value); }

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline ListContactsResult& WithContacts(const Aws::Vector<Contact>& value) { SetContacts(value); return *this;}

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline ListContactsResult& WithContacts(Aws::Vector<Contact>&& value) { SetContacts(std::move(value)); return *this;}

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline ListContactsResult& AddContacts(const Contact& value) { m_contacts.push_back(value); return *this; }

    /**
     * <p>A list of the contacts and escalation plans in your Incident Manager
     * account.</p>
     */
    inline ListContactsResult& AddContacts(Contact&& value) { m_contacts.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Contact> m_contacts;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
