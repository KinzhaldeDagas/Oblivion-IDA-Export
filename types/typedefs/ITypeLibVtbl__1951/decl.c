struct ITypeLibVtbl
{
HRESULT_0 (*QueryInterface)(ITypeLib_0 *, const IID *const, void **);
ULONG (*AddRef)(ITypeLib_0 *);
ULONG (*Release)(ITypeLib_0 *);
UINT (*GetTypeInfoCount)(ITypeLib_0 *);
HRESULT_0 (*GetTypeInfo)(ITypeLib_0 *, UINT, ITypeInfo_0 **);
HRESULT_0 (*GetTypeInfoType)(ITypeLib_0 *, UINT, TYPEKIND *);
HRESULT_0 (*GetTypeInfoOfGuid)(ITypeLib_0 *, const GUID *const, ITypeInfo_0 **);
HRESULT_0 (*GetLibAttr)(ITypeLib_0 *, TLIBATTR **);
HRESULT_0 (*GetTypeComp)(ITypeLib_0 *, ITypeComp_0 **);
HRESULT_0 (*GetDocumentation)(ITypeLib_0 *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
HRESULT_0 (*IsName)(ITypeLib_0 *, LPOLESTR, ULONG, BOOL *);
HRESULT_0 (*FindName)(ITypeLib_0 *, LPOLESTR, ULONG, ITypeInfo_0 **, MEMBERID *, USHORT *);
void (*ReleaseTLibAttr)(ITypeLib_0 *, TLIBATTR *);
};
