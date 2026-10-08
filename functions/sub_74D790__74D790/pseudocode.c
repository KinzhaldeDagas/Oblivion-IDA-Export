_DWORD *__thiscall sub_74D790(int this, _DWORD *a2)
{
  __int16 v3; // ax
  int v5; // ecx
  unsigned __int16 v6; // ax
  void (__stdcall *v7)(volatile LONG *); // ebp
  int v8; // esi
  int *v9; // ecx
  int incoming; // [esp+4h] [ebp-4h] BYREF

  v3 = *(_WORD *)(this + 0xA); /*0x74d794*/
  if ( v3 ) /*0x74d79b*/
  {
    v5 = *(_DWORD *)(this + 4); /*0x74d7ac*/
    v6 = v3 - 1; /*0x74d7af*/
    *(_WORD *)(this + 0xA) = v6; /*0x74d7b3*/
    v7 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x74d7b8*/
    v8 = *(_DWORD *)(v5 + 4 * v6); /*0x74d7c2*/
    if ( v8 ) /*0x74d7c7*/
      v7((volatile LONG *)(v8 + 4)); /*0x74d7cd*/
    v9 = (int *)(*(_DWORD *)(this + 4) + 4 * *(unsigned __int16 *)(this + 0xA)); /*0x74d7db*/
    incoming = 0; /*0x74d7de*/
    OB_NiSmartPointer_Assign_010201A0(v9, &incoming); /*0x74d7e6*/
    if ( v8 ) /*0x74d7f2*/
      --*(_WORD *)(this + 0xC); /*0x74d7f4*/
    *a2 = v8; /*0x74d800*/
    if ( v8 ) /*0x74d802*/
    {
      v7((volatile LONG *)(v8 + 4)); /*0x74d808*/
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x74d80b*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x74d81d*/
    }
    return a2; /*0x74d821*/
  }
  else
  {
    *a2 = 0; /*0x74d7a1*/
    return a2; /*0x74d79d*/
  }
}
