struct ISynchronizeHandleVtbl
{
HRESULT_0 (*QueryInterface)(ISynchronizeHandle_0 *, const IID *const, void **);
ULONG (*AddRef)(ISynchronizeHandle_0 *);
ULONG (*Release)(ISynchronizeHandle_0 *);
HRESULT_0 (*GetHandle)(ISynchronizeHandle_0 *, HANDLE *);
};
