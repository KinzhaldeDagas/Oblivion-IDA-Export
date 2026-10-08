struct IProfferServiceVtbl
{
HRESULT_0 (*QueryInterface)(IProfferService_0 *, const IID *const, void **);
ULONG (*AddRef)(IProfferService_0 *);
ULONG (*Release)(IProfferService_0 *);
HRESULT_0 (*ProfferService)(IProfferService_0 *, const GUID *const, IServiceProvider_0 *, DWORD *);
HRESULT_0 (*RevokeService)(IProfferService_0 *, DWORD);
};
