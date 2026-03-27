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

  v4 = *((float **)this + 2);
  v17 = 0;
  if ( v4 && sub_4A6D80(v4, a2, a3) )
    return *(float *)(*((_DWORD *)this + 2) + 0xC);
  v7 = sub_4A7330(this, a2);
  if ( !a2 || !v7 )
    return 0.0;
  result = 1.0;
  if ( a3 >= 1.0 )
  {
    v8 = this;
    v25 = flt_A32048;
    do
    {
      v9 = *((float ***)v8 + 1);
      if ( !v9 )
      {
        v9 = (float **)this;
        v17 = 1;
      }
      v21 = sub_4A6A60(a2, (float *)*(_DWORD *)v8);
      v20 = sub_4A6A60(a2, *v9);
      v23 = sub_4A6D20((float *)*(_DWORD *)v8, *v9);
      v18 = sub_4A6A60((float *)*(_DWORD *)v8, *v9);
      v10 = v21;
      v22 = v18 - v20 + v21;
      v11 = v23;
      v24 = v22 / (v23 + v23);
      if ( v24 < v11 )
      {
        if ( v24 > 0.0 )
          v10 = v10 - v24 * v24;
      }
      else
      {
        v10 = v20;
      }
      v19 = v10;
      if ( v25 > (double)v19 )
        v25 = v10;
      v8 = (float *)v9;
    }
    while ( !v17 );
    *(float *)&v26 = sqrt(v25);
    if ( a3 > (double)*(float *)&v26 )
      v12 = *(float *)&v26 / a3;
    else
      v12 = 1.0;
    v13 = *((_DWORD *)this + 2);
    v27 = v12;
    if ( v13 )
      FormHeapFree(v13);
    v14 = (float *)FormHeapAlloc(0x10u);
    v15 = v14;
    if ( v14 )
    {
      sub_4A6920(v14);
      v16 = v15;
    }
    else
    {
      v16 = 0;
    }
    *((_DWORD *)this + 2) = v16;
    sub_4A6A20(a2, v16);
    *(float *)(*((_DWORD *)this + 2) + 8) = a3;
    *(float *)(*((_DWORD *)this + 2) + 0xC) = v27;
    return v27;
  }
  return result;
}
