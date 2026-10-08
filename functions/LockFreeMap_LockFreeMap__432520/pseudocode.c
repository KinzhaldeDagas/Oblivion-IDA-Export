LockFreeMap *__thiscall LockFreeMap::LockFreeMap(LockFreeMap *this, unsigned int a2, UInt32 a3, UInt32 a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<__int64,NiPointer<BSTask<__int64>>>::`vftable'; /*0x432557*/
  this->members.unk18 = 0; /*0x43255d*/
  this->members.numBuckets = a3; /*0x432564*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x432571*/
  if ( v5 ) /*0x432584*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x43258f*/
  else
    v6 = 0; /*0x432596*/
  this->members.buckets = v6; /*0x432598*/
  this->members.unk04 = (void *)FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  this->members.unk10 = a4; /*0x4325c9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x4325cc*/
  if ( v7 ) /*0x4325e2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x4325e7*/
  else
    v8 = 0; /*0x4325ee*/
  this->members.unk14 = v8; /*0x4325f0*/
  return this; /*0x4325f5*/
}
