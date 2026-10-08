int __cdecl sub_770DB0(int a1)
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

  v2 = *(_BYTE **)(a1 + 0x10); /*0x770dba*/
  v3 = 0; /*0x770dbd*/
  v4 = *(_DWORD *)(a1 + 0x24); /*0x770dc2*/
  v11 = 0; /*0x770dc5*/
  if ( v2 ) /*0x770dc9*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x14) < 0 || *(_WORD *)(a1 + 4) == 0x14 ) /*0x770e11*/
      v13 = *(_WORD *)(a1 + 4) - 0x10; /*0x770e23*/
    else
      v13 = 4; /*0x770e16*/
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x770e27*/
    {
      v7 = 0; /*0x770e35*/
      v8 = v2; /*0x770e3a*/
      v9 = (_BYTE *)v4; /*0x770e3c*/
      if ( !v13 ) /*0x770e3e*/
        goto LABEL_14; /*0x770e3e*/
      v10 = v13; /*0x770e40*/
      do /*0x770e5d*/
      {
        *v9++ = *v8; /*0x770e52*/
        v8 += 2; /*0x770e57*/
        --v10; /*0x770e5a*/
      }
      while ( v10 ); /*0x770e5d*/
      v7 = v13; /*0x770e5f*/
      if ( v13 < 4u ) /*0x770e67*/
LABEL_14:
        _memset((int)v9, 0, (unsigned __int16)(4 - v7)); /*0x770e77*/
      v11 += *(_DWORD *)(a1 + 0x1C); /*0x770e82*/
      v2 += *(_DWORD *)(a1 + 0x18); /*0x770e8a*/
      v4 += *(_DWORD *)(a1 + 0x20); /*0x770e8d*/
    }
    return v11; /*0x770e9b*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x770dcf*/
    return v11; /*0x770e9d*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x770dd5*/
  do /*0x770df5*/
  {
    _memset(v4, 0, v5); /*0x770ddc*/
    v5 = *(_DWORD *)(a1 + 0x1C); /*0x770de1*/
    v4 += *(_DWORD *)(a1 + 0x20); /*0x770de4*/
    v11 += v5; /*0x770de7*/
    ++v3; /*0x770deb*/
  }
  while ( (unsigned __int16)v3 < *(_WORD *)(a1 + 8) ); /*0x770df5*/
  return v11; /*0x770dfb*/
}
