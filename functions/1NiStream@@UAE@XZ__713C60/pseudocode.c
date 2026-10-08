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
  char *v11; // eax
  unsigned int v12; // edi
  char *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // [esp-4h] [ebp-28h]

  *(_DWORD *)this = &NiStream::`vftable'; /*0x713c8b*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x87); /*0x713c91*/
  if ( v2 ) /*0x713ca1*/
    (**v2)(v2, 1); /*0x713ca9*/
  v3 = *((void (__thiscall ****)(_DWORD, int))this + 0x88); /*0x713cab*/
  if ( v3 ) /*0x713cb3*/
    (**v3)(v3, 1); /*0x713cbb*/
  EnterCriticalSection(&unk_B3FC00); /*0x713cc2*/
  CurrentThreadId = GetCurrentThreadId(); /*0x713cc8*/
  ++unk_B3FC7C; /*0x713cd9*/
  unk_B3FC78 = CurrentThreadId; /*0x713ce1*/
  sub_8BCC50((_DWORD *)this + 0x81); /*0x713ce6*/
  if ( unk_B3FC7C-- == 1 ) /*0x713ceb*/
    unk_B3FC78 = 0; /*0x713cf3*/
  LeaveCriticalSection(&unk_B3FC00); /*0x713d02*/
  v6 = *((_DWORD *)this + 0x95); /*0x713d08*/
  v7 = InterlockedDecrement; /*0x713d10*/
  if ( v6 ) /*0x713d16*/
  {
    if ( !v7((volatile LONG *)(v6 + 4)) ) /*0x713d1c*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x713d2e*/
    *((_DWORD *)this + 0x95) = 0; /*0x713d30*/
  }
  v8 = *((void (__thiscall ****)(_DWORD, int))this + 0x7A); /*0x713d3a*/
  if ( v8 ) /*0x713d42*/
    (**v8)(v8, 1); /*0x713d4a*/
  v9 = *((void (__thiscall ****)(_DWORD, int))this + 0x9E); /*0x713d4c*/
  if ( v9 ) /*0x713d54*/
    (**v9)(v9, 1); /*0x713d5c*/
  v10 = *((_DWORD *)this + 0x95); /*0x713d5e*/
  if ( v10 ) /*0x713d6b*/
  {
    if ( !v7((volatile LONG *)(v10 + 4)) ) /*0x713d71*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x713d83*/
  }
  NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>((unsigned int *)this + 0x91); /*0x713d90*/
  FormHeapFree(*((_DWORD *)this + 0x8D)); /*0x713d9c*/
  FormHeapFree(*((_DWORD *)this + 0x89)); /*0x713da8*/
  v11 = *((char **)this + 0x82); /*0x713dad*/
  *((_DWORD *)this + 0x81) = &NiTLargeArray<NiPointer<NiObject>>::`vftable'; /*0x713dba*/
  if ( v11 ) /*0x713dc1*/
  {
    v12 = (unsigned int)(v11 + 0xFFFFFFFC); /*0x713dc6*/
    _LN21(v11, 4u, *((_DWORD *)v11 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x713dd2*/
    FormHeapFree(v12); /*0x713dd8*/
  }
  v13 = *((char **)this + 0x7C); /*0x713de0*/
  *((_DWORD *)this + 0x7B) = &NiTLargeArray<NiPointer<NiObject>>::`vftable'; /*0x713ded*/
  if ( v13 ) /*0x713df7*/
  {
    v14 = (unsigned int)(v13 + 0xFFFFFFFC); /*0x713dfc*/
    _LN21(v13, 4u, *((_DWORD *)v13 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x713e08*/
    FormHeapFree(v14); /*0x713e0e*/
  }
  v15 = *((_DWORD *)this + 0x33); /*0x713e1c*/
  *((_DWORD *)this + 0x32) = &NiTArray<NiObjectGroup *>::`vftable'; /*0x713e1d*/
  FormHeapFree(v15); /*0x713e27*/
}
