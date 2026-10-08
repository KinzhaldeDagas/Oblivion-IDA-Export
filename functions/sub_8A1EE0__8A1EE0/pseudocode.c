int __fastcall sub_8A1EE0(_DWORD *a1, int a2, char a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // eax
  int v10; // eax
  int v11; // esi

  if ( a3 ) /*0x8a1eea*/
  {
    if ( a1 && (v4 = a1[2]) != 0 && (v5 = *(_DWORD *)(v4 + 0xC)) != 0 ) /*0x8a1efc*/
      v6 = *(_DWORD *)(v5 + 8); /*0x8a1efe*/
    else
      v6 = 0; /*0x8a1f03*/
    if ( v6 ) /*0x8a1f07*/
    {
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x8a1f0d*/
      return sub_8A26C0(a1, v7, a3); /*0x8a1f1d*/
    }
  }
  else
  {
    if ( a1 && (v9 = a1[2]) != 0 && (v10 = *(_DWORD *)(v9 + 0xC)) != 0 ) /*0x8a1f31*/
      v11 = *(_DWORD *)(v10 + 8); /*0x8a1f33*/
    else
      v11 = 0; /*0x8a1f38*/
    if ( v11 ) /*0x8a1f3c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8a1f42*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8a1f54*/
    }
  }
  return sub_8A26C0(a1, a2, a3); /*0x8a1f1b*/
}
