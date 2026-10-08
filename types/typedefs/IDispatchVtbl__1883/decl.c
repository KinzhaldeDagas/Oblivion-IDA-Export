struct IDispatchVtbl
{
HRESULT_0 (*QueryInterface)(IDispatch_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IDispatch_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IDispatch_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetTypeInfoCount)(IDispatch_0 *, UINT *) __offset(OFF64|AUTO);
HRESULT_0 (*GetTypeInfo)(IDispatch_0 *, UINT, LCID, ITypeInfo_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*GetIDsOfNames)(IDispatch_0 *, const IID *const, LPOLESTR *, UINT, LCID, DISPID *) __offset(OFF64|AUTO);
HRESULT_0 (*Invoke)(IDispatch_0 *, DISPID, const IID *const, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *) __offset(OFF64|AUTO);
};
