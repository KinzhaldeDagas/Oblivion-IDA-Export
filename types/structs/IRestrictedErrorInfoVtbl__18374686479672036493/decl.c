struct IRestrictedErrorInfoVtbl
{
HRESULT_0 (*QueryInterface)(IRestrictedErrorInfo_0 *, const IID *const, void **);
ULONG (*AddRef)(IRestrictedErrorInfo_0 *);
ULONG (*Release)(IRestrictedErrorInfo_0 *);
HRESULT_0 (*GetErrorDetails)(IRestrictedErrorInfo_0 *, BSTR *, HRESULT_0 *, BSTR *, BSTR *);
HRESULT_0 (*GetReference)(IRestrictedErrorInfo_0 *, BSTR *);
};
