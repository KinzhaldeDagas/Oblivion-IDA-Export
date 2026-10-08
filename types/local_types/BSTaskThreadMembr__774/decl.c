struct __declspec(align(4)) BSTaskThreadMembr
{
HANDLE threadHandle;
UInt32 threadID;
UInt32 sem1_initcount;
UInt32 unk10;
HANDLE semaphore1;
UInt32 sem2_initcount;
UInt32 unk1C;
HANDLE semaphore2;
};
