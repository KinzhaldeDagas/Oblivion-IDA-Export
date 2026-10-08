struct IAdviseSinkVtbl
{
HRESULT_0 (*QueryInterface)(IAdviseSink_0 *, const IID *const, void **);
ULONG (*AddRef)(IAdviseSink_0 *);
ULONG (*Release)(IAdviseSink_0 *);
void (*OnDataChange)(IAdviseSink_0 *, FORMATETC *, STGMEDIUM *);
void (*OnViewChange)(IAdviseSink_0 *, DWORD, LONG);
void (*OnRename)(IAdviseSink_0 *, IMoniker_0 *);
void (*OnSave)(IAdviseSink_0 *);
void (*OnClose)(IAdviseSink_0 *);
};
