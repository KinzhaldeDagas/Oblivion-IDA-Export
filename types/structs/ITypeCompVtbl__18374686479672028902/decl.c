struct ITypeCompVtbl
{
HRESULT_0 (*QueryInterface)(ITypeComp_0 *, const IID *const, void **);
ULONG (*AddRef)(ITypeComp_0 *);
ULONG (*Release)(ITypeComp_0 *);
HRESULT_0 (*Bind)(ITypeComp_0 *, LPOLESTR, ULONG, WORD, ITypeInfo_0 **, DESCKIND *, BINDPTR *);
HRESULT_0 (*BindType)(ITypeComp_0 *, LPOLESTR, ULONG, ITypeInfo_0 **, ITypeComp_0 **);
};
