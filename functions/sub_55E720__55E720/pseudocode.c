// Verified local RTTI and constructor call: constructs LockFreeMap<TESObjectREFR*,BSTreeNode*> with arguments (2,37,12), used by BSTreeManager at +0x24.
LockFreeMap *__thiscall BSTreeManager_ReferenceNodeMap_ctor(
        LockFreeMap *this,
        unsigned int initialSize,
        int bucketCount,
        int entrySize)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<TESObjectREFR *,BSTreeNode *>::`vftable'; /*0x55e757*/
  this->members.unk18 = 0; /*0x55e75d*/
  this->members.numBuckets = bucketCount; /*0x55e764*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)bucketCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * bucketCount);
  v6 = v5; /*0x55e771*/
  if ( v5 ) /*0x55e784*/
    sub_401080(v5, 4, bucketCount, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x55e78f*/
  else
    v6 = 0; /*0x55e796*/
  this->members.buckets = v6; /*0x55e798*/
  this->members.unk04 = (void *)FormHeapAlloc((unsigned __int64)(3 * initialSize) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * initialSize);
  this->members.unk10 = entrySize; /*0x55e7c9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x55e7cc*/
  if ( v7 ) /*0x55e7e2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, initialSize); /*0x55e7e7*/
  else
    v8 = 0; /*0x55e7ee*/
  this->members.unk14 = v8; /*0x55e7f0*/
  return this; /*0x55e7f5*/
}
