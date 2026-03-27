void __cdecl sub_6C0170(float *a1, unsigned int a2)
{
  double v2; // st7
  unsigned int v3; // ebp
  unsigned int v5; // ebx
  float *v6; // esi
  int v7; // ebp
  double v8; // rt0
  float *v9; // ecx
  int v10; // eax
  double v11; // st7
  float *v12; // eax
  double v13; // st6
  float *v14; // eax
  float v15; // [esp+4h] [ebp-80h]
  float v16; // [esp+18h] [ebp-6Ch]
  float v17; // [esp+18h] [ebp-6Ch]
  float v18; // [esp+18h] [ebp-6Ch]
  float v19; // [esp+1Ch] [ebp-68h]
  float v20; // [esp+1Ch] [ebp-68h]
  float v21; // [esp+1Ch] [ebp-68h]
  float v22; // [esp+20h] [ebp-64h]
  float v23; // [esp+20h] [ebp-64h]
  float v24; // [esp+20h] [ebp-64h]
  float v25; // [esp+24h] [ebp-60h]
  float v26; // [esp+28h] [ebp-5Ch]
  float v27; // [esp+2Ch] [ebp-58h]
  float v28; // [esp+30h] [ebp-54h]
  float v29; // [esp+34h] [ebp-50h]
  float v30; // [esp+38h] [ebp-4Ch]
  float v31; // [esp+3Ch] [ebp-48h]
  float v32; // [esp+40h] [ebp-44h]
  float v33; // [esp+44h] [ebp-40h]
  float v34; // [esp+48h] [ebp-3Ch]
  float v35; // [esp+4Ch] [ebp-38h]
  float v36; // [esp+50h] [ebp-34h]
  float v37; // [esp+54h] [ebp-30h]
  float v38; // [esp+58h] [ebp-2Ch]
  float v39; // [esp+5Ch] [ebp-28h]
  float v40; // [esp+60h] [ebp-24h]
  float v41; // [esp+64h] [ebp-20h]
  float v42; // [esp+68h] [ebp-1Ch]
  float v43; // [esp+6Ch] [ebp-18h]
  float v44; // [esp+70h] [ebp-14h]
  float v45; // [esp+74h] [ebp-10h]
  int v46; // [esp+78h] [ebp-Ch] BYREF
  float v47; // [esp+7Ch] [ebp-8h]
  float v48; // [esp+80h] [ebp-4h]
  float v49; // [esp+88h] [ebp+4h]
  float v50; // [esp+88h] [ebp+4h]

  v2 = dbl_A3D0C0;
  v3 = a2;
  v5 = a2 - 1;
  if ( a2 >= 2 )
  {
    v6 = a1 + 1;
    v16 = a1[1] * v2;
    v19 = a1[2] * v2;
    v22 = v2 * a1[3];
    *(float *)&v46 = v16 - a1[0x14];
    v47 = v19 - a1[0x15];
    v48 = v22 - a1[0x16];
    sub_6BFF30(a1, (float *)&v46, a1 + 0x14, 1.0, 1.0);
    if ( v5 > 1 )
    {
      v7 = a2 - 2;
      do
      {
        v49 = v6[0x25] - v6[0x12];
        v15 = v49;
        v50 = v6[0x12] - v6[0xFFFFFFFF];
        sub_6BFF30(v6 + 0x12, v6, v6 + 0x26, v50, v15);
        v6 += 0x13;
        --v7;
      }
      while ( v7 );
      v3 = a2;
    }
    v8 = dbl_A3D0C0;
    v17 = a1[0x13 * v5 + 1] * v8;
    v9 = &a1[0x13 * v5];
    v10 = 0x13 * (v3 - 2);
    v20 = v9[2] * v8;
    v23 = v8 * v9[3];
    v11 = v17 - a1[v10 + 1];
    v12 = &a1[v10 + 1];
    *(float *)&v46 = v11;
    v47 = v20 - v12[1];
    v48 = v23 - v12[2];
    sub_6BFF30(v9, v12, (float *)&v46, 1.0, 1.0);
    v2 = dbl_A3D0C0;
  }
  if ( a2 != 1 )
  {
    v13 = dbl_A30E48;
    v14 = a1 + 0x16;
    do
    {
      v18 = v14[0xFFFFFFF4] * v2;
      v21 = v14[0xFFFFFFF5] * v2;
      v24 = v14[0xFFFFFFF6] * v2;
      v31 = v18 + v14[4];
      v32 = v21 + v14[5];
      v33 = v24 + v14[6];
      v25 = v14[0xFFFFFFFE] - v14[0xFFFFFFEB];
      v26 = v14[0xFFFFFFFF] - v14[0xFFFFFFEC];
      v27 = *v14 - v14[0xFFFFFFED];
      v28 = v25 * v13;
      v29 = v26 * v13;
      v30 = v27 * v13;
      v34 = v28 - v31;
      v14[0xFFFFFFF7] = v34;
      v35 = v29 - v32;
      v14[0xFFFFFFF8] = v35;
      v36 = v30 - v33;
      v14[0xFFFFFFF9] = v36;
      v37 = v14[0xFFFFFFFE] - v14[0xFFFFFFEB];
      v38 = v14[0xFFFFFFFF] - v14[0xFFFFFFEC];
      v39 = *v14 - v14[0xFFFFFFED];
      v43 = v37 * v2;
      v44 = v38 * v2;
      v45 = v39 * v2;
      v40 = v14[0xFFFFFFF4] + v14[4];
      v41 = v14[5] + v14[0xFFFFFFF5];
      v42 = v14[6] + v14[0xFFFFFFF6];
      *(float *)&v46 = v40 - v43;
      v14[0xFFFFFFFA] = *(float *)&v46;
      v14 += 0x13;
      --v5;
      v47 = v41 - v44;
      v14[0xFFFFFFE8] = v47;
      v48 = v42 - v45;
      v14[0xFFFFFFE9] = v48;
    }
    while ( v5 );
  }
}
