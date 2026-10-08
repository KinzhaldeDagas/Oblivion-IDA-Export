struct IMonikerVtbl
{
HRESULT_0 (*QueryInterface)(IMoniker_0 *, const IID *const, void **) __offset(OFF64|AUTO);
ULONG (*AddRef)(IMoniker_0 *) __offset(OFF64|AUTO);
ULONG (*Release)(IMoniker_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetClassID)(IMoniker_0 *, CLSID *) __offset(OFF64|AUTO);
HRESULT_0 (*IsDirty)(IMoniker_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Load)(IMoniker_0 *, IStream_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Save)(IMoniker_0 *, IStream_0 *, BOOL) __offset(OFF64|AUTO);
HRESULT_0 (*GetSizeMax)(IMoniker_0 *, ULARGE_INTEGER *) __offset(OFF64|AUTO);
HRESULT_0 (*BindToObject)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, const IID *const, void **) __offset(OFF64|AUTO);
HRESULT_0 (*BindToStorage)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, const IID *const, void **) __offset(OFF64|AUTO);
HRESULT_0 (*Reduce)(IMoniker_0 *, IBindCtx_0 *, DWORD, IMoniker_0 **, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*ComposeWith)(IMoniker_0 *, IMoniker_0 *, BOOL, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*Enum)(IMoniker_0 *, BOOL, IEnumMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*IsEqual)(IMoniker_0 *, IMoniker_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*Hash)(IMoniker_0 *, DWORD *) __offset(OFF64|AUTO);
HRESULT_0 (*IsRunning)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, IMoniker_0 *) __offset(OFF64|AUTO);
HRESULT_0 (*GetTimeOfLastChange)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, FILETIME *) __offset(OFF64|AUTO);
HRESULT_0 (*Inverse)(IMoniker_0 *, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*CommonPrefixWith)(IMoniker_0 *, IMoniker_0 *, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*RelativePathTo)(IMoniker_0 *, IMoniker_0 *, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*GetDisplayName)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, LPOLESTR *) __offset(OFF64|AUTO);
HRESULT_0 (*ParseDisplayName)(IMoniker_0 *, IBindCtx_0 *, IMoniker_0 *, LPOLESTR, ULONG *, IMoniker_0 **) __offset(OFF64|AUTO);
HRESULT_0 (*IsSystemMoniker)(IMoniker_0 *, DWORD *) __offset(OFF64|AUTO);
};
