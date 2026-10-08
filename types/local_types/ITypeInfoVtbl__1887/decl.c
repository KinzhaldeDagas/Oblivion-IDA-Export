struct ITypeInfoVtbl
{
HRESULT_0 (*QueryInterface)(ITypeInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(ITypeInfo_0 *);
ULONG (*Release)(ITypeInfo_0 *);
HRESULT_0 (*GetTypeAttr)(ITypeInfo_0 *, TYPEATTR **);
HRESULT_0 (*GetTypeComp)(ITypeInfo_0 *, ITypeComp_0 **);
HRESULT_0 (*GetFuncDesc)(ITypeInfo_0 *, UINT, FUNCDESC **);
HRESULT_0 (*GetVarDesc)(ITypeInfo_0 *, UINT, VARDESC **);
HRESULT_0 (*GetNames)(ITypeInfo_0 *, MEMBERID, BSTR *, UINT, UINT *);
HRESULT_0 (*GetRefTypeOfImplType)(ITypeInfo_0 *, UINT, HREFTYPE *);
HRESULT_0 (*GetImplTypeFlags)(ITypeInfo_0 *, UINT, INT *);
HRESULT_0 (*GetIDsOfNames)(ITypeInfo_0 *, LPOLESTR *, UINT, MEMBERID *);
HRESULT_0 (*Invoke)(ITypeInfo_0 *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
HRESULT_0 (*GetDocumentation)(ITypeInfo_0 *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
HRESULT_0 (*GetDllEntry)(ITypeInfo_0 *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
HRESULT_0 (*GetRefTypeInfo)(ITypeInfo_0 *, HREFTYPE, ITypeInfo_0 **);
HRESULT_0 (*AddressOfMember)(ITypeInfo_0 *, MEMBERID, INVOKEKIND, PVOID *);
HRESULT_0 (*CreateInstance)(ITypeInfo_0 *, IUnknown_0 *, const IID *const, PVOID *);
HRESULT_0 (*GetMops)(ITypeInfo_0 *, MEMBERID, BSTR *);
HRESULT_0 (*GetContainingTypeLib)(ITypeInfo_0 *, ITypeLib_0 **, UINT *);
void (*ReleaseTypeAttr)(ITypeInfo_0 *, TYPEATTR *);
void (*ReleaseFuncDesc)(ITypeInfo_0 *, FUNCDESC *);
void (*ReleaseVarDesc)(ITypeInfo_0 *, VARDESC *);
};
