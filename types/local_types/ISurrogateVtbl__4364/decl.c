struct ISurrogateVtbl
{
HRESULT_0 (*QueryInterface)(ISurrogate_0 *, const IID *const, void **);
ULONG (*AddRef)(ISurrogate_0 *);
ULONG (*Release)(ISurrogate_0 *);
HRESULT_0 (*LoadDllServer)(ISurrogate_0 *, const CLSID *const);
HRESULT_0 (*FreeSurrogate)(ISurrogate_0 *);
};
