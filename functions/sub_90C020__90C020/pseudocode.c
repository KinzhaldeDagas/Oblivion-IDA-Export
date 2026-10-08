signed int __thiscall sub_90C020(unsigned __int8 *this, int a2, signed int *a3, signed int *a4)
{
  int v5; // ecx
  int v6; // ebx
  signed int v7; // esi
  int v8; // edi
  int i; // edi
  int j; // ebx
  int v11; // edi
  int v12; // eax
  char v13; // dl
  int v14; // ecx
  int v15; // eax
  signed int *v16; // eax
  int v17; // ecx
  int v18; // ecx
  signed int v19; // eax
  signed int *v20; // edx
  char v21; // al
  int v23; // [esp-4h] [ebp-3Ch]
  _DWORD *v24; // [esp+10h] [ebp-28h]
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+18h] [ebp-20h]
  int v27; // [esp+1Ch] [ebp-1Ch] BYREF
  _DWORD *v28; // [esp+20h] [ebp-18h] BYREF
  int v29; // [esp+24h] [ebp-14h]
  unsigned int v30; // [esp+28h] [ebp-10h]
  _DWORD v31[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v5 = 0x80000000; /*0x90c030*/
  v28 = 0; /*0x90c036*/
  v29 = 0; /*0x90c03a*/
  v30 = 0x80000000; /*0x90c03e*/
  if ( a2 ) /*0x90c046*/
  {
    v31[0] = &a2; /*0x90c04c*/
    v31[1] = 1; /*0x90c050*/
    v31[2] = 0x80000001; /*0x90c058*/
    do /*0x90c07f*/
    {
      sub_8E6720((const void **)&v28, 0, v31); /*0x90c06b*/
      a2 = sub_90D1F0((_DWORD *)a2); /*0x90c07b*/
    }
    while ( a2 ); /*0x90c07f*/
    v5 = v30; /*0x90c081*/
  }
  v6 = *this; /*0x90c085*/
  v7 = 0; /*0x90c08d*/
  v8 = 1; /*0x90c091*/
  a2 = 1; /*0x90c096*/
  v26 = v6; /*0x90c09a*/
  v25 = 0; /*0x90c09e*/
  if ( v29 > 0 ) /*0x90c0a2*/
  {
    while ( 1 ) /*0x90c0bb*/
    {
      v24 = (_DWORD *)v28[v25]; /*0x90c0bb*/
      for ( i = 0; i < hkCharacterContext_GetStateId(v24); ++i ) /*0x90c0c8*/
      {
        if ( v7 % v6 ) /*0x90c0d3*/
          v7 += v6 - v7 % v6; /*0x90c0dd*/
        v7 += v6; /*0x90c0e3*/
        if ( v6 > a2 ) /*0x90c0e7*/
          a2 = v6; /*0x90c0e9*/
      }
      for ( j = 0; j < sub_90D2C0(v24); ++j ) /*0x90c108*/
      {
        v11 = sub_90D2D0(v24, j); /*0x90c11c*/
        if ( !v7 ) /*0x90c11e*/
        {
          if ( v25 ) /*0x90c126*/
            v7 = *(this + 3) == 0; /*0x90c12f*/
        }
        v12 = sub_90BBB0(v11, *(unsigned __int8 *)(v11 + 0xC), *this); /*0x90c13f*/
        v13 = *(_BYTE *)(v11 + 0xC); /*0x90c144*/
        v14 = v12; /*0x90c147*/
        if ( v13 == 0x14 /*0x90c188*/
          || v13 == 0x16
          || v13 == 0x1A
          || v13 == 0x1B
          || v13 == 0x1C
          || v13 == 0x13
          && ((v15 = *(unsigned __int8 *)(v11 + 0xD), v15 == 0x14)
           || v15 == 0x16
           || v15 == 0x1A
           || v15 == 0x1B
           || v15 == 0x1C) )
        {
          v14 = *this; /*0x90c18a*/
        }
        if ( v14 > a2 ) /*0x90c192*/
          a2 = v14; /*0x90c194*/
        if ( v7 % v14 ) /*0x90c19b*/
          v7 += v14 - v7 % v14; /*0x90c1a3*/
        v16 = a3; /*0x90c1a5*/
        *a3 = v7; /*0x90c1a9*/
        v17 = *(unsigned __int8 *)(v11 + 0xC); /*0x90c1af*/
        v23 = *this; /*0x90c1b6*/
        a3 = v16 + 1; /*0x90c1b7*/
        v27 = v17; /*0x90c1c2*/
        v7 += sub_90BC80(this, v11, &v27, v23); /*0x90c1d2*/
      }
      v18 = v7; /*0x90c1eb*/
      if ( v7 % a2 ) /*0x90c1e9*/
        v18 = v7 + a2 - v7 % a2; /*0x90c1f5*/
      v19 = v18; /*0x90c1f9*/
      if ( !v18 ) /*0x90c1fb*/
        v19 = 1; /*0x90c1fd*/
      v20 = a4; /*0x90c202*/
      *a4 = v19; /*0x90c206*/
      v21 = *(this + 2); /*0x90c208*/
      a4 = v20 + 1; /*0x90c210*/
      if ( !v21 ) /*0x90c214*/
        v7 = v18; /*0x90c216*/
      if ( ++v25 >= v29 ) /*0x90c227*/
        break; /*0x90c227*/
      v6 = v26; /*0x90c0aa*/
    }
    v5 = v30; /*0x90c22d*/
    v8 = a2; /*0x90c231*/
  }
  if ( v7 % v8 ) /*0x90c238*/
    v7 += v8 - v7 % v8; /*0x90c240*/
  if ( !v7 ) /*0x90c244*/
    v7 = 1; /*0x90c246*/
  if ( v5 >= 0 ) /*0x90c24d*/
    sub_8A75D0( /*0x90c275*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v28,
      4 * v5,
      0x14);
  return v7; /*0x90c27a*/
}
