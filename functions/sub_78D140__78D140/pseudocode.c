void __usercall sub_78D140(int a1@<edi>, float *a2, float *a3)
{
  int v4; // edx
  int v5; // edx
  double v6; // st7
  float v7; // edx
  double v8; // st6
  float v9; // edx
  double v10; // st5
  float v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  rsize_t v17; // [esp-4h] [ebp-98h] BYREF
  float v18[3]; // [esp+48h] [ebp-4Ch] BYREF
  int v19; // [esp+54h] [ebp-40h]
  int v20; // [esp+58h] [ebp-3Ch]
  int v21; // [esp+5Ch] [ebp-38h]
  float v22; // [esp+60h] [ebp-34h]
  float v23; // [esp+64h] [ebp-30h]
  float v24; // [esp+68h] [ebp-2Ch]
  int v25; // [esp+6Ch] [ebp-28h] BYREF
  int v26; // [esp+70h] [ebp-24h]
  float v27; // [esp+74h] [ebp-20h]
  float v28; // [esp+7Ch] [ebp-18h]
  float v29; // [esp+80h] [ebp-14h]
  char *v30; // [esp+84h] [ebp-10h]
  int v31; // [esp+90h] [ebp-4h]
  int v32; // [esp+9Ch] [ebp+8h]
  int v33; // [esp+9Ch] [ebp+8h]
  float v34; // [esp+9Ch] [ebp+8h]
  float v35; // [esp+9Ch] [ebp+8h]
  float v36; // [esp+9Ch] [ebp+8h]

  v30 = (char *)&v17 + 4;
  v31 = 0;
  if ( a2 && a3 )
  {
    v32 = *(int *)a2;
    v22 = *(float *)&dword_B429AC;
    v4 = dword_B429B0;
    v29 = a2[1];
    v23 = *(float *)&v4;
    v5 = dword_B429B4;
    v28 = a2[2];
    v24 = *(float *)&v5;
    v6 = *(float *)&v32;
    v7 = *(float *)&dword_B2B6D8;
    v19 = v32;
    v18[0] = v7;
    v8 = v29;
    v9 = *(float *)&dword_B2B6DC;
    *(float *)&v20 = v29;
    v18[1] = v9;
    v10 = v28;
    v11 = *(float *)&dword_B2B6E0;
    *(float *)&v21 = v28;
    v18[2] = v11;
    v33 = *(int *)a3;
    v28 = a3[1];
    v29 = a3[2];
    v25 = v33;
    *(float *)&v26 = v28;
    v27 = v29;
    if ( v22 != v6 || v23 != v8 || v24 != v10 || sub_786E90(v18, (float *)&v25) )
    {
      v12 = v20;
      v13 = v21;
      dword_B429AC = v19;
      v14 = v25;
      dword_B429B0 = v12;
      v15 = v26;
      dword_B429B4 = v13;
      v16 = LODWORD(v27);
      dword_B2B6D8 = v14;
      dword_B2B6DC = v15;
      dword_B2B6E0 = v16;
      sub_78C4D0(1);
      sub_7A6700((float *)&v25);
      sub_78C4D0(1);
      v34 = asin(v27);
      v35 = v34 * dbl_A8BA48;
      v36 = 1.0 - (v35 - flt_B2B5FC) / (flt_B2B600 - flt_B2B5FC);
      if ( v36 < dbl_A2FC68 )
        v36 = 0.0;
      if ( v36 > 1.0 )
        v36 = 1.0;
      flt_B2B604 = v36 * dbl_A8C3F0 + dbl_A8C3E8;
    }
  }
  else
  {
    LODWORD(v17) = 0x3B;
    sub_414500(&dword_B2B614, a1, "SetCamera() requires non-NULL position and direction values", v17);
  }
}
