_DWORD *__usercall sub_8CB450@<eax>(int a1@<ebp>, int a2, _DWORD *a3, int a4)
{
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  sub_8D9A50(a3); /*0x8cb458*/
  if ( *(_DWORD *)(a2 + 0x88) ) /*0x8cb461*/
  {
    sub_91EF50(a1, (int)a3, a2, (int)a3, v6, v7); /*0x8cb46d*/
    if ( a4 ) /*0x8cb47b*/
    {
      sub_8DC6E0(a4, a2, (int)a3); /*0x8cb47f*/
      return a3; /*0x8cb48b*/
    }
  }
  else
  {
    *(_DWORD *)(a2 + 0x88) = 1; /*0x8cb48c*/
    sub_91EF50(a1, (int)a3, a2, (int)a3, v6, v7); /*0x8cb496*/
    if ( a4 ) /*0x8cb4a4*/
      sub_8DC6E0(a4, a2, (int)a3); /*0x8cb4a8*/
    if ( (*(_DWORD *)(a2 + 0x88))-- == 1 ) /*0x8cb4b0*/
    {
      if ( *(_DWORD *)(a2 + 0x84) ) /*0x8cb4b8*/
      {
        if ( !*(_BYTE *)(a2 + 0x90) ) /*0x8cb4c2*/
          sub_899210(a2); /*0x8cb4ce*/
      }
    }
  }
  return a3; /*0x8cb489*/
}
