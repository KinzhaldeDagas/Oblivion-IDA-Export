int __cdecl sub_8D3140(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // edi
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int *v12; // eax
  int *v13; // ecx
  int v14; // edx
  int v15; // edi
  int v16; // [esp+10h] [ebp-4h]
  int v17; // [esp+20h] [ebp+Ch]

  v3 = a1; /*0x8d3149*/
  result = a1[1]; /*0x8d314d*/
  v17 = result - a3; /*0x8d3156*/
  v5 = v17; /*0x8d3152*/
  if ( v17 < result ) /*0x8d315a*/
  {
    v6 = a2; /*0x8d3160*/
    v7 = 0xC * v17; /*0x8d3168*/
    do /*0x8d31eb*/
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*v3 + v7) + 0x24); /*0x8d3175*/
      v9 = *(_DWORD *)(v8 + 4); /*0x8d3178*/
      v10 = v8 + 4; /*0x8d317b*/
      if ( *(_BYTE *)(v9 + 0x92) || *(_BYTE *)(*(_DWORD *)(v10 + 4) + 0x92) ) /*0x8d318a*/
      {
        v11 = (*v6)++; /*0x8d3194*/
        v12 = (int *)(v7 + *v3); /*0x8d319d*/
        v13 = (int *)(*v3 + 0xC * v11); /*0x8d31a3*/
        v14 = *v13; /*0x8d31a8*/
        v15 = v13[1]; /*0x8d31aa*/
        v16 = v13[2]; /*0x8d31b0*/
        *v13 = *v12; /*0x8d31b8*/
        v13[1] = v12[1]; /*0x8d31bd*/
        v13[2] = v12[2]; /*0x8d31c3*/
        v5 = v17; /*0x8d31c6*/
        *v12 = v14; /*0x8d31ca*/
        v12[1] = v15; /*0x8d31d0*/
        v3 = a1; /*0x8d31d3*/
        v12[2] = v16; /*0x8d31d7*/
        v6 = a2; /*0x8d31da*/
      }
      result = v3[1]; /*0x8d31de*/
      ++v5; /*0x8d31e1*/
      v7 += 0xC; /*0x8d31e2*/
      v17 = v5; /*0x8d31e7*/
    }
    while ( v5 < result ); /*0x8d31eb*/
  }
  return result; /*0x8d31ef*/
}
