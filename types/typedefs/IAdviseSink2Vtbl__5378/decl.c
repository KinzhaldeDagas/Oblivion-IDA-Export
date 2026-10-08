struct IAdviseSink2Vtbl
{
HRESULT_0 (*QueryInterface)(IAdviseSink2_0 *, const IID *const, void **);
ULONG (*AddRef)(IAdviseSink2_0 *);
ULONG (*Release)(IAdviseSink2_0 *);
void (*OnDataChange)(IAdviseSink2_0 *, FORMATETC *, STGMEDIUM_0 *);
void (*OnViewChange)(IAdviseSink2_0 *, DWORD, LONG);
void (*OnRename)(IAdviseSink2_0 *, IMoniker_0 *);
void (*OnSave)(IAdviseSink2_0 *);
void (*OnClose)(IAdviseSink2_0 *);
void (*OnLinkSrcChange)(IAdviseSink2_0 *, IMoniker_0 *);
};
