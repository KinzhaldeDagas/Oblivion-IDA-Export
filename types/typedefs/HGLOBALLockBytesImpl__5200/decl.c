struct HGLOBALLockBytesImpl
{
ILockBytes_0 ILockBytes_iface;
LONG ref;
HGLOBAL supportHandle;
BOOL deleteOnRelease;
__declspec(align(8)) ULARGE_INTEGER byteArraySize;
};
