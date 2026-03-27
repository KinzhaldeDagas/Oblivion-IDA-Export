void __thiscall sub_791E80(char *this, int a2)
{
  double v4; // st7
  int v5; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st6
  unsigned int *v9; // ebx
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st7
  double v14; // st7
  float v15; // [esp+8h] [ebp-28h]
  int v16; // [esp+8h] [ebp-28h]
  float v17; // [esp+8h] [ebp-28h]
  float v18; // [esp+8h] [ebp-28h]
  float v19; // [esp+8h] [ebp-28h]
  float v20; // [esp+Ch] [ebp-24h]
  float v21; // [esp+Ch] [ebp-24h]
  float v22; // [esp+Ch] [ebp-24h]
  float v23; // [esp+Ch] [ebp-24h]
  float v24; // [esp+10h] [ebp-20h]
  float v25; // [esp+10h] [ebp-20h]
  float v26; // [esp+10h] [ebp-20h]
  float v27; // [esp+10h] [ebp-20h]
  float v28; // [esp+10h] [ebp-20h]
  float v29; // [esp+10h] [ebp-20h]
  float v30; // [esp+10h] [ebp-20h]
  float v31; // [esp+10h] [ebp-20h]
  float v32; // [esp+10h] [ebp-20h]
  float v33; // [esp+10h] [ebp-20h]
  float v34; // [esp+14h] [ebp-1Ch]
  int v35[6]; // [esp+18h] [ebp-18h] BYREF
  float v36; // [esp+34h] [ebp+4h]
  float v37; // [esp+34h] [ebp+4h]
  float v38; // [esp+34h] [ebp+4h]

  if ( *(_DWORD *)(a2 + 0x28) )
  {
    v15 = flt_B2B714;
    v4 = (double)rand();
    v5 = *(_DWORD *)(a2 + 0x28);
    v6 = 0;
    v36 = v4 / dbl_A3D5A8;
    v7 = v36;
    v8 = v15;
    v16 = 0;
    v37 = v8 - 0.0;
    v34 = v7 * v37 + 0.0;
    v38 = flt_B2B714 / (double)v5;
    if ( v5 > 0 )
    {
      v9 = (unsigned int *)(this + 0x30);
      do
      {
        v24 = v38 * *(float *)(a2 + 0x2C);
        v20 = (double)rand() / dbl_A3D5A8;
        v10 = v24;
        v25 = v38 - v24;
        v26 = v20 * v25 + v10;
        *(float *)v35 = v26 * (double)v16 + v34;
        v11 = flt_B2B714;
        if ( v11 < *(float *)v35 )
          *(float *)v35 = *(float *)v35 - v11;
        v35[2] = *(int *)(a2 + 0x38);
        v35[4] = *(int *)(a2 + 0x4C);
        v17 = *(float *)(a2 + 0x30) - *(float *)(a2 + 0x34);
        v21 = *(float *)(a2 + 0x34) + *(float *)(a2 + 0x30);
        v27 = (double)rand() / dbl_A3D5A8;
        v12 = v27;
        v28 = v21 - v17;
        v29 = v12 * v28 + v17;
        *(float *)&v35[1] = v29 / dbl_A8BA48;
        v18 = *(float *)(a2 + 0x44) - *(float *)(a2 + 0x48);
        v22 = *(float *)(a2 + 0x48) + *(float *)(a2 + 0x44);
        v30 = (double)rand() / dbl_A3D5A8;
        v13 = v30;
        v31 = v22 - v18;
        *(float *)&v35[3] = v13 * v31 + v18;
        v19 = *(float *)(a2 + 0x3C) - *(float *)(a2 + 0x40);
        v23 = *(float *)(a2 + 0x40) + *(float *)(a2 + 0x3C);
        v32 = (double)rand() / dbl_A3D5A8;
        v14 = v32;
        v33 = v23 - v19;
        *(float *)&v35[5] = v14 * v33 + v19;
        sub_7916D0(v9, v35);
        v16 = ++v6;
      }
      while ( v6 < *(_DWORD *)(a2 + 0x28) );
    }
  }
}
