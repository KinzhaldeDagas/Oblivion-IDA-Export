struct IQueryAssociationsVtbl
{
HRESULT_0 (*QueryInterface)(IQueryAssociations_0 *, const IID *const, void **);
ULONG (*AddRef)(IQueryAssociations_0 *);
ULONG (*Release)(IQueryAssociations_0 *);
HRESULT_0 (*Init)(IQueryAssociations_0 *, ASSOCF, LPCWSTR, HKEY, HWND);
HRESULT_0 (*GetString)(IQueryAssociations_0 *, ASSOCF, ASSOCSTR, LPCWSTR, LPWSTR, DWORD *);
HRESULT_0 (*GetKey)(IQueryAssociations_0 *, ASSOCF, ASSOCKEY, LPCWSTR, HKEY *);
HRESULT_0 (*GetData)(IQueryAssociations_0 *, ASSOCF, ASSOCDATA, LPCWSTR, LPVOID, DWORD *);
HRESULT_0 (*GetEnum)(IQueryAssociations_0 *, ASSOCF, ASSOCENUM, LPCWSTR, const IID *const, LPVOID *);
};
