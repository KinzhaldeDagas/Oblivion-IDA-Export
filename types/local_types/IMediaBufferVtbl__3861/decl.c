struct IMediaBufferVtbl
{
HRESULT_0 (*QueryInterface)(IMediaBuffer_0 *, const IID *const, void **);
ULONG (*AddRef)(IMediaBuffer_0 *);
ULONG (*Release)(IMediaBuffer_0 *);
HRESULT_0 (*SetLength)(IMediaBuffer_0 *, DWORD);
HRESULT_0 (*GetMaxLength)(IMediaBuffer_0 *, DWORD *);
HRESULT_0 (*GetBufferAndLength)(IMediaBuffer_0 *, BYTE **, DWORD *);
};
