int __thiscall sub_78FEB0(
        _DWORD *this,
        float *a2,
        float a3,
        float a4,
        int a5,
        int a6,
        float *a7,
        int a8,
        unsigned __int8 a9,
        float a10,
        int a11)
{
  double v12; // st7
  int result; // eax
  double v14; // st7
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  double v18; // st4
  bool v19; // zf
  float v20; // [esp+18h] [ebp-64h]
  float v21; // [esp+1Ch] [ebp-60h]
  int v22[2]; // [esp+20h] [ebp-5Ch] BYREF
  double v23; // [esp+28h] [ebp-54h]
  float v24; // [esp+30h] [ebp-4Ch]
  float v25; // [esp+34h] [ebp-48h]
  float v26; // [esp+38h] [ebp-44h]
  float v27; // [esp+3Ch] [ebp-40h] BYREF
  float v28; // [esp+40h] [ebp-3Ch]
  float v29; // [esp+44h] [ebp-38h]
  float v30; // [esp+48h] [ebp-34h] BYREF
  float v31; // [esp+4Ch] [ebp-30h]
  float v32; // [esp+50h] [ebp-2Ch]
  float v33; // [esp+54h] [ebp-28h]
  float v34; // [esp+58h] [ebp-24h]
  float v35; // [esp+5Ch] [ebp-20h]
  int v36[3]; // [esp+60h] [ebp-1Ch] BYREF
  float v37[4]; // [esp+6Ch] [ebp-10h] BYREF
  float v38; // [esp+88h] [ebp+Ch]
  float v39; // [esp+88h] [ebp+Ch]
  float v40; // [esp+88h] [ebp+Ch]
  float v41; // [esp+88h] [ebp+Ch]
  float v42; // [esp+88h] [ebp+Ch]
  float v43; // [esp+88h] [ebp+Ch]
  float v44; // [esp+88h] [ebp+Ch]
  int i; // [esp+88h] [ebp+Ch]
  int v46; // [esp+8Ch] [ebp+10h]
  int v47; // [esp+8Ch] [ebp+10h]
  int v48; // [esp+A0h] [ebp+24h]
  float v49; // [esp+A4h] [ebp+28h]
  float v50; // [esp+A4h] [ebp+28h]
  int v51; // [esp+A4h] [ebp+28h]

  v20 = 0.0;
  v21 = 1.0 / (double)a5;
  if ( dword_B429B8 )
  {
    v38 = a4 + (1.0 - a4) * a3;
    if ( !a11 )
      v38 = v38 * v38;
    v12 = a3;
    v39 = 1.0 - *(float *)(dword_B429B8 + 8) + *(float *)(dword_B429B8 + 8) * v38;
  }
  else
  {
    v12 = a3;
    v39 = 1.0;
  }
  result = a5;
  v37[2] = v39;
  v37[1] = v39;
  v37[0] = v39;
  v37[3] = 1.0;
  if ( a5 >= 0 )
  {
    v23 = v12 + a10;
    v48 = a5 + 1;
    while ( 1 )
    {
      *(float *)&v46 = flt_B2B714 * v20;
      v40 = v20 * *a7;
      *(float *)v22 = v12 * a7[2] + v40;
      *(float *)&v22[1] = a7[1] * v23;
      sub_796320((_DWORD *)a6, (int)v22, NAN);
      v41 = cos(*(float *)&v46);
      v49 = v41;
      v42 = sin(*(float *)&v46);
      v24 = a2[0xD] * v42 + v49 * a2[0xA];
      v25 = a2[0xB] * v49 + v42 * a2[0xE];
      v26 = v49 * a2[0xC] + v42 * a2[0xF];
      v43 = flt_B2B70C + *(float *)&v46;
      v50 = cos(v43);
      v44 = sin(v43);
      v27 = a2[0xD] * v44 + v50 * a2[0xA];
      v28 = a2[0xB] * v50 + v44 * a2[0xE];
      v29 = v50 * a2[0xC] + v44 * a2[0xF];
      sub_796590((char *)a6, (int *)&v27);
      *(float *)v36 = v28 * v26 - v29 * v25;
      *(float *)&v36[1] = v29 * v24 - v26 * v27;
      *(float *)&v36[2] = v25 * v27 - v28 * v24;
      sub_7965E0((char *)a6, v36);
      v14 = 0.0;
      v15 = 0;
      for ( i = 0; ; i += 0x18 )
      {
        v16 = *(this + 0xD);
        *(float *)&v51 = v14;
        if ( !v16 || v15 >= (*(this + 0xE) - v16) / 0x18 )
          break;
        v17 = *(this + 0xD);
        if ( !v17 || v15 >= (*(this + 0xE) - v17) / 0x18 )
          _invalid_parameter_noinfo();
        v14 = sub_78F2C0((float *)(i + *(this + 0xD)), *(float *)&v46, a3) + *(float *)&v51;
        ++v15;
      }
      *(float *)&v47 = *(float *)&v51 + dbl_A2F928;
      v30 = a2[6] * v24 + a2[3];
      v31 = a2[6] * v25 + a2[4];
      v32 = a2[6] * v26 + a2[5];
      if ( *(float *)&v47 != 1.0 )
      {
        v33 = v24 * a2[6] * *(float *)&v47 + a2[3];
        v18 = a2[6];
        v30 = v33;
        v34 = v25 * v18 * *(float *)&v47 + a2[4];
        v31 = v34;
        v35 = *(float *)&v47 * (v26 * a2[6]) + a2[5];
        v32 = v35;
      }
      sub_796260((char *)a6, (int *)&v30);
      sub_796230((void *)a6, v37);
      if ( *(_BYTE *)(a6 + 8) )
        sub_796540((_DWORD *)a6, a8, a9);
      result = 1;
      ++*(_WORD *)(a6 + 0x22);
      v19 = v48-- == 1;
      v20 = v21 + v20;
      if ( v19 )
        break;
      v12 = a3;
    }
  }
  return result;
}
