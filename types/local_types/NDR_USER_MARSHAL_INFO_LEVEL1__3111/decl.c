struct _NDR_USER_MARSHAL_INFO_LEVEL1
{
void *Buffer;
ULONG BufferSize;
void *(*pfnAllocate)(SIZE_T);
void (*pfnFree)(void *);
IRpcChannelBuffer *pRpcChannelBuffer;
ULONG_PTR Reserved[5];
};
