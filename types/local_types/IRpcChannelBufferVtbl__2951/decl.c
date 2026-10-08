struct IRpcChannelBufferVtbl
{
HRESULT_0 (*QueryInterface)(IRpcChannelBuffer_0 *, const IID *const, void **);
ULONG (*AddRef)(IRpcChannelBuffer_0 *);
ULONG (*Release)(IRpcChannelBuffer_0 *);
HRESULT_0 (*GetBuffer)(IRpcChannelBuffer_0 *, RPCOLEMESSAGE *, const IID *const);
HRESULT_0 (*SendReceive)(IRpcChannelBuffer_0 *, RPCOLEMESSAGE *, ULONG *);
HRESULT_0 (*FreeBuffer)(IRpcChannelBuffer_0 *, RPCOLEMESSAGE *);
HRESULT_0 (*GetDestCtx)(IRpcChannelBuffer_0 *, DWORD *, void **);
HRESULT_0 (*IsConnected)(IRpcChannelBuffer_0 *);
};
