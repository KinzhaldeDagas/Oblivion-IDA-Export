int __fastcall sub_8C97F0(_DWORD *a1, int a2, char a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // eax
  int v10; // eax
  int v11; // esi

  if ( a3 ) /*0x8c97fa*/
  {
    if ( a1 && (v4 = a1[2]) != 0 && (v5 = *(_DWORD *)(v4 + 0x10)) != 0 ) /*0x8c980c*/
      v6 = *(_DWORD *)(v5 + 8); /*0x8c980e*/
    else
      v6 = 0; /*0x8c9813*/
    if ( v6 ) /*0x8c9817*/
    {
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x8c981d*/
      return sub_8A26C0(a1, v7, a3); /*0x8c982d*/
    }
  }
  else
  {
    if ( a1 && (v9 = a1[2]) != 0 && (v10 = *(_DWORD *)(v9 + 0x10)) != 0 ) /*0x8c9841*/
      v11 = *(_DWORD *)(v10 + 8); /*0x8c9843*/
    else
      v11 = 0; /*0x8c9848*/
    if ( v11 ) /*0x8c984c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8c9852*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8c9864*/
    }
  }
  return sub_8A26C0(a1, a2, a3); /*0x8c982b*/
}
