float *__thiscall sub_78F050(float *this, float a2, double a3, float a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st3
  double v10; // st5
  double v11; // st3
  double v12; // st6
  float *result; // eax
  float v14; // [esp+0h] [ebp-58h]
  float v15; // [esp+0h] [ebp-58h]
  float v16; // [esp+0h] [ebp-58h]
  double v17; // [esp+0h] [ebp-58h]
  double v18; // [esp+8h] [ebp-50h]
  float v19[9]; // [esp+10h] [ebp-48h] BYREF
  float v20[9]; // [esp+34h] [ebp-24h] BYREF
  float v21; // [esp+5Ch] [ebp+4h]
  double v22; // [esp+60h] [ebp+8h]

  v14 = a2 / dbl_A8BA48;
  v21 = sin(v14);
  v15 = cos(v14);
  v5 = v15;
  v16 = 1.0 - v15;
  v6 = *(float *)&a3;
  v7 = v16;
  v8 = *(float *)&a3 * v16;
  v19[0] = *(float *)&a3 * v8 + v5;
  v9 = *((float *)&a3 + 1);
  v17 = *((float *)&a3 + 1) * v8;
  v22 = a4 * v21;
  v19[1] = v22 + v17;
  v10 = v8 * a4;
  v18 = v9 * v21;
  v19[2] = v10 - v18;
  v19[3] = v17 - v22;
  v19[4] = v9 * (v9 * v7) + v5;
  v11 = v9 * v7 * a4;
  v12 = v6 * v21;
  v19[5] = v12 + v11;
  v19[6] = v10 + v18;
  v19[7] = v11 - v12;
  v19[8] = v5 + v7 * a4 * a4;
  result = sub_78EDD0(v19, v20, this);
  qmemcpy(this, result, 0x24u);
  return result;
}
