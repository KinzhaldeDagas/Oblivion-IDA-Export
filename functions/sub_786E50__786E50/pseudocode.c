double __thiscall sub_786E50(float *this, float *a2)
{
  double v2; // st4
  double v3; // st6
  double v4; // st4
  double v5; // st5
  double v6; // st6
  int v8; // [esp+4h] [ebp+4h]

  v2 = *a2 - *this;
  v3 = v2 * v2;
  v4 = a2[1] - *(this + 1);
  v5 = v3;
  v6 = a2[2] - *(this + 2);
  *(float *)&v8 = v4 * v4 + v5 + v6 * v6;
  return COERCE_FLOAT((v8 >> 1) + 0x1FC00000);
}
