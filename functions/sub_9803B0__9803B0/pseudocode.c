signed int __thiscall sub_9803B0(float *this, float *a2, float *a3)
{
  int v4; // edx
  long double v5; // st7
  float *v6; // ecx
  double v7; // st4
  double v8; // st3
  double v9; // st2
  double v10; // st3
  double v11; // st2
  double v12; // rt2
  double v13; // st2
  double v14; // st3
  float v16; // [esp+0h] [ebp-24h]
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+4h] [ebp-20h]
  float v19; // [esp+8h] [ebp-1Ch]
  float v20; // [esp+8h] [ebp-1Ch]
  float v21; // [esp+8h] [ebp-1Ch]
  float v22; // [esp+Ch] [ebp-18h]
  float v23; // [esp+10h] [ebp-14h]
  float v24; // [esp+14h] [ebp-10h]
  float v25[3]; // [esp+18h] [ebp-Ch]
  float v26; // [esp+28h] [ebp+4h]
  float v27; // [esp+28h] [ebp+4h]
  float v28; // [esp+28h] [ebp+4h]
  float v29; // [esp+28h] [ebp+4h]
  float v30; // [esp+2Ch] [ebp+8h]
  float v31; // [esp+2Ch] [ebp+8h]
  float v32; // [esp+2Ch] [ebp+8h]
  float v33; // [esp+2Ch] [ebp+8h]
  float v34; // [esp+2Ch] [ebp+8h]

  v18 = flt_A3B888;
  v16 = flt_A32048;
  v4 = 0;
  v5 = *(this + 0x1B);
  v6 = this + 0x14;
  v19 = fabs(v5);
  v25[0] = v19;
  v20 = fabs(v6[8]);
  v25[1] = v20;
  v21 = fabs(v6[9]);
  v25[2] = v21;
  v22 = v6[0xFFFFFFFB] - *a2;
  v23 = v6[0xFFFFFFFC] - a2[1];
  v24 = v6[0xFFFFFFFD] - a2[2];
  v7 = v16;
  do
  {
    v26 = v23 * v6[0xFFFFFFFF] + v22 * v6[0xFFFFFFFE] + v24 * *v6;
    v30 = *a3 * v6[0xFFFFFFFE] + v6[0xFFFFFFFF] * a3[1] + a3[2] * *v6;
    v8 = v30;
    v31 = fabs(v30);
    if ( v31 <= dbl_A7C398 )
    {
      v29 = fabs(v26);
      if ( v25[v4] < (double)v29 )
        return 0;
    }
    else
    {
      v32 = 1.0 / v8;
      v9 = v26;
      v27 = (v25[v4] + v26) * v32;
      v33 = v32 * (v9 - v25[v4]);
      v10 = v27;
      v11 = v33;
      if ( v33 < (double)v27 )
      {
        v34 = v27;
        v28 = v11;
        v10 = v28;
        v11 = v34;
      }
      if ( v18 >= v10 )
      {
        v14 = v11;
      }
      else
      {
        v12 = v11;
        v13 = v10;
        v14 = v12;
        v18 = v13;
      }
      if ( v14 < v7 )
      {
        v17 = v14;
        v7 = v17;
      }
      if ( v18 > v7 || v7 < 0.0 )
        return 0;
    }
    ++v4;
    v6 += 3;
  }
  while ( v4 < 3 );
  return 1;
}
