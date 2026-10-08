int __cdecl sub_76F2A0(int a1)
{
  _BYTE *v2; // edx
  _BYTE *v3; // esi
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // eax
  unsigned __int16 v8; // bp
  _BYTE *v9; // eax
  int v10; // ecx
  bool v11; // cf
  int v12; // [esp+10h] [ebp-Ch]
  _BYTE *v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h]
  unsigned __int16 v15; // [esp+20h] [ebp+4h]

  v2 = *(_BYTE **)(a1 + 0x10); /*0x76f2ab*/
  v3 = *(_BYTE **)(a1 + 0x24); /*0x76f2ae*/
  v4 = 0; /*0x76f2b1*/
  v5 = 0; /*0x76f2b3*/
  v12 = 0; /*0x76f2b7*/
  v13 = v2; /*0x76f2bb*/
  if ( v2 ) /*0x76f2bf*/
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x18) < 0 || *(_WORD *)(a1 + 4) == 0x18 ) /*0x76f308*/
      v15 = *(_WORD *)(a1 + 4) - 0x14; /*0x76f31a*/
    else
      v15 = 4; /*0x76f30d*/
    v14 = 0; /*0x76f322*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76f31e*/
    {
      do /*0x76f394*/
      {
        v8 = 0; /*0x76f334*/
        v9 = v2; /*0x76f339*/
        if ( !v15 ) /*0x76f33b*/
          goto LABEL_14; /*0x76f33b*/
        v10 = v15; /*0x76f33d*/
        v8 = v15; /*0x76f340*/
        do /*0x76f350*/
        {
          *v3++ = *v9++; /*0x76f345*/
          --v10; /*0x76f34d*/
        }
        while ( v10 ); /*0x76f350*/
        if ( v15 < 4u ) /*0x76f356*/
        {
LABEL_14:
          _memset((int)v3, 0, (unsigned __int16)(4 - v8)); /*0x76f366*/
          v2 = v13; /*0x76f36b*/
          v3 += (unsigned __int16)(4 - v8); /*0x76f372*/
        }
        v12 += *(_DWORD *)(a1 + 0x1C); /*0x76f377*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76f37f*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76f382*/
        v11 = (unsigned __int16)(v14 + 1) < *(_WORD *)(a1 + 8); /*0x76f388*/
        v13 = v2; /*0x76f38c*/
        ++v14; /*0x76f390*/
      }
      while ( v11 ); /*0x76f394*/
      return v12; /*0x76f396*/
    }
    return v5; /*0x76f396*/
  }
  if ( !*(_WORD *)(a1 + 8) ) /*0x76f2c5*/
    return v5; /*0x76f39c*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76f2cb*/
  do /*0x76f2ee*/
  {
    _memset((int)v3, 0xFF, v6); /*0x76f2d7*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76f2dc*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76f2df*/
    ++v4; /*0x76f2e2*/
    v5 += v6; /*0x76f2e8*/
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) ); /*0x76f2ee*/
  return v5; /*0x76f2f0*/
}
