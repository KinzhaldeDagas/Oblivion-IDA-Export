struct IKsPropertySetVtbl
{
HRESULT_0 (*QueryInterface)(IKsPropertySet_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IKsPropertySet_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IKsPropertySet_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Get)(IKsPropertySet_0 *, const GUID *const, ULONG, LPVOID, ULONG, LPVOID, ULONG, ULONG *) __offset(OFF64|AUTO);
HRESULT_0 (*Set)(IKsPropertySet_0 *, const GUID *const, ULONG, LPVOID, ULONG, LPVOID, ULONG) __offset(OFF64|AUTO);
HRESULT_0 (*QuerySupport)(IKsPropertySet_0 *, const GUID *const, ULONG, ULONG *) __offset(OFF64|AUTO);
};
