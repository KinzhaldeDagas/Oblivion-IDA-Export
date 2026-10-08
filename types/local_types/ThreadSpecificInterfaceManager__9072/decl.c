struct __declspec(align(4)) ThreadSpecificInterfaceManager
{
UInt32 maxThread;
UInt32 tlsStorage;
void *unk08;
UInt32 numCurrentThreads;
};
