struct BSTaskManagerMembr
{
LockFreeMapMembr super;
UInt32 unk1C;
UInt32 unk20;
UInt32 numThreads;
BSTaskManagerThread **threads;
void *unk2C;
};
