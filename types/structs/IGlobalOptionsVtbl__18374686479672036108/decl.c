struct IGlobalOptionsVtbl
{
HRESULT_0 (*QueryInterface)(IGlobalOptions_0 *, const IID *const, void **);
ULONG (*AddRef)(IGlobalOptions_0 *);
ULONG (*Release)(IGlobalOptions_0 *);
HRESULT_0 (*Set)(IGlobalOptions_0 *, GLOBALOPT_PROPERTIES, ULONG_PTR);
HRESULT_0 (*Query)(IGlobalOptions_0 *, GLOBALOPT_PROPERTIES, ULONG_PTR *);
};
