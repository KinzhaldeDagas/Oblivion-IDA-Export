struct __declspec(align(8)) RpcStreamImpl
{
IStream_0 IStream_iface;
LONG RefCount;
PMIDL_STUB_MESSAGE pMsg;
LPDWORD size;
unsigned __int8 *data;
DWORD pos;
};
