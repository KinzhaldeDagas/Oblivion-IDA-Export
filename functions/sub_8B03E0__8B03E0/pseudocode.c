int __fastcall sub_8B03E0(_DWORD *a1, int a2, char a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // eax
  int v10; // eax
  int v11; // esi

  if ( a3 ) /*0x8b03ea*/
  {
    if ( a1 && (v4 = a1[2]) != 0 ) /*0x8b03f5*/
      v5 = *(_DWORD *)(v4 + 0xC); /*0x8b03f7*/
    else
      v5 = 0; /*0x8b03fc*/
    if ( v5 ) /*0x8b0400*/
    {
      v6 = *(_DWORD *)(v5 + 8); /*0x8b0402*/
      if ( v6 ) /*0x8b0407*/
      {
        InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x8b040d*/
        return sub_8A26C0(a1, v7, a3); /*0x8b041d*/
      }
    }
  }
  else
  {
    if ( a1 && (v9 = a1[2]) != 0 ) /*0x8b0429*/
      v10 = *(_DWORD *)(v9 + 0xC); /*0x8b042b*/
    else
      v10 = 0; /*0x8b0430*/
    if ( v10 ) /*0x8b0434*/
    {
      v11 = *(_DWORD *)(v10 + 8); /*0x8b0437*/
      if ( v11 ) /*0x8b043c*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x8b0442*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x8b0454*/
      }
    }
  }
  return sub_8A26C0(a1, a2, a3); /*0x8b041b*/
}
