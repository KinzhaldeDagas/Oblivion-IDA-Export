LONG __stdcall sub_768A50(int a1, LONG a2, int a3)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // esi

  result = a2; /*0x768a50*/
  v4 = InterlockedDecrement; /*0x768a5a*/
  *(_DWORD *)(a1 + 4) = a2; /*0x768a66*/
  v5 = *(_DWORD *)(a1 + 8); /*0x768a69*/
  if ( v5 == a3 ) /*0x768a6e*/
    goto LABEL_7; /*0x768a6e*/
  if ( v5 ) /*0x768a72*/
  {
    result = v4((volatile LONG *)(v5 + 4)); /*0x768a78*/
    if ( !result ) /*0x768a7c*/
      result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x768a8a*/
  }
  *(_DWORD *)(a1 + 8) = a3; /*0x768a8e*/
  if ( a3 ) /*0x768a91*/
  {
    result = InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x768a97*/
LABEL_7:
    if ( a3 ) /*0x768a9f*/
    {
      result = v4((volatile LONG *)(a3 + 4)); /*0x768aa5*/
      if ( !result ) /*0x768aa9*/
        return (**(LONG (__thiscall ***)(int, int))a3)(a3, 1); /*0x768ab3*/
    }
  }
  return result; /*0x768ab5*/
}
