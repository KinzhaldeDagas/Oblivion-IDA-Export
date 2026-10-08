int __cdecl sub_770BB0(int a1)
{
  _BYTE *v2; // ebx
  int v3; // ebp
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 v7; // dx
  _BYTE *v8; // ecx
  _BYTE *v9; // eax
  int v10; // ebp
  int v11; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  unsigned __int16 v13; // [esp+20h] [ebp+4h]

  v2 = *(_BYTE **)(a1 + 0x10); /*0x770bba*/
  v3 = 0; /*0x770bbd*/
  v4 = *(_DWORD *)(a1 + 0x24); /*0x770bc2*/
  v11 = 0; /*0x770bc5*/
  if ( v2 ) /*0x770bc9*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0xC) < 0 || *(_WORD *)(a1 + 4) == 0xC ) /*0x770c11*/
      v13 = *(_WORD *)(a1 + 4) - 8; /*0x770c23*/
    else
      v13 = 4; /*0x770c16*/
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x770c27*/
    {
      v7 = 0; /*0x770c35*/
      v8 = v2; /*0x770c3a*/
      v9 = (_BYTE *)v4; /*0x770c3c*/
      if ( !v13 ) /*0x770c3e*/
        goto LABEL_14; /*0x770c3e*/
      v10 = v13; /*0x770c40*/
      do /*0x770c5d*/
      {
        *v9++ = *v8; /*0x770c52*/
        v8 += 4; /*0x770c57*/
        --v10; /*0x770c5a*/
      }
      while ( v10 ); /*0x770c5d*/
      v7 = v13; /*0x770c5f*/
      if ( v13 < 4u ) /*0x770c67*/
LABEL_14:
        _memset((int)v9, 0, (unsigned __int16)(4 - v7)); /*0x770c77*/
      v11 += *(_DWORD *)(a1 + 0x1C); /*0x770c82*/
      v2 += *(_DWORD *)(a1 + 0x18); /*0x770c8a*/
      v4 += *(_DWORD *)(a1 + 0x20); /*0x770c8d*/
    }
    return v11; /*0x770c9b*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x770bcf*/
    return v11; /*0x770c9d*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x770bd5*/
  do /*0x770bf5*/
  {
    _memset(v4, 0, v5); /*0x770bdc*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x770be1*/
    v4 += *(_DWORD *)(a1 + 0x20); /*0x770be4*/
    v11 += v5; /*0x770be7*/
    ++v3; /*0x770beb*/
  }
  while ( (unsigned __int16)v3 < *(_WORD *)(a1 + 8) ); /*0x770bf5*/
  return v11; /*0x770bfb*/
}
