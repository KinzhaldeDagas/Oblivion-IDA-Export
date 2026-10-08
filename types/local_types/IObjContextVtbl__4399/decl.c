struct IObjContextVtbl
{
HRESULT_0 (*QueryInterface)(IObjContext_0 *, const IID *const, void **);
ULONG (*AddRef)(IObjContext_0 *);
ULONG (*Release)(IObjContext_0 *);
HRESULT_0 (*SetProperty)(IObjContext_0 *, const GUID *const, CPFLAGS, IUnknown_0 *);
HRESULT_0 (*RemoveProperty)(IObjContext_0 *, const GUID *const);
HRESULT_0 (*GetProperty)(IObjContext_0 *, const GUID *const, CPFLAGS *, IUnknown_0 **);
HRESULT_0 (*EnumContextProps)(IObjContext_0 *, IEnumContextProps_0 **);
void (*Reserved1)(IObjContext_0 *);
void (*Reserved2)(IObjContext_0 *);
void (*Reserved3)(IObjContext_0 *);
void (*Reserved4)(IObjContext_0 *);
void (*Reserved5)(IObjContext_0 *);
void (*Reserved6)(IObjContext_0 *);
void (*Reserved7)(IObjContext_0 *);
};
