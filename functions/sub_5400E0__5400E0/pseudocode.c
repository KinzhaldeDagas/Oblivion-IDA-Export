void __thiscall sub_5400E0(Sky *this, float *a2, float *a3, float a4)
{
  double v5; // st6
  double v6; // st4
  double v7; // st2
  double v8; // st5
  TESWeather *firstWeather; // eax
  double v10; // st3
  double v11; // st5
  double v12; // rt1
  double v13; // st3
  float v14; // [esp+8h] [ebp+8h]
  float v15; // [esp+8h] [ebp+8h]
  float v16; // [esp+8h] [ebp+8h]
  float v17; // [esp+8h] [ebp+8h]
  float v18; // [esp+8h] [ebp+8h]
  float v19; // [esp+8h] [ebp+8h]
  float v20; // [esp+8h] [ebp+8h]
  float v21; // [esp+8h] [ebp+8h]
  float v22; // [esp+8h] [ebp+8h]
  float v23; // [esp+8h] [ebp+8h]
  float v24; // [esp+8h] [ebp+8h]
  float v25; // [esp+8h] [ebp+8h]
  float v26; // [esp+8h] [ebp+8h]
  float v27; // [esp+Ch] [ebp+Ch]
  float v28; // [esp+Ch] [ebp+Ch]
  float v29; // [esp+Ch] [ebp+Ch]
  float v30; // [esp+Ch] [ebp+Ch]

  v14 = (double)*(unsigned __int8 *)a3 * a3[4] + 0.0;
  v15 = v14 + (double)*((unsigned __int8 *)a3 + 4) * a3[5];
  v16 = v15 + (double)*((unsigned __int8 *)a3 + 8) * a3[6];
  v17 = v16 + (double)*((unsigned __int8 *)a3 + 0xC) * a3[7];
  v5 = dbl_A3F398;
  *a2 = v17 * v5;
  v18 = (double)*((unsigned __int8 *)a3 + 1) * a3[4] + 0.0;
  v19 = v18 + (double)*((unsigned __int8 *)a3 + 5) * a3[5];
  v20 = v19 + (double)*((unsigned __int8 *)a3 + 9) * a3[6];
  v21 = v20 + (double)*((unsigned __int8 *)a3 + 0xD) * a3[7];
  a2[1] = v21 * v5;
  v22 = (double)*((unsigned __int8 *)a3 + 2) * a3[4] + 0.0;
  v23 = v22 + (double)*((unsigned __int8 *)a3 + 6) * a3[5];
  v24 = v23 + (double)*((unsigned __int8 *)a3 + 0xA) * a3[6];
  v25 = v24 + (double)*((unsigned __int8 *)a3 + 0xE) * a3[7];
  v26 = v25 * v5;
  a2[2] = v26;
  if ( a4 <= 1.0 )
  {
    if ( a4 <= 0.0 )
    {
LABEL_18:
      sub_709340(a2);
      return;
    }
    v7 = a4;
    v6 = 0.0;
  }
  else
  {
    v6 = 0.0;
    v7 = (float)1.0;
  }
  v27 = *a2 + v7;
  *a2 = v27;
  a2[1] = a2[1] + v7;
  v8 = v27;
  a2[2] = v7 + v26;
  firstWeather = this->firstWeather;
  if ( !firstWeather )
    goto LABEL_18;
  v10 = 1.0 - 0.0;
  v28 = (double)*((unsigned __int8 *)firstWeather + 0x54) * v5 * (1.0 - 0.0) + 0.0;
  if ( v28 >= v8 )
  {
    v12 = v10;
    v13 = v8;
    v11 = v12;
    if ( v13 < v6 )
      *a2 = v6;
  }
  else
  {
    v11 = v10;
    *a2 = v28;
  }
  v29 = (double)*((unsigned __int8 *)this->firstWeather + 0x55) * v5 * v11 + 0.0;
  if ( v29 >= (double)a2[1] )
  {
    if ( v6 > a2[1] )
      a2[1] = v6;
  }
  else
  {
    a2[1] = v29;
  }
  v30 = v11 * (v5 * (double)*((unsigned __int8 *)this->firstWeather + 0x56)) + 0.0;
  if ( v30 >= (double)a2[2] )
  {
    if ( v6 > a2[2] )
      a2[2] = v6;
  }
  else
  {
    a2[2] = v30;
  }
}
