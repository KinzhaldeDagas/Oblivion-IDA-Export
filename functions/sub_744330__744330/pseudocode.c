signed int __cdecl sub_744330(int *a1, int a2)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _BYTE *v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // edx
  unsigned int v14; // ecx
  _BYTE *v15; // eax
  int v16; // edi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // eax
  _DWORD *v20; // edi
  int v22; // ecx
  _BYTE *v23; // eax
  int v24; // eax
  int v25; // [esp+Ch] [ebp-4h]

  v25 = 0xFFFF; /*0x744343*/
  if ( (unsigned int)(a1[3] - 5) < 0xFFFF ) /*0x74434b*/
    v25 = a1[3] - 5; /*0x74434d*/
  while ( 1 )
  {
    v2 = a1[0x1B]; /*0x744351*/
    if ( v2 <= 1 ) /*0x744357*/
    {
      sub_7441E0(a1); /*0x744359*/
      v2 = a1[0x1B]; /*0x74435e*/
      if ( !v2 ) /*0x744363*/
        break; /*0x744363*/
    }
    v3 = v2 + a1[0x19] == 0; /*0x744369*/
    a1[0x19] += v2; /*0x744369*/
    v4 = a1[0x15]; /*0x74436c*/
    v5 = a1[0x19]; /*0x744373*/
    a1[0x1B] = 0; /*0x744376*/
    v6 = v4 + v25; /*0x74437d*/
    if ( !v3 && v5 < v6 ) /*0x744384*/
      goto LABEL_36; /*0x744384*/
    a1[0x1B] = v5 - v6; /*0x74438e*/
    a1[0x19] = v6; /*0x744391*/
    v7 = v4 < 0 ? 0 : (_BYTE *)(v4 + a1[0xC]);
    sub_747610((int)a1, v7, v25, 0); /*0x7443a6*/
    v8 = *a1; /*0x7443ae*/
    a1[0x15] = a1[0x19]; /*0x7443b0*/
    v9 = *(_DWORD *)(v8 + 0x1C); /*0x7443b3*/
    v10 = *(_DWORD *)(v9 + 0x14); /*0x7443b6*/
    if ( v10 > *(_DWORD *)(v8 + 0x10) ) /*0x7443c1*/
      v10 = *(_DWORD *)(v8 + 0x10); /*0x7443c3*/
    if ( v10 ) /*0x7443c7*/
    {
      memcpy(*(void **)(v8 + 0xC), *(const void **)(v9 + 0x10), v10); /*0x7443d2*/
      v11 = *(_DWORD *)(v8 + 0x1C); /*0x7443d7*/
      *(_DWORD *)(v8 + 0xC) += v10; /*0x7443da*/
      *(_DWORD *)(v11 + 0x10) += v10; /*0x7443dd*/
      *(_DWORD *)(v8 + 0x14) += v10; /*0x7443e0*/
      *(_DWORD *)(v8 + 0x10) -= v10; /*0x7443e3*/
      *(_DWORD *)(*(_DWORD *)(v8 + 0x1C) + 0x14) -= v10; /*0x7443e9*/
      v12 = *(_DWORD **)(v8 + 0x1C); /*0x7443ec*/
      if ( !v12[5] ) /*0x7443f2*/
        v12[4] = v12[2]; /*0x7443fb*/
    }
    if ( *(_DWORD *)(*a1 + 0x10) )
    {
LABEL_36:
      v13 = a1[0x15]; /*0x74440a*/
      v14 = a1[0x19] - v13; /*0x744413*/
      if ( v14 < a1[9] - 0x106 ) /*0x74441c*/
        continue; /*0x74441c*/
      v15 = v13 < 0 ? 0 : (_BYTE *)(v13 + a1[0xC]);
      sub_747610((int)a1, v15, v14, 0); /*0x744434*/
      v16 = *a1; /*0x74443c*/
      a1[0x15] = a1[0x19]; /*0x74443e*/
      v17 = *(_DWORD *)(v16 + 0x1C); /*0x744441*/
      v18 = *(_DWORD *)(v17 + 0x14); /*0x744444*/
      if ( v18 > *(_DWORD *)(v16 + 0x10) ) /*0x74444f*/
        v18 = *(_DWORD *)(v16 + 0x10); /*0x744451*/
      if ( v18 ) /*0x744455*/
      {
        memcpy(*(void **)(v16 + 0xC), *(const void **)(v17 + 0x10), v18); /*0x744460*/
        v19 = *(_DWORD *)(v16 + 0x1C); /*0x744465*/
        *(_DWORD *)(v16 + 0xC) += v18; /*0x744468*/
        *(_DWORD *)(v19 + 0x10) += v18; /*0x74446b*/
        *(_DWORD *)(v16 + 0x14) += v18; /*0x74446e*/
        *(_DWORD *)(v16 + 0x10) -= v18; /*0x744471*/
        *(_DWORD *)(*(_DWORD *)(v16 + 0x1C) + 0x14) -= v18; /*0x744477*/
        v20 = *(_DWORD **)(v16 + 0x1C); /*0x74447a*/
        if ( !v20[5] ) /*0x744480*/
          v20[4] = v20[2]; /*0x744489*/
      }
      if ( *(_DWORD *)(*a1 + 0x10) ) /*0x74448e*/
        continue; /*0x74448e*/
    }
    return 0; /*0x744492*/
  }
  if ( !a2 ) /*0x7444a5*/
    return 0; /*0x74449e*/
  v22 = a1[0x15]; /*0x7444a7*/
  if ( v22 < 0 ) /*0x7444ac*/
    v23 = 0; /*0x7444b5*/
  else
    v23 = (_BYTE *)(v22 + a1[0xC]); /*0x7444b1*/
  sub_747610((int)a1, v23, a1[0x19] - v22, a2 == 4); /*0x7444c8*/
  a1[0x15] = a1[0x19]; /*0x7444d0*/
  sub_7439F0(*a1); /*0x7444d8*/
  v24 = 0; /*0x7444df*/
  if ( !*(_DWORD *)(*a1 + 0x10) )
    return a2 != 4 ? 0 : 2;
  LOBYTE(v24) = a2 == 4; /*0x7444fa*/
  return 2 * v24 + 1; /*0x744498*/
}
