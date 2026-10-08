struct IQueryInfoVtbl
{
HRESULT_0 (*QueryInterface)(IQueryInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(IQueryInfo_0 *);
ULONG (*Release)(IQueryInfo_0 *);
HRESULT_0 (*GetInfoTip)(IQueryInfo_0 *, DWORD, WCHAR_0 **);
HRESULT_0 (*GetInfoFlags)(IQueryInfo_0 *, DWORD *);
};
