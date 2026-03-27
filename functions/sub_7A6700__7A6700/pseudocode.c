int __cdecl sub_7A6700(float *a1)
{
  void *v1; // ecx
  double v2; // st7
  int v3; // eax
  double v4; // st6
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st3
  double v9; // st5
  double v10; // st6
  double v11; // st2
  double v12; // st1
  double v13; // st2
  double v14; // st2
  double v15; // st2
  double v16; // st1
  double v17; // st0
  float v19; // [esp+4h] [ebp-68h]
  float v20; // [esp+4h] [ebp-68h]
  double v21; // [esp+4h] [ebp-68h]
  double v22; // [esp+Ch] [ebp-60h]
  double v23; // [esp+14h] [ebp-58h]
  double v24; // [esp+14h] [ebp-58h]
  double v25; // [esp+14h] [ebp-58h]
  double v26; // [esp+1Ch] [ebp-50h]
  double v27; // [esp+24h] [ebp-48h]
  double v28; // [esp+2Ch] [ebp-40h]
  double v29; // [esp+2Ch] [ebp-40h]
  double v30; // [esp+34h] [ebp-38h]
  double v31; // [esp+34h] [ebp-38h]
  float v32; // [esp+3Ch] [ebp-30h]
  float v33; // [esp+3Ch] [ebp-30h]
  float v34; // [esp+3Ch] [ebp-30h]
  float v35; // [esp+3Ch] [ebp-30h]
  float v36; // [esp+40h] [ebp-2Ch]
  float v37; // [esp+40h] [ebp-2Ch]
  float v38; // [esp+40h] [ebp-2Ch]
  float v39; // [esp+40h] [ebp-2Ch]
  float v40; // [esp+44h] [ebp-28h]
  float v41; // [esp+44h] [ebp-28h]
  float v42; // [esp+44h] [ebp-28h]
  float v43; // [esp+44h] [ebp-28h]
  float v44; // [esp+48h] [ebp-24h] BYREF
  float v45; // [esp+4Ch] [ebp-20h]
  float v46; // [esp+50h] [ebp-1Ch]
  float v47; // [esp+54h] [ebp-18h]
  float v48; // [esp+58h] [ebp-14h]
  float v49; // [esp+5Ch] [ebp-10h]
  float v50; // [esp+60h] [ebp-Ch]
  float v51; // [esp+64h] [ebp-8h]
  float v52; // [esp+68h] [ebp-4h]

  v2 = a1[1];
  sub_98598A(v1);
  v19 = v2;
  v3 = dword_B42A80;
  v20 = v19 * dbl_A8BA48;
  v4 = flt_A3D65C;
  if ( (dword_B42A80 & 1) == 0 )
  {
    v3 |= 1u;
    flt_B42A74 = 0.0;
    dword_B42A80 = v3;
    flt_B42A78 = v4;
    flt_B42A7C = 1.0;
  }
  v5 = flt_A45E4C;
  if ( (v3 & 2) == 0 )
  {
    v3 |= 2u;
    flt_B42A68 = 0.0;
    dword_B42A80 = v3;
    flt_B42A6C = v5;
    flt_B42A70 = 1.0;
  }
  if ( (v3 & 4) == 0 )
  {
    v3 |= 4u;
    flt_B42A5C = 0.0;
    dword_B42A80 = v3;
    flt_B42A64 = 0.0;
    flt_B42A60 = v5;
  }
  if ( (v3 & 8) == 0 )
  {
    v3 |= 8u;
    flt_B42A50 = 0.0;
    dword_B42A80 = v3;
    flt_B42A58 = 0.0;
    flt_B42A54 = v4;
  }
  if ( (v3 & 0x10) == 0 )
    dword_B42A80 = v3 | 0x10;
  flt_B42A20 = flt_B42A74;
  flt_B42A24 = flt_B42A78;
  flt_B42A28 = flt_B42A7C;
  flt_B42A2C = flt_B42A68;
  flt_B42A30 = flt_B42A6C;
  flt_B42A34 = flt_B42A70;
  flt_B42A38 = flt_B42A5C;
  flt_B42A3C = flt_B42A60;
  flt_B42A40 = flt_B42A64;
  flt_B42A44 = flt_B42A50;
  flt_B42A48 = flt_B42A54;
  flt_B42A4C = flt_B42A58;
  v44 = 1.0;
  v48 = 1.0;
  v52 = 1.0;
  v45 = 0.0;
  v46 = 0.0;
  v47 = 0.0;
  v49 = 0.0;
  v50 = 0.0;
  v51 = 0.0;
  sub_793AA0(&v44, v20);
  v6 = v47;
  v28 = flt_B42A78;
  v30 = flt_B42A74;
  v7 = v44;
  v8 = v50;
  v23 = flt_B42A7C;
  v32 = v23 * v50 + v44 * v30 + v47 * v28;
  v21 = v51;
  v9 = v45;
  v10 = v48;
  v36 = v28 * v48 + v30 * v45 + v51 * v23;
  v27 = v49;
  v26 = v46;
  v22 = v52;
  v11 = v46 * v30 + v49 * v28;
  v12 = v52 * v23;
  flt_B2BA7C = v32;
  flt_B2BA80 = v36;
  v40 = v11 + v12;
  v13 = flt_B42A6C;
  flt_B2BA84 = v40;
  v29 = flt_B42A68;
  v24 = flt_B42A70;
  v33 = v13 * v6 + v29 * v7 + v8 * v24;
  flt_B2BA88 = v33;
  v37 = v9 * v29 + v10 * v13 + v21 * v24;
  flt_B2BA8C = v37;
  v41 = v26 * v29 + v27 * v13 + v22 * v24;
  v14 = flt_B42A60;
  flt_B2BA90 = v41;
  v31 = flt_B42A5C;
  v25 = flt_B42A64;
  v34 = v14 * v6 + v31 * v7 + v8 * v25;
  v38 = v9 * v31 + v10 * v14 + v21 * v25;
  v42 = v26 * v31 + v27 * v14 + v22 * v25;
  v15 = flt_B42A54;
  v16 = flt_B42A50;
  v17 = flt_B42A58;
  flt_B2BA94 = v34;
  flt_B2BA98 = v38;
  flt_B2BA9C = v42;
  v35 = v7 * v16 + v6 * v15 + v8 * v17;
  flt_B2BAA0 = v35;
  v39 = v9 * v16 + v10 * v15 + v21 * v17;
  flt_B2BAA4 = v39;
  v43 = v15 * v27 + v16 * v26 + v17 * v22;
  flt_B2BAA8 = v43;
  return LODWORD(v35);
}
