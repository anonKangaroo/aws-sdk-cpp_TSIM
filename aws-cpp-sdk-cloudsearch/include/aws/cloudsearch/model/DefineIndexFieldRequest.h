﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/cloudsearch/CloudSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/IndexField.h>
#include <utility>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>DefineIndexField</a></code>
   * operation. Specifies the name of the domain you want to update and the index
   * field configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DefineIndexFieldRequest">AWS
   * API Reference</a></p>
   */
  class DefineIndexFieldRequest : public CloudSearchRequest
  {
  public:
    AWS_CLOUDSEARCH_API DefineIndexFieldRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DefineIndexField"; }

    AWS_CLOUDSEARCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDSEARCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    
    inline DefineIndexFieldRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    
    inline DefineIndexFieldRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    
    inline DefineIndexFieldRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline const IndexField& GetIndexField() const{ return m_indexField; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline bool IndexFieldHasBeenSet() const { return m_indexFieldHasBeenSet; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline void SetIndexField(const IndexField& value) { m_indexFieldHasBeenSet = true; m_indexField = value; }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline void SetIndexField(IndexField&& value) { m_indexFieldHasBeenSet = true; m_indexField = std::move(value); }

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline DefineIndexFieldRequest& WithIndexField(const IndexField& value) { SetIndexField(value); return *this;}

    /**
     * <p>The index field and field options you want to configure. </p>
     */
    inline DefineIndexFieldRequest& WithIndexField(IndexField&& value) { SetIndexField(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    IndexField m_indexField;
    bool m_indexFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
