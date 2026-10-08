LONG __stdcall sub_862730(int a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  LONG result; // eax
  int v5; // edi
  int v6; // esi

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a3); /*0x86273c*/
  result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x8C))(a2, 0); /*0x862751*/
  if ( result ) /*0x862755*/
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x8C))(a2, 0); /*0x862763*/
    v5 = result; /*0x862765*/
  }
  else
  {
    v5 = unk_B430F0; /*0x862770*/
    if ( (a2[7] & 0x80) == 0 ) /*0x862776*/
      v5 = LODWORD(flt_B430DC[0]); /*0x862778*/
  }
  v6 = *(_DWORD *)(v3 + 4); /*0x86277e*/
  if ( v6 != v5 ) /*0x862783*/
  {
    if ( v6 ) /*0x862787*/
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x86278d*/
      if ( !result ) /*0x862795*/
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x8627a3*/
    }
    *(_DWORD *)(v3 + 4) = v5; /*0x8627a7*/
    if ( v5 ) /*0x8627aa*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x8627b0*/
  }
  return result; /*0x8627b6*/
}
