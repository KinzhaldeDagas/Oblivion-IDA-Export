float *__thiscall sub_711AE0(const void *this, float *a2, float *a3)
{
  char v3; // bl
  float *result; // eax
  float v5[2]; // [esp+Ch] [ebp-2Ch] BYREF
  float v6[9]; // [esp+14h] [ebp-24h] BYREF

  qmemcpy(v6, this, sizeof(v6));
  v3 = sub_710990(v6, a2, v5);
  sub_710B00(v6, a2, v5);
  result = a3;
  *a3 = v6[0];
  a3[1] = v6[3];
  a3[2] = v6[6];
  a3[3] = v6[1];
  a3[4] = v6[4];
  a3[5] = v6[7];
  if ( v3 )
  {
    a3[6] = -v6[2];
    a3[7] = -v6[5];
    a3[8] = -v6[8];
  }
  else
  {
    a3[6] = v6[2];
    a3[7] = v6[5];
    a3[8] = v6[8];
  }
  return result;
}
