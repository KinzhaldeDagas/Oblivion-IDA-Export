float *__thiscall sub_78EF60(float *this, float a2, float a3)
{
  float *result; // eax
  float v5; // [esp+0h] [ebp-50h]
  float v6; // [esp+4h] [ebp-4Ch]
  float v7[9]; // [esp+8h] [ebp-48h] BYREF
  float v8[9]; // [esp+2Ch] [ebp-24h] BYREF
  float v9; // [esp+54h] [ebp+4h]
  float v10; // [esp+54h] [ebp+4h]
  float v11; // [esp+54h] [ebp+4h]
  float v12; // [esp+54h] [ebp+4h]
  float v13; // [esp+58h] [ebp+8h]

  v9 = a2 / dbl_A8BA48;
  v5 = cos(v9);
  v10 = sin(v9);
  v6 = v10;
  v11 = a3 / dbl_A8BA48;
  v13 = cos(v11);
  v12 = sin(v11);
  v7[0] = v13 * v5;
  v7[1] = v12 * v5;
  v7[2] = -v6;
  v7[3] = -v12;
  v7[4] = v13;
  v7[5] = 0.0;
  v7[6] = v13 * v6;
  v7[7] = v6 * v12;
  v7[8] = v5;
  result = sub_78EDD0(v7, v8, this);
  qmemcpy(this, result, 0x24u);
  return result;
}
