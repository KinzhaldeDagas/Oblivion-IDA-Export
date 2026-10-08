LockFreeMap *__thiscall LockFreeMap<char const *,KFModel *>::LockFreeMap<char const *,KFModel *>(
        LockFreeMap *this,
        unsigned int a2,
        UInt32 a3,
        UInt32 a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<char const *,KFModel *>::`vftable'; /*0x438f47*/
  this->members.unk18 = 0; /*0x438f4d*/
  this->members.numBuckets = a3; /*0x438f54*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x438f61*/
  if ( v5 ) /*0x438f74*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x438f7f*/
  else
    v6 = 0; /*0x438f86*/
  this->members.buckets = v6; /*0x438f88*/
  this->members.unk04 = (void *)FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  this->members.unk10 = a4; /*0x438fb9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x438fbc*/
  if ( v7 ) /*0x438fd2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x438fd7*/
  else
    v8 = 0; /*0x438fde*/
  this->members.unk14 = v8; /*0x438fe0*/
  return this; /*0x438fe5*/
}
