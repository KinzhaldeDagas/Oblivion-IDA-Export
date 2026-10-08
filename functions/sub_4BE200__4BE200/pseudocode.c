_DWORD *__thiscall sub_4BE200(_DWORD *this, unsigned int a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  *this = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::`vftable'; /*0x4be237*/
  *(this + 6) = 0; /*0x4be23d*/
  *(this + 2) = a3; /*0x4be244*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x4be251*/
  if ( v5 ) /*0x4be264*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x4be26f*/
  else
    v6 = 0; /*0x4be276*/
  *(this + 3) = v6; /*0x4be278*/
  *(this + 1) = FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  *(this + 4) = a4; /*0x4be2a9*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x4be2ac*/
  if ( v7 ) /*0x4be2c2*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x4be2c7*/
  else
    v8 = 0; /*0x4be2ce*/
  *(this + 5) = v8; /*0x4be2d0*/
  return this; /*0x4be2d5*/
}
