struct ICatInformationVtbl
{
HRESULT_0 (*QueryInterface)(ICatInformation_0 *, const IID *const, void **);
ULONG (*AddRef)(ICatInformation_0 *);
ULONG (*Release)(ICatInformation_0 *);
HRESULT_0 (*EnumCategories)(ICatInformation_0 *, LCID, IEnumCATEGORYINFO_0 **);
HRESULT_0 (*GetCategoryDesc)(ICatInformation_0 *, REFCATID, LCID, LPWSTR *);
HRESULT_0 (*EnumClassesOfCategories)(ICatInformation_0 *, ULONG, CATID *, ULONG, CATID *, IEnumGUID_0 **);
HRESULT_0 (*IsClassOfCategories)(ICatInformation_0 *, const CLSID *const, ULONG, CATID *, ULONG, CATID *);
HRESULT_0 (*EnumImplCategoriesOfClass)(ICatInformation_0 *, const CLSID *const, IEnumGUID_0 **);
HRESULT_0 (*EnumReqCategoriesOfClass)(ICatInformation_0 *, const CLSID *const, IEnumGUID_0 **);
};
