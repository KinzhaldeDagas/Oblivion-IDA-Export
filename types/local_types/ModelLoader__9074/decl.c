struct ModelLoader
{
LockFreeMap *modelMap;
LockFreeMap *kfMap;
LockFreeMap *refMap;
LockFreeMap *idleMap;
LockFreeMap *helmetMap;
LockFreeQueue_NiIOTask *distant3DMap;
BackgroundCloneThread *bgCloneThread;
};
