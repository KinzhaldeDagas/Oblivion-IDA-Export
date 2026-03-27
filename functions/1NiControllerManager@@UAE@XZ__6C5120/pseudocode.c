void __thiscall NiControllerManager::~NiControllerManager(NiControllerManager *this)
{
  _DWORD *v2; // edi
  int v3; // ebp
  int *v4; // eax
  unsigned int v5; // ebp
  int *v6; // eax
  unsigned int v7; // edi

  *(_DWORD *)this = &NiControllerManager::`vftable';
  v2 = (_DWORD *)((char *)this + 0x3C);
  sub_739670((_WORD *)this + 0x1E);
  *((_DWORD *)this + 0x1E) = 0;
  v3 = *((_DWORD *)this + 0x1F);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v4 = *((int **)this + 0x1C);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 + 0xFFFFFFFF);
    _LN21(v4, 4u, v4[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
  }
  NiTStringPointerMap<NiControllerSequence *>::~NiTStringPointerMap<NiControllerSequence *>((_DWORD *)this + 0x16);
  FormHeapFree(*((_DWORD *)this + 0x13));
  v6 = (int *)v2[1];
  *v2 = &NiTArray<NiPointer<NiControllerSequence>>::`vftable';
  if ( v6 )
  {
    v7 = (unsigned int)(v6 + 0xFFFFFFFF);
    _LN21(v6, 4u, v6[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v7);
  }
  NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(this);
}
