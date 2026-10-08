struct IErrorInfoVtbl
{
HRESULT_0 (*QueryInterface)(IErrorInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(IErrorInfo_0 *);
ULONG (*Release)(IErrorInfo_0 *);
HRESULT_0 (*GetGUID)(IErrorInfo_0 *, GUID *);
HRESULT_0 (*GetSource)(IErrorInfo_0 *, BSTR *);
HRESULT_0 (*GetDescription)(IErrorInfo_0 *, BSTR *);
HRESULT_0 (*GetHelpFile)(IErrorInfo_0 *, BSTR *);
HRESULT_0 (*GetHelpContext)(IErrorInfo_0 *, DWORD *);
};
