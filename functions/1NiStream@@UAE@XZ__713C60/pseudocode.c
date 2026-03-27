void __thiscall NiStream::~NiStream(NiStream *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  DWORD CurrentThreadId; // eax
  int v6; // edi
  LONG (__stdcall *v7)(volatile LONG *); // ebx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  int v10; // edi
  int *v11; // eax
  unsigned int v12; // edi
  int *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // [esp-4h] [ebp-28h]

  *(_DWORD *)this = &NiStream::`vftable';
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x87);
  if ( v2 )
    (**v2)(v2, 1);
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 0x88);
  if ( v3 )
    (**v3)(v3, 1);
  EnterCriticalSection(&stru_B3FC00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B3FC7C;
  dword_B3FC78 = CurrentThreadId;
  sub_8BCC50((_DWORD *)this + 0x81);
  if ( dword_B3FC7C-- == 1 )
    dword_B3FC78 = 0;
  LeaveCriticalSection(&stru_B3FC00);
  v6 = *((_DWORD *)this + 0x95);
  v7 = InterlockedDecrement;
  if ( v6 )
  {
    if ( !v7((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 0x95) = 0;
  }
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 0x7A);
  if ( v8 )
    (**v8)(v8, 1);
  v9 = *((void (__thiscall ****)(_DWORD, int))this + 0x9E);
  if ( v9 )
    (**v9)(v9, 1);
  v10 = *((_DWORD *)this + 0x95);
  if ( v10 )
  {
    if ( !v7((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>((unsigned int *)this + 0x91);
  FormHeapFree(*((_DWORD *)this + 0x8D));
  FormHeapFree(*((_DWORD *)this + 0x89));
  v11 = *((int **)this + 0x82);
  *((_DWORD *)this + 0x81) = &NiTLargeArray<NiPointer<NiObject>>::`vftable';
  if ( v11 )
  {
    v12 = (unsigned int)(v11 + 0xFFFFFFFF);
    _LN21(v11, 4u, v11[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v12);
  }
  v13 = *((int **)this + 0x7C);
  *((_DWORD *)this + 0x7B) = &NiTLargeArray<NiPointer<NiObject>>::`vftable';
  if ( v13 )
  {
    v14 = (unsigned int)(v13 + 0xFFFFFFFF);
    _LN21(v13, 4u, v13[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v14);
  }
  v15 = *((_DWORD *)this + 0x33);
  *((_DWORD *)this + 0x32) = &NiTArray<NiObjectGroup *>::`vftable';
  FormHeapFree(v15);
}
