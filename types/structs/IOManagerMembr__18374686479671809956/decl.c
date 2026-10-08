struct __declspec(align(4)) IOManagerMembr
{
BSTaskManagerMembr super;
int currentThreadIDBoh;
LockFreeQueue_NiIOTask *taskQueue;
int unk38;
};
