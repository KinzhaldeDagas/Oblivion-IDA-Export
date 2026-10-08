LockFreeMap *__thiscall sub_438930(LockFreeMap *this, unsigned int a2, UInt32 a3, UInt32 a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::`vftable'; /*0x438967*/
  this->members.unk18 = 0; /*0x43896d*/
  this->members.numBuckets = a3; /*0x438974*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x438981*/
  if ( v5 ) /*0x438994*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x43899f*/
  else
    v6 = 0; /*0x4389a6*/
  this->members.buckets = v6; /*0x4389a8*/
  this->members.unk04 = (void *)FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  this->members.unk10 = a4; /*0x4389d9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x4389dc*/
  if ( v7 ) /*0x4389f2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x4389f7*/
  else
    v8 = 0; /*0x4389fe*/
  this->members.unk14 = v8; /*0x438a00*/
  return this; /*0x438a05*/
}
