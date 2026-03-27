_DWORD *__thiscall sub_438B20(_DWORD *this, unsigned int a2, int a3, int a4)
{
  void *v5; // eax
  void *v6; // edi
  ThreadSpecificInterfaceManager *v7; // eax
  ThreadSpecificInterfaceManager *v8; // eax

  *this = &LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::`vftable';
  *(this + 6) = 0;
  *(this + 2) = a3;
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a3);
  v6 = v5;
  if ( v5 )
    sub_401080(v5, 4, a3, (void *(__thiscall *)(void *))unknown_libname_1_0);
  else
    v6 = 0;
  *(this + 3) = v6;
  *(this + 1) = FormHeapAlloc((unsigned __int64)(3 * a2) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * a2);
  *(this + 4) = a4;
  v7 = (ThreadSpecificInterfaceManager *)FormHeapAlloc(0x10u);
  if ( v7 )
    v8 = ThreadSpecificInterfaceManager::ThreadSpecificInterfaceManager(v7, a2);
  else
    v8 = 0;
  *(this + 5) = v8;
  return this;
}
