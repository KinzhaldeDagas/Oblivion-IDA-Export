struct IApartmentShutdownVtbl
{
HRESULT_0 (*QueryInterface)(IApartmentShutdown_0 *, const IID *const, void **);
ULONG (*AddRef)(IApartmentShutdown_0 *);
ULONG (*Release)(IApartmentShutdown_0 *);
void (*OnUninitialize)(IApartmentShutdown_0 *, UINT64);
};
