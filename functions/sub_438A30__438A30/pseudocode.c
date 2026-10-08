_DWORD *__thiscall sub_438A30(_DWORD *this, unsigned int a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  *this = &LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::`vftable'; /*0x438a67*/
  *(this + 6) = 0; /*0x438a6d*/
  *(this + 2) = a3; /*0x438a74*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x438a81*/
  if ( v5 ) /*0x438a94*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x438a9f*/
  else
    v6 = 0; /*0x438aa6*/
  *(this + 3) = v6; /*0x438aa8*/
  *(this + 1) = FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  *(this + 4) = a4; /*0x438ad9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x438adc*/
  if ( v7 ) /*0x438af2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x438af7*/
  else
    v8 = 0; /*0x438afe*/
  *(this + 5) = v8; /*0x438b00*/
  return this; /*0x438b05*/
}
