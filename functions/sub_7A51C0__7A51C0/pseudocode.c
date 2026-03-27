unsigned int __thiscall sub_7A51C0(float *this, int a2, float a3, float a4, float a5, float a6, float *a7)
{
  double v7; // st6
  double v8; // st5
  double v9; // st6
  unsigned int result; // eax
  float *v11; // eax
  float v12; // [esp+Ch] [ebp-7Ch]
  float v13; // [esp+Ch] [ebp-7Ch]
  float v14; // [esp+Ch] [ebp-7Ch]
  unsigned __int16 v15; // [esp+Ch] [ebp-7Ch]
  int v16; // [esp+10h] [ebp-78h]
  int v17; // [esp+10h] [ebp-78h]
  float v18; // [esp+14h] [ebp-74h] BYREF
  float v19; // [esp+18h] [ebp-70h]
  float v20; // [esp+1Ch] [ebp-6Ch]
  double v21; // [esp+20h] [ebp-68h]
  float v22; // [esp+28h] [ebp-60h]
  float v23; // [esp+34h] [ebp-54h] BYREF
  float v24; // [esp+38h] [ebp-50h]
  float v25; // [esp+3Ch] [ebp-4Ch]
  float v26; // [esp+40h] [ebp-48h] BYREF
  float v27; // [esp+44h] [ebp-44h]
  float v28; // [esp+48h] [ebp-40h]
  float v29[3]; // [esp+4Ch] [ebp-3Ch] BYREF
  float v30[3]; // [esp+58h] [ebp-30h] BYREF
  float v31; // [esp+64h] [ebp-24h] BYREF
  float v32; // [esp+68h] [ebp-20h]
  float v33; // [esp+6Ch] [ebp-1Ch]
  float v34[3]; // [esp+70h] [ebp-18h] BYREF
  float v35; // [esp+7Ch] [ebp-Ch] BYREF
  float v36; // [esp+80h] [ebp-8h]
  float v37; // [esp+84h] [ebp-4h]

  v12 = *this * a6;
  v7 = v12;
  v26 = v12;
  v13 = *(this + 1) * a6;
  v8 = v13;
  v27 = v13;
  v14 = *(this + 2) * a6;
  v23 = a3 - v26;
  v24 = a4 - v27;
  v25 = a5 - v14;
  v26 = v7;
  v27 = v8;
  v28 = v14;
  v30[0] = v26 + a3;
  v30[1] = v27 + a4;
  v30[2] = v14 + a5;
  *(float *)&v21 = *(this + 3) * a6;
  *((float *)&v21 + 1) = *(this + 4) * a6;
  v22 = *(this + 5) * a6;
  v26 = a3 - *(float *)&v21;
  v27 = a4 - *((float *)&v21 + 1);
  v28 = a5 - v22;
  v18 = *(this + 3) * a6;
  v19 = *(this + 4) * a6;
  v21 = a6;
  v20 = a6 * *(this + 5);
  v34[0] = a3 + v18;
  v9 = a4 + v19;
  *(_WORD *)(a2 + 0x22) = 0;
  v34[1] = v9;
  v15 = 0;
  v34[2] = a5 + v20;
  result = sub_7877B0((_DWORD *)a2);
  if ( (_WORD)result )
  {
    v21 = v21 + v21;
    do
    {
      v11 = (float *)sub_794730((_DWORD *)a2, v15);
      v29[0] = *v11;
      v29[1] = v11[1];
      v29[2] = v11[2];
      sub_7A50B0(&v31, &v23, v30, v29);
      *(float *)&v16 = (v32 - v24) * (v32 - v24) + (v31 - v23) * (v31 - v23) + (v33 - v25) * (v33 - v25);
      v18 = COERCE_FLOAT((v16 >> 1) + 0x1FC00000) / v21;
      if ( a7 )
        v18 = (*a7 - a7[2]) * v18 + a7[2];
      sub_7A50B0(&v35, &v26, v34, v29);
      *(float *)&v17 = (v36 - v27) * (v36 - v27) + (v35 - v26) * (v35 - v26) + (v37 - v28) * (v37 - v28);
      v19 = COERCE_FLOAT((v17 >> 1) + 0x1FC00000) / v21;
      if ( a7 )
        v19 = (a7[1] - a7[5]) * v19 + a7[5];
      sub_7964F0((char *)a2, (int)&v18);
      ++v15;
      result = sub_7877B0((_DWORD *)a2);
    }
    while ( v15 < (unsigned __int16)result );
  }
  return result;
}
