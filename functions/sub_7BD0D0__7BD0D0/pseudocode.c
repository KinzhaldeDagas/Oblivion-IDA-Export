int __cdecl sub_7BD0D0(int a1)
{
  int v1; // eax
  NiPoint3 *v2; // edi
  double v3; // st6
  float v4; // edx
  float v5; // edx
  UInt16 *v6; // ebx
  NiColorAlpha *v7; // eax
  NiColorAlpha *v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v17; // ebp
  NiAVObject *v18; // eax
  NiAVObject *v19; // eax
  float *v20; // eax
  double v21; // st7
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+20h] [ebp-14h]
  float v26; // [esp+20h] [ebp-14h]
  float v27; // [esp+24h] [ebp-10h]

  v1 = FormHeapAlloc(0x30u); /*0x7bd0ff*/
  v23 = kTerrainLODQuadRayDirectionZ; /*0x7bd10a*/
  v2 = (NiPoint3 *)v1; /*0x7bd10e*/
  v3 = flt_A8F8E4; /*0x7bd118*/
  v4 = flt_A8F8E4; /*0x7bd126*/
  *(float *)v1 = v23; /*0x7bd12c*/
  *(float *)(v1 + 4) = v23; /*0x7bd132*/
  *(float *)(v1 + 8) = v4; /*0x7bd13f*/
  v24 = v3; /*0x7bd148*/
  *(float *)(v1 + 0xC) = 1.0; /*0x7bd14c*/
  v5 = v24; /*0x7bd14f*/
  *(float *)(v1 + 0x10) = v23; /*0x7bd159*/
  v25 = v3; /*0x7bd16a*/
  *(float *)(v1 + 0x14) = v5; /*0x7bd16e*/
  *(float *)(v1 + 0x18) = 1.0; /*0x7bd17b*/
  *(float *)(v1 + 0x1C) = 1.0; /*0x7bd188*/
  *(float *)(v1 + 0x20) = v25; /*0x7bd18f*/
  *(float *)(v1 + 0x24) = v23; /*0x7bd192*/
  v26 = v3; /*0x7bd195*/
  *(float *)(v1 + 0x28) = 1.0; /*0x7bd19d*/
  *(float *)(v1 + 0x2C) = v26; /*0x7bd1a2*/
  v6 = (UInt16 *)FormHeapAlloc(0xCu); /*0x7bd1aa*/
  *v6 = 0; /*0x7bd1b3*/
  v6[1] = 1; /*0x7bd1b6*/
  v6[2] = 2; /*0x7bd1bc*/
  v6[3] = 3; /*0x7bd1c0*/
  v6[4] = 0; /*0x7bd1c6*/
  v6[5] = 2; /*0x7bd1ca*/
  v7 = (NiColorAlpha *)FormHeapAlloc(0x40u); /*0x7bd1ce*/
  v8 = v7; /*0x7bd1d3*/
  if ( v7 ) /*0x7bd1e2*/
    sub_401080(v7, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x7bd1ee*/
  else
    v8 = 0; /*0x7bd1f5*/
  *(_DWORD *)v8 = dword_B25AD0; /*0x7bd1fc*/
  *((_DWORD *)v8 + 1) = dword_B25AD4; /*0x7bd204*/
  *((_DWORD *)v8 + 2) = dword_B25AD8; /*0x7bd20d*/
  *((_DWORD *)v8 + 3) = dword_B25ADC; /*0x7bd215*/
  v9 = dword_B25AD4; /*0x7bd21d*/
  v10 = dword_B25AD8; /*0x7bd223*/
  v11 = dword_B25ADC; /*0x7bd229*/
  *((_DWORD *)v8 + 4) = dword_B25AD0; /*0x7bd22f*/
  *((_DWORD *)v8 + 5) = v9; /*0x7bd232*/
  *((_DWORD *)v8 + 6) = v10; /*0x7bd235*/
  *((_DWORD *)v8 + 7) = v11; /*0x7bd238*/
  v12 = dword_B25AD4; /*0x7bd240*/
  v13 = dword_B25AD8; /*0x7bd246*/
  v14 = dword_B25ADC; /*0x7bd24c*/
  *((_DWORD *)v8 + 8) = dword_B25AD0; /*0x7bd252*/
  *((_DWORD *)v8 + 9) = v12; /*0x7bd255*/
  *((_DWORD *)v8 + 0xA) = v13; /*0x7bd258*/
  *((_DWORD *)v8 + 0xB) = v14; /*0x7bd25b*/
  v15 = dword_B25AD4; /*0x7bd263*/
  v16 = dword_B25AD8; /*0x7bd269*/
  v17 = dword_B25ADC; /*0x7bd26f*/
  *((_DWORD *)v8 + 0xC) = dword_B25AD0; /*0x7bd275*/
  *((_DWORD *)v8 + 0xD) = v15; /*0x7bd278*/
  *((_DWORD *)v8 + 0xE) = v16; /*0x7bd27b*/
  *((_DWORD *)v8 + 0xF) = v17; /*0x7bd28b*/
  v18 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x7bd28e*/
  if ( v18 ) /*0x7bd2a4*/
    v19 = NiTriShape_ctorWithGeometryData(v18, 4u, v2, 0, v8, 0, 0, 0, 2u, v6); /*0x7bd2b7*/
  else
    v19 = 0; /*0x7bd2be*/
  *(_DWORD *)a1 = v19; /*0x7bd2c6*/
  if ( v19 ) /*0x7bd2c8*/
    InterlockedIncrement((volatile LONG *)&v19->members); /*0x7bd2ce*/
  v20 = *(float **)(*(_DWORD *)a1 + 0xB4); /*0x7bd2d8*/
  v21 = flt_A342A4; /*0x7bd2f2*/
  v20[3] = 0.0; /*0x7bd2fc*/
  v27 = v21; /*0x7bd2ff*/
  v20[4] = 0.0; /*0x7bd307*/
  v20[5] = 0.0; /*0x7bd30a*/
  v20[6] = v27; /*0x7bd30d*/
  return a1; /*0x7bd312*/
}
