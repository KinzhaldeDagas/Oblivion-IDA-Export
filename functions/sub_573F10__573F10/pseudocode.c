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

  v5 = (dword_B3A6CC & 1) == 0;
  *a4 = a1[0xB] + *a4;
  v6 = 0.0;
  if ( v5 )
  {
    dword_B3A6CC |= 1u;
    flt_B3A6C0 = 0.0;
    flt_B3A6C4 = 0.0;
    flt_B3A6C8 = flt_A30634;
  }
  v7 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x1C);
  v26 = a4[1];
  v34 = a1[0xD] + a4[2];
  v8 = 4 * a2;
  v9 = 0x30 * a2;
  *(float *)(v7 + v9) = *a4;
  *(float *)(v7 + v9 + 4) = v26;
  *(float *)(v7 + v9 + 8) = v34;
  v10 = (float *)(0x30 * a2 + v7);
  v27 = a4[1];
  v11 = a1[0xD] + a4[2] - a1[0xA];
  v10[3] = *a4;
  v10[4] = v27;
  v35 = v11;
  v10[5] = v35;
  v24 = a1[9] + *a4;
  v28 = a4[1];
  v12 = a1[0xD] + a4[2];
  v10[6] = v24;
  v10[7] = v28;
  v36 = v12;
  v10[8] = v36;
  v25 = a1[9] + *a4;
  v29 = a4[1];
  v13 = a1[0xD] + a4[2] - a1[0xA];
  v10[9] = v25;
  v10[0xA] = v29;
  v37 = v13;
  v10[0xB] = v37;
  v14 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x20);
  if ( v14 )
  {
    v15 = (float *)(v9 + v14);
    *v15 = flt_B3A6C0;
    v15[1] = flt_B3A6C4;
    v15[2] = flt_B3A6C8;
    v15[3] = flt_B3A6C0;
    v15[4] = flt_B3A6C4;
    v15[5] = flt_B3A6C8;
    v15[6] = flt_B3A6C0;
    v15[7] = flt_B3A6C4;
    v15[8] = flt_B3A6C8;
    v15[9] = flt_B3A6C0;
    v15[0xA] = flt_B3A6C4;
    v15[0xB] = flt_B3A6C8;
  }
  if ( a5 )
  {
    v16 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x24) + (a2 << 6));
    *v16 = *a5;
    v16[1] = a5[1];
    v16[2] = a5[2];
    v16[3] = a5[3];
    v16[4] = *a5;
    v16[5] = a5[1];
    v16[6] = a5[2];
    v16[7] = a5[3];
    v16[8] = *a5;
    v16[9] = a5[1];
    v16[0xA] = a5[2];
    v16[0xB] = a5[3];
    v16[0xC] = *a5;
    v16[0xD] = a5[1];
    v16[0xE] = a5[2];
    v16[0xF] = a5[3];
  }
  v17 = *(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x28);
  v18 = a1[2];
  *(float *)(v17 + 0x20 * a2) = a1[1];
  v30 = v18;
  *(float *)(v17 + 0x20 * a2 + 4) = v30;
  v19 = (float *)(v17 + 0x20 * a2);
  v20 = a1[6];
  v19[2] = a1[5];
  v31 = v20;
  v19[3] = v31;
  v21 = a1[4];
  v19[4] = a1[3];
  v32 = v21;
  v19[5] = v32;
  v22 = a1[8];
  v19[6] = a1[7];
  v33 = v22;
  v19[7] = v33;
  v23 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a3 + 0xB4) + 0x48) + 0xC * a2);
  *v23 = v8;
  v23[1] = v8 + 1;
  v23[2] = v8 + 2;
  v23[3] = v8 + 2;
  v23[4] = v8 + 1;
  v23[5] = v8 + 3;
  if ( a1[9] > 0.0 )
    v6 = a1[0xC];
  v38 = v6;
  *a4 = a1[9] + v38 + *a4;
}
