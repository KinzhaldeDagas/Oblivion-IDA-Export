BSTask *__thiscall LockFreeMap<char const *,Model *>::LockFreeMap<char const *,Model *>(
        BSTask *this,
        unsigned int a2,
        int a3,
        int a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  this->vtbl = &LockFreeMap<char const *,Model *>::`vftable'; /*0x438df7*/
  *((_DWORD *)this + 6) = 0; /*0x438dfd*/
  *((_DWORD *)this + 2) = a3; /*0x438e04*/
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5; /*0x438e11*/
  if ( v5 ) /*0x438e24*/
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0); /*0x438e2f*/
  else
    v6 = 0; /*0x438e36*/
  *((_DWORD *)this + 3) = v6; /*0x438e38*/
  *((_DWORD *)this + 1) = FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  *((_DWORD *)this + 4) = a4; /*0x438e69*/
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u); /*0x438e6c*/
  if ( v7 ) /*0x438e82*/
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2); /*0x438e87*/
  else
    v8 = 0; /*0x438e8e*/
  *((_DWORD *)this + 5) = v8; /*0x438e90*/
  return this; /*0x438e95*/
}
