int __cdecl sub_8FD760(int a1, int a2, int a3)
{
  int v3; // edi
  _WORD *v4; // esi
  int v5; // eax

  v3 = 0; /*0x8fd769*/
  if ( *(_BYTE *)(a2 + 0x21) ) /*0x8fd765*/
  {
    v4 = (_WORD *)(a2 + 2); /*0x8fd775*/
    do /*0x8fd79d*/
    {
      HIWORD(v5) = 0; /*0x8fd780*/
      if ( *v4 != 0xFFFF ) /*0x8fd789*/
      {
        LOWORD(v5) = *v4; /*0x8fd782*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x10))(a3, v5); /*0x8fd790*/
      }
      ++v3; /*0x8fd797*/
      v4 += 2; /*0x8fd798*/
    }
    while ( v3 < *(unsigned __int8 *)(a2 + 0x21) ); /*0x8fd79d*/
  }
  *(_BYTE *)(a2 + 0x21) = 0; /*0x8fd7a5*/
  *(_BYTE *)(a1 + 2) = 0; /*0x8fd7ad*/
  return a2 + 0x50; /*0x8fd7a9*/
}
