int __cdecl sub_770CB0(int a1)
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

  v2 = *(_BYTE **)(a1 + 0x10); /*0x770cba*/
  v3 = 0; /*0x770cbd*/
  v4 = *(_DWORD *)(a1 + 0x24); /*0x770cc2*/
  v11 = 0; /*0x770cc5*/
  if ( v2 ) /*0x770cc9*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x10) < 0 || *(_WORD *)(a1 + 4) == 0x10 ) /*0x770d11*/
      v13 = *(_WORD *)(a1 + 4) - 0xC; /*0x770d23*/
    else
      v13 = 4; /*0x770d16*/
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x770d27*/
    {
      v7 = 0; /*0x770d35*/
      v8 = v2; /*0x770d3a*/
      v9 = (_BYTE *)v4; /*0x770d3c*/
      if ( !v13 ) /*0x770d3e*/
        goto LABEL_14; /*0x770d3e*/
      v10 = v13; /*0x770d40*/
      do /*0x770d5d*/
      {
        *v9++ = *v8; /*0x770d52*/
        v8 += 2; /*0x770d57*/
        --v10; /*0x770d5a*/
      }
      while ( v10 ); /*0x770d5d*/
      v7 = v13; /*0x770d5f*/
      if ( v13 < 4u ) /*0x770d67*/
LABEL_14:
        _memset((int)v9, 0, (unsigned __int16)(4 - v7)); /*0x770d77*/
      v11 += *(_DWORD *)(a1 + 0x1C); /*0x770d82*/
      v2 += *(_DWORD *)(a1 + 0x18); /*0x770d8a*/
      v4 += *(_DWORD *)(a1 + 0x20); /*0x770d8d*/
    }
    return v11; /*0x770d9b*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x770ccf*/
    return v11; /*0x770d9d*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x770cd5*/
  do /*0x770cf5*/
  {
    _memset(v4, 0, v5); /*0x770cdc*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x770ce1*/
    v4 += *(_DWORD *)(a1 + 0x20); /*0x770ce4*/
    v11 += v5; /*0x770ce7*/
    ++v3; /*0x770ceb*/
  }
  while ( (unsigned __int16)v3 < *(_WORD *)(a1 + 8) ); /*0x770cf5*/
  return v11; /*0x770cfb*/
}
