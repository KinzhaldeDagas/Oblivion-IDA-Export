void __cdecl sub_6BC600(int a1, int a2)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  float *v5; // eax
  float v6; // [esp+0h] [ebp-6Ch]
  float v7; // [esp+4h] [ebp-68h]
  float v8; // [esp+8h] [ebp-64h]
  float v9; // [esp+Ch] [ebp-60h]
  float v10; // [esp+10h] [ebp-5Ch]
  float v11; // [esp+14h] [ebp-58h]
  float v12; // [esp+18h] [ebp-54h]
  float v13; // [esp+1Ch] [ebp-50h]
  float v14; // [esp+20h] [ebp-4Ch]
  float v15; // [esp+24h] [ebp-48h]
  float v16; // [esp+28h] [ebp-44h]
  float v17; // [esp+2Ch] [ebp-40h]
  float v18; // [esp+30h] [ebp-3Ch]
  float v19; // [esp+34h] [ebp-38h]
  float v20; // [esp+38h] [ebp-34h]
  float v21; // [esp+3Ch] [ebp-30h]
  float v22; // [esp+40h] [ebp-2Ch]
  float v23; // [esp+44h] [ebp-28h]
  float v24; // [esp+48h] [ebp-24h]
  float v25; // [esp+4Ch] [ebp-20h]
  float v26; // [esp+50h] [ebp-1Ch]
  float v27; // [esp+54h] [ebp-18h]
  float v28; // [esp+58h] [ebp-14h]
  float v29; // [esp+5Ch] [ebp-10h]
  float v30; // [esp+60h] [ebp-Ch]
  float v31; // [esp+64h] [ebp-8h]
  float v32; // [esp+68h] [ebp-4h]

  v2 = a2 - 1;
  if ( a2 != 1 )
  {
    v3 = dbl_A3D0C0;
    v4 = dbl_A30E48;
    v5 = (float *)(a1 + 0x4C);
    do
    {
      v6 = v5[0xFFFFFFF4] * v3;
      v7 = v5[0xFFFFFFF5] * v3;
      v8 = v5[0xFFFFFFF6] * v3;
      v15 = v5[1] + v6;
      v16 = v5[2] + v7;
      v17 = v5[3] + v8;
      v9 = v5[0xFFFFFFFE] - v5[0xFFFFFFEE];
      v10 = v5[0xFFFFFFFF] - v5[0xFFFFFFEF];
      v11 = *v5 - v5[0xFFFFFFF0];
      v12 = v9 * v4;
      v13 = v10 * v4;
      v14 = v11 * v4;
      v18 = v12 - v15;
      v5[0xFFFFFFF7] = v18;
      v19 = v13 - v16;
      v5[0xFFFFFFF8] = v19;
      v20 = v14 - v17;
      v5[0xFFFFFFF9] = v20;
      v21 = v5[0xFFFFFFFE] - v5[0xFFFFFFEE];
      v22 = v5[0xFFFFFFFF] - v5[0xFFFFFFEF];
      v23 = *v5 - v5[0xFFFFFFF0];
      v27 = v21 * v3;
      v28 = v22 * v3;
      v29 = v23 * v3;
      v24 = v5[1] + v5[0xFFFFFFF4];
      v25 = v5[2] + v5[0xFFFFFFF5];
      v26 = v5[3] + v5[0xFFFFFFF6];
      v30 = v24 - v27;
      v5[0xFFFFFFFA] = v30;
      v5 += 0x10;
      --v2;
      v31 = v25 - v28;
      v5[0xFFFFFFEB] = v31;
      v32 = v26 - v29;
      v5[0xFFFFFFEC] = v32;
    }
    while ( v2 );
  }
}
