int __cdecl sub_770AB0(int a1)
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

  v2 = *(_BYTE **)(a1 + 0x10); /*0x770aba*/
  v3 = 0; /*0x770abd*/
  v4 = *(_DWORD *)(a1 + 0x24); /*0x770ac2*/
  v11 = 0; /*0x770ac5*/
  if ( v2 ) /*0x770ac9*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 8) < 0 || *(_WORD *)(a1 + 4) == 8 ) /*0x770b11*/
      v13 = *(_WORD *)(a1 + 4) - 4; /*0x770b23*/
    else
      v13 = 4; /*0x770b16*/
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x770b27*/
    {
      v7 = 0; /*0x770b35*/
      v8 = v2; /*0x770b3a*/
      v9 = (_BYTE *)v4; /*0x770b3c*/
      if ( !v13 ) /*0x770b3e*/
        goto LABEL_14; /*0x770b3e*/
      v10 = v13; /*0x770b40*/
      do /*0x770b5d*/
      {
        *v9++ = *v8; /*0x770b52*/
        v8 += 4; /*0x770b57*/
        --v10; /*0x770b5a*/
      }
      while ( v10 ); /*0x770b5d*/
      v7 = v13; /*0x770b5f*/
      if ( v13 < 4u ) /*0x770b67*/
LABEL_14:
        _memset((int)v9, 0, (unsigned __int16)(4 - v7)); /*0x770b77*/
      v11 += *(_DWORD *)(a1 + 0x1C); /*0x770b82*/
      v2 += *(_DWORD *)(a1 + 0x18); /*0x770b8a*/
      v4 += *(_DWORD *)(a1 + 0x20); /*0x770b8d*/
    }
    return v11; /*0x770b9b*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x770acf*/
    return v11; /*0x770b9d*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x770ad5*/
  do /*0x770af5*/
  {
    _memset(v4, 0, v5); /*0x770adc*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x770ae1*/
    v4 += *(_DWORD *)(a1 + 0x20); /*0x770ae4*/
    v11 += v5; /*0x770ae7*/
    ++v3; /*0x770aeb*/
  }
  while ( (unsigned __int16)v3 < *(_WORD *)(a1 + 8) ); /*0x770af5*/
  return v11; /*0x770afb*/
}
