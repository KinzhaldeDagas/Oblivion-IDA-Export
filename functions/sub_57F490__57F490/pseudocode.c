void __thiscall sub_57F490(float *this, float a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  double v8; // st3
  double v9; // st2
  double v10; // st4
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st2
  double v15; // st1
  double v16; // st3
  double v17; // st6
  float *v18; // eax
  double v19; // st7
  double v20; // st5
  double v21; // st3
  double v22; // st5
  double v23; // st7
  bool v24; // zf
  double v25; // st7
  float v26; // [esp+4h] [ebp-20h]
  float v27; // [esp+Ch] [ebp-18h]
  float v28; // [esp+Ch] [ebp-18h]
  float v29; // [esp+Ch] [ebp-18h]
  float v30; // [esp+Ch] [ebp-18h]
  float v31; // [esp+Ch] [ebp-18h]
  float v32; // [esp+Ch] [ebp-18h]
  float v33; // [esp+Ch] [ebp-18h]
  float v34; // [esp+10h] [ebp-14h]
  float v35; // [esp+10h] [ebp-14h]
  float v36; // [esp+10h] [ebp-14h]
  float v37; // [esp+10h] [ebp-14h]
  float v38; // [esp+14h] [ebp-10h]
  float v39; // [esp+14h] [ebp-10h]
  float v40; // [esp+18h] [ebp-Ch]
  float v41; // [esp+1Ch] [ebp-8h]
  float v42; // [esp+20h] [ebp-4h]
  float v43; // [esp+28h] [ebp+4h]
  float v44; // [esp+28h] [ebp+4h]
  float v45; // [esp+28h] [ebp+4h]
  float v46; // [esp+28h] [ebp+4h]
  float v47; // [esp+2Ch] [ebp+8h]

  if ( (unk_B3A6F4 & 1) == 0 ) /*0x57f49d*/
    unk_B3A6F4 |= 1u; /*0x57f49f*/
  v4 = *((_DWORD *)this + 7); /*0x57f4a6*/
  v5 = *(_DWORD *)(v4 + 0x24); /*0x57f4a9*/
  v6 = *(_DWORD *)(v5 + 0x54); /*0x57f4ac*/
  v5 += 0x54; /*0x57f4af*/
  *((_DWORD *)this + 8) = v6; /*0x57f4b2*/
  *(this + 9) = *(float *)(v5 + 4); /*0x57f4b8*/
  *(this + 0xA) = *(float *)(v5 + 8); /*0x57f4be*/
  v27 = (float)nWidth; /*0x57f4c7*/
  v7 = v27; /*0x57f4cb*/
  v34 = v27; /*0x57f4cf*/
  v28 = (float)nHeight; /*0x57f4d9*/
  v8 = flt_A688A8; /*0x57f4f1*/
  v9 = dbl_A68D70; /*0x57f4fa*/
  if ( v28 < (double)v34 ) /*0x57f500*/
    v8 = v34 / v28 * v9; /*0x57f508*/
  v10 = v7; /*0x57f518*/
  v11 = flt_A688A8; /*0x57f518*/
  v35 = v10; /*0x57f51a*/
  if ( v28 < (double)v35 ) /*0x57f533*/
    v11 = v35 / v28 * v9; /*0x57f539*/
  v36 = v11; /*0x57f543*/
  v12 = dbl_A2FAA0; /*0x57f55b*/
  v29 = v8; /*0x57f50a*/
  *(this + 8) = v29 * a2 - v36 * v12; /*0x57f55f*/
  v30 = (float)nWidth; /*0x57f568*/
  v13 = v30; /*0x57f56c*/
  v38 = v30; /*0x57f570*/
  v31 = (float)nHeight; /*0x57f57a*/
  v14 = flt_A68D78; /*0x57f592*/
  v15 = dbl_A688A0; /*0x57f59b*/
  if ( v38 < (double)v31 ) /*0x57f5a1*/
    v14 = v31 / v38 * v15; /*0x57f5a9*/
  v16 = v13; /*0x57f5b9*/
  v17 = flt_A68D78; /*0x57f5b9*/
  v39 = v16; /*0x57f5bb*/
  if ( v39 < (double)v31 ) /*0x57f5d4*/
    v17 = v31 / v39 * v15; /*0x57f5da*/
  v43 = v17; /*0x57f5e4*/
  v37 = v14; /*0x57f5ab*/
  *(this + 0xA) = v12 * v43 - v37 * a3; /*0x57f5f8*/
  v18 = *(float **)(v4 + 0x24); /*0x57f5fb*/
  v18[0x15] = *(this + 8); /*0x57f603*/
  v18 += 0x15; /*0x57f609*/
  v18[1] = *(this + 9); /*0x57f60c*/
  v18[2] = *(this + 0xA); /*0x57f612*/
  NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*((_DWORD *)this + 7) + 0x24), 0.0, 1); /*0x57f61f*/
  v32 = (float)nWidth; /*0x57f62a*/
  v19 = v32; /*0x57f62e*/
  v44 = v32; /*0x57f632*/
  v33 = (float)nHeight; /*0x57f63c*/
  if ( v33 >= (double)v44 ) /*0x57f657*/
    v20 = flt_A688A8; /*0x57f667*/
  else
    v20 = v44 / v33 * dbl_A68D70; /*0x57f65b*/
  v45 = v20; /*0x57f66d*/
  v21 = dbl_A2FAA0; /*0x57f684*/
  v40 = v19 * v21 + v19 / v45 * (*(this + 8) + dbl_A30E48); /*0x57f690*/
  v47 = v19; /*0x57f69c*/
  if ( v47 >= (double)v33 ) /*0x57f6b3*/
    v22 = flt_A68D78; /*0x57f6c3*/
  else
    v22 = v33 / v47 * dbl_A688A0; /*0x57f6b7*/
  v46 = v22; /*0x57f6c9*/
  v42 = v21 * v33 - v33 / v46 * *(this + 0xA); /*0x57f6da*/
  if ( unk_B3A6E8 != v40 || unk_B3A6EC != dbl_A2FC68 || unk_B3A6F0 != v42 ) /*0x57f715*/
  {
    unk_B3A6E8 = v40; /*0x57f725*/
    unk_B3A6EC = 0.0; /*0x57f72b*/
    unk_B3A6F0 = v42; /*0x57f730*/
    v23 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 7), 0xFAB) * dbl_A68FD0; /*0x57f743*/
    v24 = *((_BYTE *)this + 8) == 2; /*0x57f749*/
    *(this + 0xB) = v40; /*0x57f74d*/
    v41 = v23; /*0x57f750*/
    *(this + 0xC) = v41; /*0x57f758*/
    *(this + 0xD) = v42; /*0x57f75c*/
    *((_BYTE *)this + 0xB9) = 1; /*0x57f75f*/
    if ( v24 ) /*0x57f767*/
    {
      v25 = fConstant_2; /*0x57f76c*/
      *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u; /*0x57f775*/
      v26 = v25; /*0x57f77f*/
      Tile_SetFloat(*((Tile **)this + 7), (_DWORD *)0xFA1, v26); /*0x57f787*/
    }
  }
}
