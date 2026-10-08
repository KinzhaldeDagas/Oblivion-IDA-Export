struct IMediaObjectInPlaceVtbl
{
HRESULT_0 (*QueryInterface)(IMediaObjectInPlace_0 *, const IID *const, void **);
ULONG (*AddRef)(IMediaObjectInPlace_0 *);
ULONG (*Release)(IMediaObjectInPlace_0 *);
HRESULT_0 (*Process)(IMediaObjectInPlace_0 *, ULONG, BYTE *, REFERENCE_TIME, DWORD);
HRESULT_0 (*Clone)(IMediaObjectInPlace_0 *, IMediaObjectInPlace_0 **);
HRESULT_0 (*GetLatency)(IMediaObjectInPlace_0 *, REFERENCE_TIME *);
};
