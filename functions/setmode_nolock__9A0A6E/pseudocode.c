int __cdecl _setmode_nolock(int a1, int a2)
{
  int v2; // edx
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  _BYTE *v6; // ecx
  char v7; // dl
  int v9; // [esp+14h] [ebp+8h]

  v2 = 0x28 * (a1 & 0x1F); /*0x9a0a7c*/
  v3 = (_DWORD *)(4 * (a1 >> 5) + 0xBAAAC0); /*0x9a0a84*/
  v4 = unk_BAAAC0[a1 >> 5] + v2; /*0x9a0a8d*/
  v9 = *(_BYTE *)(v4 + 4) & 0x80; /*0x9a0a99*/
  v5 = (char)(2 * *(_BYTE *)(v4 + 0x24)) >> 1; /*0x9a0aaa*/
  if ( a2 == 0x4000 ) /*0x9a0aae*/
  {
    *(_BYTE *)(v4 + 4) |= 0x80u; /*0x9a0b00*/
    *(_BYTE *)(*v3 + v2 + 0x24) &= 0x80u; /*0x9a0b0a*/
  }
  else if ( a2 == 0x8000 ) /*0x9a0ab6*/
  {
    *(_BYTE *)(v4 + 4) &= ~0x80u; /*0x9a0afa*/
  }
  else
  {
    if ( a2 == 0x10000 || a2 == 0x20000 ) /*0x9a0ac6*/
    {
      *(_BYTE *)(v4 + 4) |= 0x80u; /*0x9a0ae6*/
      v6 = (_BYTE *)(*v3 + v2 + 0x24); /*0x9a0aec*/
      v7 = *v6 & 0x80 | 2; /*0x9a0af5*/
    }
    else
    {
      if ( a2 != 0x40000 ) /*0x9a0ace*/
        goto LABEL_11; /*0x9a0ace*/
      *(_BYTE *)(v4 + 4) |= 0x80u; /*0x9a0ad0*/
      v6 = (_BYTE *)(*v3 + v2 + 0x24); /*0x9a0ad6*/
      v7 = *v6 & 0x80 | 1; /*0x9a0adf*/
    }
    *v6 = v7; /*0x9a0ae2*/
  }
LABEL_11:
  if ( v9 )
    return v5 != 0 ? 0x10000 : 0x4000;
  else
    return 0x8000; /*0x9a0b13*/
}
