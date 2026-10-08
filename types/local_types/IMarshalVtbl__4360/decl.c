struct IMarshalVtbl
{
HRESULT_0 (*QueryInterface)(IMarshal_0 *, const IID *const, void **);
ULONG (*AddRef)(IMarshal_0 *);
ULONG (*Release)(IMarshal_0 *);
HRESULT_0 (*GetUnmarshalClass)(IMarshal_0 *, const IID *const, void *, DWORD, void *, DWORD, CLSID *);
HRESULT_0 (*GetMarshalSizeMax)(IMarshal_0 *, const IID *const, void *, DWORD, void *, DWORD, DWORD *);
HRESULT_0 (*MarshalInterface)(IMarshal_0 *, IStream_0 *, const IID *const, void *, DWORD, void *, DWORD);
HRESULT_0 (*UnmarshalInterface)(IMarshal_0 *, IStream_0 *, const IID *const, void **);
HRESULT_0 (*ReleaseMarshalData)(IMarshal_0 *, IStream_0 *);
HRESULT_0 (*DisconnectObject)(IMarshal_0 *, DWORD);
};
