void __stdcall sub_573F10(float *a1, int a2, int a3, float *a4, _DWORD *a5)
{
  bool v5; // zf
  double v6; // st7
  int v7; // eax
  __int16 v8; // si
  int v9; // edi
  float *v10; // eax
  double v11; // st6
  double v12; // st6
  double v13; // st6
  int v14; // eax
  float *v15; // eax
  _DWORD *v16; // eax
  int v17; // eax
  double v18; // st6
  float *v19; // eax
  double v20; // st6
  double v21; // st6
  double v22; // st6
  _WORD *v23; // eax
  float v24; // [esp+0h] [ebp-Ch]
  float v25; // [esp+0h] [ebp-Ch]
  float v26; // [esp+4h] [ebp-8h]
  float v27; // [esp+4h] [ebp-8h]
  float v28; // [esp+4h] [ebp-8h]
  float v29; // [esp+4h] [ebp-8h]
  float v30; // [esp+4h] [ebp-8h]
  float v31; // [esp+4h] [ebp-8h]
  float v32; // [esp+4h] [ebp-8h]
  float v33; // [esp+4h] [ebp-8h]
  float v34; // [esp+8h] [ebp-4h]
  float v35; // [esp+8h] [ebp-4h]
  float v36; // [esp+8h] [ebp-4h]
  float v37; // [esp+8h] [ebp-4h]
  float v38; // [esp+14h] [ebp+8h]

  v5 = (unk_B3A6CC & 1) == 0; /*0x573f25*/
  *a4 = a1[0xB] + *a4; /*0x573f2b*/
  v6 = 0.0; /*0x573f2d*/
  if ( v5 ) /*0x573f2f*/
  {
    unk_B3A6CC |= 1u; /*0x573f31*/
    unk_B3A6C0 = 0.0; /*0x573f37*/
    unk_B3A6C4 = 0.0; /*0x573f3d*/
    unk_B3A6C8 = kTerrainLODQuadRayDirectionZ; /*0x573f49*/
  }
  v7 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x1C); /*0x573f63*/
  v26 = a4[1]; /*0x573f66*/
  v34 = a1[0xD] + a4[2]; /*0x573f7a*/
  v8 = 4 * a2; /*0x573f81*/
  v9 = 0x30 * a2; /*0x573f88*/
  *(float *)(v7 + v9) = *a4; /*0x573f8a*/
  *(float *)(v7 + v9 + 4) = v26; /*0x573f91*/
  *(float *)(v7 + v9 + 8) = v34; /*0x573f99*/
  v10 = (float *)(0x30 * a2 + v7); /*0x573f9f*/
  v27 = a4[1]; /*0x573fac*/
  v11 = a1[0xD] + a4[2] - a1[0xA]; /*0x573fb6*/
  v10[3] = *a4; /*0x573fb9*/
  v10[4] = v27; /*0x573fc0*/
  v35 = v11; /*0x573fc3*/
  v10[5] = v35; /*0x573fcb*/
  v24 = a1[9] + *a4; /*0x573fd3*/
  v28 = a4[1]; /*0x573fde*/
  v12 = a1[0xD] + a4[2]; /*0x573fe5*/
  v10[6] = v24; /*0x573fe8*/
  v10[7] = v28; /*0x573fef*/
  v36 = v12; /*0x573ff2*/
  v10[8] = v36; /*0x573ffa*/
  v25 = a1[9] + *a4; /*0x574002*/
  v29 = a4[1]; /*0x57400d*/
  v13 = a1[0xD] + a4[2] - a1[0xA]; /*0x574017*/
  v10[9] = v25; /*0x57401a*/
  v10[0xA] = v29; /*0x574021*/
  v37 = v13; /*0x574024*/
  v10[0xB] = v37; /*0x57402c*/
  v14 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x20); /*0x574035*/
  if ( v14 ) /*0x57403a*/
  {
    v15 = (float *)(v9 + v14); /*0x57403c*/
    *v15 = unk_B3A6C0; /*0x574044*/
    v15[1] = unk_B3A6C4; /*0x57404c*/
    v15[2] = unk_B3A6C8; /*0x574055*/
    v15[3] = unk_B3A6C0; /*0x57405e*/
    v15[4] = unk_B3A6C4; /*0x574067*/
    v15[5] = unk_B3A6C8; /*0x574070*/
    v15[6] = unk_B3A6C0; /*0x574079*/
    v15[7] = unk_B3A6C4; /*0x574082*/
    v15[8] = unk_B3A6C8; /*0x57408b*/
    v15[9] = unk_B3A6C0; /*0x574094*/
    v15[0xA] = unk_B3A6C4; /*0x57409d*/
    v15[0xB] = unk_B3A6C8; /*0x5740a6*/
  }
  if ( a5 ) /*0x5740af*/
  {
    v16 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x24) + (a2 << 6)); /*0x5740bc*/
    *v16 = *a5; /*0x5740c1*/
    v16[1] = a5[1]; /*0x5740c6*/
    v16[2] = a5[2]; /*0x5740cc*/
    v16[3] = a5[3]; /*0x5740d2*/
    v16[4] = *a5; /*0x5740d7*/
    v16[5] = a5[1]; /*0x5740dd*/
    v16[6] = a5[2]; /*0x5740e3*/
    v16[7] = a5[3]; /*0x5740e9*/
    v16[8] = *a5; /*0x5740ee*/
    v16[9] = a5[1]; /*0x5740f4*/
    v16[0xA] = a5[2]; /*0x5740fa*/
    v16[0xB] = a5[3]; /*0x574100*/
    v16[0xC] = *a5; /*0x574105*/
    v16[0xD] = a5[1]; /*0x57410b*/
    v16[0xE] = a5[2]; /*0x574111*/
    v16[0xF] = a5[3]; /*0x574117*/
  }
  v17 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x28); /*0x574123*/
  v18 = a1[2]; /*0x57412a*/
  *(float *)(v17 + 0x20 * a2) = a1[1]; /*0x574131*/
  v30 = v18; /*0x574134*/
  *(float *)(v17 + 0x20 * a2 + 4) = v30; /*0x57413c*/
  v19 = (float *)(v17 + 0x20 * a2); /*0x574143*/
  v20 = a1[6]; /*0x57414a*/
  v19[2] = a1[5]; /*0x574151*/
  v31 = v20; /*0x574154*/
  v19[3] = v31; /*0x57415c*/
  v21 = a1[4]; /*0x57416a*/
  v19[4] = a1[3]; /*0x57416d*/
  v32 = v21; /*0x574170*/
  v19[5] = v32; /*0x574178*/
  v22 = a1[8]; /*0x574186*/
  v19[6] = a1[7]; /*0x574189*/
  v33 = v22; /*0x57418c*/
  v19[7] = v33; /*0x574194*/
  v23 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x48) + 0xC * a2); /*0x5741a7*/
  *v23 = v8; /*0x5741b0*/
  v23[1] = v8 + 1; /*0x5741b6*/
  v23[2] = v8 + 2; /*0x5741ba*/
  v23[3] = v8 + 2; /*0x5741be*/
  v23[4] = v8 + 1; /*0x5741c2*/
  v23[5] = v8 + 3; /*0x5741c6*/
  if ( a1[9] > 0.0 ) /*0x5741d6*/
    v6 = a1[0xC]; /*0x5741da*/
  v38 = v6; /*0x5741dd*/
  *a4 = a1[9] + v38 + *a4; /*0x5741ea*/
}
