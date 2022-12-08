﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/codeartifact/model/PackageOriginRestrictions.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeArtifact
{
namespace Model
{

  /**
   */
  class PutPackageOriginConfigurationRequest : public CodeArtifactRequest
  {
  public:
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPackageOriginConfiguration"; }

    AWS_CODEARTIFACT_API Aws::String SerializePayload() const override;

    AWS_CODEARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that contains the repository that contains the
     * package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline const Aws::String& GetDomainOwner() const{ return m_domainOwner; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline bool DomainOwnerHasBeenSet() const { return m_domainOwnerHasBeenSet; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const Aws::String& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = value; }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(Aws::String&& value) { m_domainOwnerHasBeenSet = true; m_domainOwner = std::move(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline void SetDomainOwner(const char* value) { m_domainOwnerHasBeenSet = true; m_domainOwner.assign(value); }

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomainOwner(const Aws::String& value) { SetDomainOwner(value); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomainOwner(Aws::String&& value) { SetDomainOwner(std::move(value)); return *this;}

    /**
     * <p> The 12-digit account number of the Amazon Web Services account that owns the
     * domain. It does not include dashes or spaces. </p>
     */
    inline PutPackageOriginConfigurationRequest& WithDomainOwner(const char* value) { SetDomainOwner(value); return *this;}


    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the package.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithRepository(const char* value) { SetRepository(value); return *this;}


    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline const PackageFormat& GetFormat() const{ return m_format; }

    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline void SetFormat(const PackageFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline void SetFormat(PackageFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithFormat(const PackageFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>A format that specifies the type of the package to be updated.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithFormat(PackageFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline PutPackageOriginConfigurationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline PutPackageOriginConfigurationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the package to be updated. The package component that
     * specifies its namespace depends on its type. For example:</p> <ul> <li> <p> The
     * namespace of a Maven package is its <code>groupId</code>. </p> </li> <li> <p>
     * The namespace of an npm package is its <code>scope</code>. </p> </li> <li> <p>
     * Python and NuGet packages do not contain a corresponding component, packages of
     * those formats do not have a namespace. </p> </li> </ul>
     */
    inline PutPackageOriginConfigurationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The name of the package to be updated.</p>
     */
    inline const Aws::String& GetPackage() const{ return m_package; }

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline bool PackageHasBeenSet() const { return m_packageHasBeenSet; }

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline void SetPackage(const Aws::String& value) { m_packageHasBeenSet = true; m_package = value; }

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline void SetPackage(Aws::String&& value) { m_packageHasBeenSet = true; m_package = std::move(value); }

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline void SetPackage(const char* value) { m_packageHasBeenSet = true; m_package.assign(value); }

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithPackage(const Aws::String& value) { SetPackage(value); return *this;}

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithPackage(Aws::String&& value) { SetPackage(std::move(value)); return *this;}

    /**
     * <p>The name of the package to be updated.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithPackage(const char* value) { SetPackage(value); return *this;}


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline const PackageOriginRestrictions& GetRestrictions() const{ return m_restrictions; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline bool RestrictionsHasBeenSet() const { return m_restrictionsHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline void SetRestrictions(const PackageOriginRestrictions& value) { m_restrictionsHasBeenSet = true; m_restrictions = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline void SetRestrictions(PackageOriginRestrictions&& value) { m_restrictionsHasBeenSet = true; m_restrictions = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithRestrictions(const PackageOriginRestrictions& value) { SetRestrictions(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that contains information about the <code>upstream</code> and
     * <code>publish</code> package origin restrictions. The <code>upstream</code>
     * restriction determines if new package versions can be ingested or retained from
     * external connections or upstream repositories. The <code>publish</code>
     * restriction determines if new package versions can be published directly to the
     * repository.</p> <p>You must include both the desired <code>upstream</code> and
     * <code>publish</code> restrictions.</p>
     */
    inline PutPackageOriginConfigurationRequest& WithRestrictions(PackageOriginRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}

  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainOwner;
    bool m_domainOwnerHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    PackageFormat m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_package;
    bool m_packageHasBeenSet = false;

    PackageOriginRestrictions m_restrictions;
    bool m_restrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
