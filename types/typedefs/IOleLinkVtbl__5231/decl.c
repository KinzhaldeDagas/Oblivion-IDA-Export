struct IOleLinkVtbl
{
HRESULT_0 (*QueryInterface)(IOleLink_0 *, const IID *const, void **);
ULONG (*AddRef)(IOleLink_0 *);
ULONG (*Release)(IOleLink_0 *);
HRESULT_0 (*SetUpdateOptions)(IOleLink_0 *, DWORD);
HRESULT_0 (*GetUpdateOptions)(IOleLink_0 *, DWORD *);
HRESULT_0 (*SetSourceMoniker)(IOleLink_0 *, IMoniker_0 *, const CLSID *const);
HRESULT_0 (*GetSourceMoniker)(IOleLink_0 *, IMoniker_0 **);
HRESULT_0 (*SetSourceDisplayName)(IOleLink_0 *, LPCOLESTR);
HRESULT_0 (*GetSourceDisplayName)(IOleLink_0 *, LPOLESTR *);
HRESULT_0 (*BindToSource)(IOleLink_0 *, DWORD, IBindCtx_0 *);
HRESULT_0 (*BindIfRunning)(IOleLink_0 *);
HRESULT_0 (*GetBoundSource)(IOleLink_0 *, IUnknown_0 **);
HRESULT_0 (*UnbindSource)(IOleLink_0 *);
HRESULT_0 (*Update)(IOleLink_0 *, IBindCtx_0 *);
};
