struct ICreateErrorInfoVtbl
{
HRESULT_0 (*QueryInterface)(ICreateErrorInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(ICreateErrorInfo_0 *);
ULONG (*Release)(ICreateErrorInfo_0 *);
HRESULT_0 (*SetGUID)(ICreateErrorInfo_0 *, const GUID *const);
HRESULT_0 (*SetSource)(ICreateErrorInfo_0 *, LPOLESTR);
HRESULT_0 (*SetDescription)(ICreateErrorInfo_0 *, LPOLESTR);
HRESULT_0 (*SetHelpFile)(ICreateErrorInfo_0 *, LPOLESTR);
HRESULT_0 (*SetHelpContext)(ICreateErrorInfo_0 *, DWORD);
};
