struct IProgressNotifyVtbl
{
HRESULT_0 (*QueryInterface)(IProgressNotify_0 *, const IID *, void **);
ULONG (*AddRef)(IProgressNotify_0 *);
ULONG (*Release)(IProgressNotify_0 *);
HRESULT_0 (*OnProgress)(IProgressNotify_0 *, DWORD, DWORD, BOOL, BOOL);
};
