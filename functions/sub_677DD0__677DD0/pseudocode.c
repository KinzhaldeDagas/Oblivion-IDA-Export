_DWORD *__thiscall sub_677DD0(_DWORD *this, unsigned int a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  *this = &LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'; /*0x677e07*/
  *(this + 6) = 0; /*0x677e0d*/
  *(this + 2) = a3; /*0x677e14*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x677e21*/
  if ( v5 ) /*0x677e34*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x677e3f*/
  else
    v6 = 0; /*0x677e46*/
  *(this + 3) = v6; /*0x677e48*/
  *(this + 1) = FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  *(this + 4) = a4; /*0x677e79*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x677e7c*/
  if ( v7 ) /*0x677e92*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x677e97*/
  else
    v8 = 0; /*0x677e9e*/
  *(this + 5) = v8; /*0x677ea0*/
  return this; /*0x677ea5*/
}
