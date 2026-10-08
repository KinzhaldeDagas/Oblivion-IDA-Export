// Verified specialized map constructor from its vtable assignment: LockFreeMap<unsigned int, NiPointer<DistantLODLoaderTask>>. DistantLODLoaderTaskMap_EnsureCreated invokes it with interfaceCount 2, 37 buckets, and entry size 0x0C.
LockFreeMap *__thiscall DistantLODLoaderTaskMap_ctor(
        LockFreeMap *this,
        unsigned int interfaceCount,
        UInt32 bucketCount,
        UInt32 itemSize)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::`vftable'; /*0x4bd087*/
  this->members.unk18 = 0; /*0x4bd08d*/
  this->members.numBuckets = bucketCount; /*0x4bd094*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)bucketCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * bucketCount);
  v6 = v5; /*0x4bd0a1*/
  if ( v5 ) /*0x4bd0b4*/
    sub_401080(v5, 4, bucketCount, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x4bd0bf*/
  else
    v6 = 0; /*0x4bd0c6*/
  this->members.buckets = v6; /*0x4bd0c8*/
  this->members.unk04 = (void *)FormHeapAlloc(
                                  (unsigned __int64)(3 * interfaceCount) >> 0x1E != 0
                                ? 0xFFFFFFFF
                                : 0xC * interfaceCount);
  this->members.unk10 = itemSize; /*0x4bd0f9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x4bd0fc*/
  if ( v7 ) /*0x4bd112*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, interfaceCount); /*0x4bd117*/
  else
    v8 = 0; /*0x4bd11e*/
  this->members.unk14 = v8; /*0x4bd120*/
  return this; /*0x4bd125*/
}
