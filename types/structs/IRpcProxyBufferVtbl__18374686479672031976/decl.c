struct IRpcProxyBufferVtbl
{
HRESULT_0 (*QueryInterface)(IRpcProxyBuffer_0 *, const IID *const, void **);
ULONG (*AddRef)(IRpcProxyBuffer_0 *);
ULONG (*Release)(IRpcProxyBuffer_0 *);
HRESULT_0 (*Connect)(IRpcProxyBuffer_0 *, IRpcChannelBuffer_0 *);
void (*Disconnect)(IRpcProxyBuffer_0 *);
};
