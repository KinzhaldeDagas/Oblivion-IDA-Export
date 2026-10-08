struct IRpcStubBufferVtbl
{
HRESULT_0 (*QueryInterface)(IRpcStubBuffer_0 *, const IID *const, void **);
ULONG (*AddRef)(IRpcStubBuffer_0 *);
ULONG (*Release)(IRpcStubBuffer_0 *);
HRESULT_0 (*Connect)(IRpcStubBuffer_0 *, IUnknown_0 *);
void (*Disconnect)(IRpcStubBuffer_0 *);
HRESULT_0 (*Invoke)(IRpcStubBuffer_0 *, RPCOLEMESSAGE *, IRpcChannelBuffer_0 *);
IRpcStubBuffer_0 *(*IsIIDSupported)(IRpcStubBuffer_0 *, const IID *const);
ULONG (*CountRefs)(IRpcStubBuffer_0 *);
HRESULT_0 (*DebugServerQueryInterface)(IRpcStubBuffer_0 *, void **);
void (*DebugServerRelease)(IRpcStubBuffer_0 *, void *);
};
