struct IParseDisplayNameVtbl
{
HRESULT_0 (*QueryInterface)(IParseDisplayName_0 *, const IID *const, void **);
ULONG (*AddRef)(IParseDisplayName_0 *);
ULONG (*Release)(IParseDisplayName_0 *);
HRESULT_0 (*ParseDisplayName)(IParseDisplayName_0 *, IBindCtx_0 *, LPOLESTR, ULONG *, IMoniker_0 **);
};
