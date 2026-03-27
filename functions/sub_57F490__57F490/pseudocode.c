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

  if ( (dword_B3A6F4 & 1) == 0 )
    dword_B3A6F4 |= 1u;
  v4 = *((_DWORD *)this + 7);
  v5 = *(_DWORD *)(v4 + 0x24);
  v6 = *(_DWORD *)(v5 + 0x54);
  v5 += 0x54;
  *((_DWORD *)this + 8) = v6;
  *(this + 9) = *(float *)(v5 + 4);
  *(this + 0xA) = *(float *)(v5 + 8);
  v27 = (float)nWidth;
  v7 = v27;
  v34 = v27;
  v28 = (float)nHeight;
  v8 = flt_A688A8;
  v9 = dbl_A68D70;
  if ( v28 < (double)v34 )
    v8 = v34 / v28 * v9;
  v10 = v7;
  v11 = flt_A688A8;
  v35 = v10;
  if ( v28 < (double)v35 )
    v11 = v35 / v28 * v9;
  v36 = v11;
  v12 = dbl_A2FAA0;
  v29 = v8;
  *(this + 8) = v29 * a2 - v36 * v12;
  v30 = (float)nWidth;
  v13 = v30;
  v38 = v30;
  v31 = (float)nHeight;
  v14 = flt_A68D78;
  v15 = dbl_A688A0;
  if ( v38 < (double)v31 )
    v14 = v31 / v38 * v15;
  v16 = v13;
  v17 = flt_A68D78;
  v39 = v16;
  if ( v39 < (double)v31 )
    v17 = v31 / v39 * v15;
  v43 = v17;
  v37 = v14;
  *(this + 0xA) = v12 * v43 - v37 * a3;
  v18 = *(float **)(v4 + 0x24);
  v18[0x15] = *(this + 8);
  v18 += 0x15;
  v18[1] = *(this + 9);
  v18[2] = *(this + 0xA);
  NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*((_DWORD *)this + 7) + 0x24), 0.0, 1);
  v32 = (float)nWidth;
  v19 = v32;
  v44 = v32;
  v33 = (float)nHeight;
  if ( v33 >= (double)v44 )
    v20 = flt_A688A8;
  else
    v20 = v44 / v33 * dbl_A68D70;
  v45 = v20;
  v21 = dbl_A2FAA0;
  v40 = v19 * v21 + v19 / v45 * (*(this + 8) + dbl_A30E48);
  v47 = v19;
  if ( v47 >= (double)v33 )
    v22 = flt_A68D78;
  else
    v22 = v33 / v47 * dbl_A688A0;
  v46 = v22;
  v42 = v21 * v33 - v33 / v46 * *(this + 0xA);
  if ( flt_B3A6E8 != v40 || flt_B3A6EC != dbl_A2FC68 || flt_B3A6F0 != v42 )
  {
    flt_B3A6E8 = v40;
    flt_B3A6EC = 0.0;
    flt_B3A6F0 = v42;
    v23 = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 7), 0xFAB) * dbl_A68FD0;
    v24 = *((_BYTE *)this + 8) == 2;
    *(this + 0xB) = v40;
    v41 = v23;
    *(this + 0xC) = v41;
    *(this + 0xD) = v42;
    *((_BYTE *)this + 0xB9) = 1;
    if ( v24 )
    {
      v25 = fConstant_2;
      *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x24) + 0x18) &= ~1u;
      v26 = v25;
      Tile_SetFloat(*((Tile **)this + 7), (_DWORD *)0xFA1, v26);
    }
  }
}
