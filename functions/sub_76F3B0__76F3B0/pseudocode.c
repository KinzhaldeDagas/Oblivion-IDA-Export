int __cdecl sub_76F3B0(int a1)
{
  int v2; // ebp
  int v3; // esi
  int v4; // ebx
  int v5; // ebp
  unsigned int v6; // eax
  __int16 v8; // ax
  int v9; // ecx
  unsigned __int16 v10; // dx
  _BYTE *v11; // eax
  int v12; // ebp
  bool v13; // cf
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]
  __int16 v17; // [esp+20h] [ebp+4h]

  v2 = *(_DWORD *)(a1 + 0x10); /*0x76f3bb*/
  v3 = *(_DWORD *)(a1 + 0x24); /*0x76f3be*/
  v4 = 0; /*0x76f3c1*/
  v15 = 0; /*0x76f3c5*/
  v14 = v2; /*0x76f3c9*/
  if ( v2 ) /*0x76f3cd*/
  {
    v8 = *(_WORD *)(a1 + 4) - 0x18; /*0x76f412*/
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x1C) < 0 || v8 == 4 ) /*0x76f418*/
    {
      v17 = *(_WORD *)(a1 + 4) - 0x18; /*0x76f42b*/
      LOWORD(v9) = v8; /*0x76f42f*/
    }
    else
    {
      LOWORD(v9) = 4; /*0x76f41d*/
      v17 = 4; /*0x76f422*/
    }
    v16 = 0; /*0x76f435*/
    if ( *(_WORD *)(a1 + 8) ) /*0x76f431*/
    {
      while ( 1 ) /*0x76f444*/
      {
        v10 = 0; /*0x76f444*/
        if ( !(_WORD)v9 ) /*0x76f449*/
          goto LABEL_16; /*0x76f449*/
        v9 = (unsigned __int16)v9; /*0x76f44b*/
        v11 = (_BYTE *)v3; /*0x76f44e*/
        v12 = v2 - v3; /*0x76f450*/
        v10 = v9; /*0x76f452*/
        do /*0x76f460*/
        {
          *v11 = v11[v12]; /*0x76f458*/
          ++v11; /*0x76f45a*/
          --v9; /*0x76f45d*/
        }
        while ( v9 ); /*0x76f460*/
        v2 = v14; /*0x76f466*/
        v4 = v15; /*0x76f46a*/
        if ( v10 < 4u ) /*0x76f46e*/
LABEL_16:
          _memset(v3 + v10, 0, (unsigned __int16)(4 - v10)); /*0x76f483*/
        v2 += *(_DWORD *)(a1 + 0x18); /*0x76f48f*/
        v4 += *(_DWORD *)(a1 + 0x1C); /*0x76f492*/
        v3 += *(_DWORD *)(a1 + 0x20); /*0x76f495*/
        v13 = (unsigned __int16)(v16 + 1) < *(_WORD *)(a1 + 8); /*0x76f49b*/
        v14 = v2; /*0x76f49f*/
        v15 = v4; /*0x76f4a3*/
        ++v16; /*0x76f4a7*/
        if ( !v13 ) /*0x76f4ab*/
          break; /*0x76f4ab*/
        LOWORD(v9) = v17; /*0x76f440*/
      }
    }
    return v4; /*0x76f4ab*/
  }
  v5 = 0; /*0x76f3cf*/
  if ( !*(_WORD *)(a1 + 8) ) /*0x76f3d5*/
    return v4; /*0x76f4b0*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x76f3db*/
  do /*0x76f3fe*/
  {
    _memset(v3, 0xFF, v6); /*0x76f3e7*/
    v6 = *(_DWORD *)(a1 + 0x1C); /*0x76f3ec*/
    v3 += *(_DWORD *)(a1 + 0x20); /*0x76f3ef*/
    ++v5; /*0x76f3f2*/
    v4 += v6; /*0x76f3f8*/
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) ); /*0x76f3fe*/
  return v4; /*0x76f400*/
}
