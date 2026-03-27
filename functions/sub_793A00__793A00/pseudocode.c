float *__thiscall sub_793A00(float *this, float a2)
{
  float *result; // eax
  float v4; // [esp+0h] [ebp-4Ch]
  float v5[9]; // [esp+4h] [ebp-48h] BYREF
  float v6[9]; // [esp+28h] [ebp-24h] BYREF
  float v7; // [esp+50h] [ebp+4h]
  float v8; // [esp+50h] [ebp+4h]

  v7 = a2 / dbl_A8BA48;
  v4 = cos(v7);
  v8 = sin(v7);
  v5[0] = 1.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  v5[3] = 0.0;
  v5[4] = v4;
  v5[5] = v8;
  v5[6] = 0.0;
  v5[7] = -v8;
  v5[8] = v4;
  result = sub_78EDD0(v5, v6, this);
  qmemcpy(this, result, 0x24u);
  return result;
}
