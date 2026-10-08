double __thiscall sub_4A74E0(float *this, float *a2, float a3)
{
  float *v4; // ecx
  double result; // st7
  bool v7; // al
  float *v8; // edi
  float **v9; // esi
  double v10; // st7
  double v11; // st5
  double v12; // st7
  unsigned int v13; // eax
  float *v14; // eax
  float *v15; // esi
  float *v16; // eax
  char v17; // [esp+1Bh] [ebp-1Dh]
  float v18; // [esp+1Ch] [ebp-1Ch]
  float v19; // [esp+1Ch] [ebp-1Ch]
  float v20; // [esp+20h] [ebp-18h]
  float v21; // [esp+24h] [ebp-14h]
  float v22; // [esp+24h] [ebp-14h]
  float v23; // [esp+28h] [ebp-10h]
  float v24; // [esp+28h] [ebp-10h]
  float v25; // [esp+3Ch] [ebp+4h]
  int v26; // [esp+3Ch] [ebp+4h]
  float v27; // [esp+3Ch] [ebp+4h]

  v4 = *((float **)this + 2); /*0x4a7509*/
  v17 = 0; /*0x4a7512*/
  if ( v4 && sub_4A6D80(v4, a2, a3) ) /*0x4a7522*/
    return *(float *)(*((_DWORD *)this + 2) + 0xC); /*0x4a752e*/
  v7 = sub_4A7330(this, a2); /*0x4a7539*/
  if ( !a2 || !v7 ) /*0x4a7548*/
    return 0.0; /*0x4a76ce*/
  result = 1.0; /*0x4a754e*/
  if ( a3 >= 1.0 ) /*0x4a7559*/
  {
    v8 = this; /*0x4a7561*/
    v25 = flt_A32048; /*0x4a7569*/
    do /*0x4a7632*/
    {
      v9 = *((float ***)v8 + 1); /*0x4a7570*/
      if ( !v9 ) /*0x4a7575*/
      {
        v9 = (float **)this; /*0x4a7577*/
        v17 = 1; /*0x4a7579*/
      }
      v21 = sub_4A6A60(a2, (float *)*(_DWORD *)v8); /*0x4a7588*/
      v20 = sub_4A6A60(a2, *v9); /*0x4a7596*/
      v23 = sub_4A6D20((float *)*(_DWORD *)v8, *v9); /*0x4a75a4*/
      v18 = sub_4A6A60((float *)*(_DWORD *)v8, *v9); /*0x4a75b2*/
      v10 = v21; /*0x4a75ca*/
      v22 = v18 - v20 + v21; /*0x4a75cc*/
      v11 = v23; /*0x4a75de*/
      v24 = v22 / (v23 + v23); /*0x4a75e0*/
      if ( v24 < v11 ) /*0x4a75f1*/
      {
        if ( v24 > 0.0 ) /*0x4a7604*/
          v10 = v10 - v24 * v24; /*0x4a760c*/
      }
      else
      {
        v10 = v20; /*0x4a75f5*/
      }
      v19 = v10; /*0x4a760e*/
      if ( v25 > (double)v19 ) /*0x4a7621*/
        v25 = v10; /*0x4a7623*/
      v8 = (float *)v9; /*0x4a7630*/
    }
    while ( !v17 ); /*0x4a7632*/
    *(float *)&v26 = sqrt(v25); /*0x4a7641*/
    if ( a3 > (double)*(float *)&v26 ) /*0x4a765c*/
      v12 = *(float *)&v26 / a3; /*0x4a7666*/
    else
      v12 = 1.0; /*0x4a7662*/
    v13 = *((_DWORD *)this + 2); /*0x4a7668*/
    v27 = v12; /*0x4a766b*/
    if ( v13 ) /*0x4a7671*/
      FormHeapFree(v13); /*0x4a7674*/
    v14 = (float *)FormHeapAlloc(0x10u); /*0x4a767e*/
    v15 = v14; /*0x4a7683*/
    if ( v14 ) /*0x4a7696*/
    {
      sub_4A6920(v14); /*0x4a769a*/
      v16 = v15; /*0x4a769f*/
    }
    else
    {
      v16 = 0; /*0x4a76a3*/
    }
    *((_DWORD *)this + 2) = v16; /*0x4a76b0*/
    sub_4A6A20(a2, v16); /*0x4a76b3*/
    *(float *)(*((_DWORD *)this + 2) + 8) = a3; /*0x4a76bf*/
    *(float *)(*((_DWORD *)this + 2) + 0xC) = v27; /*0x4a76c9*/
    return v27; /*0x4a76c5*/
  }
  return result; /*0x4a76d0*/
}
