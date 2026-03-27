char __thiscall sub_7102B0(float *this, float *a2)
{
  float *v2; // edx
  double v3; // st7
  float *v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]

  v2 = a2 + 2;
  *a2 = *(this + 8) * *(this + 4) - *(this + 7) * *(this + 5);
  a2[1] = *(this + 7) * *(this + 2) - *(this + 1) * *(this + 8);
  a2[2] = *(this + 1) * *(this + 5) - *(this + 2) * *(this + 4);
  a2[3] = *(this + 6) * *(this + 5) - *(this + 3) * *(this + 8);
  a2[4] = *this * *(this + 8) - *(this + 6) * *(this + 2);
  a2[5] = *(this + 3) * *(this + 2) - *(this + 5) * *this;
  a2[6] = *(this + 3) * *(this + 7) - *(this + 6) * *(this + 4);
  a2[7] = *(this + 1) * *(this + 6) - *(this + 7) * *this;
  a2[8] = *this * *(this + 4) - *(this + 3) * *(this + 1);
  v9 = *a2 * *this + *(this + 1) * a2[3] + a2[6] * *(this + 2);
  v3 = v9;
  v10 = fabs(v9);
  if ( v10 <= (double)flt_A372CC )
    return 0;
  v5 = v2;
  v6 = 3;
  v11 = 1.0 / v3;
  v7 = v11;
  do
  {
    v8 = v5[0xFFFFFFFE];
    v5 += 3;
    --v6;
    v5[0xFFFFFFFB] = v8 * v7;
    v5[0xFFFFFFFC] = v5[0xFFFFFFFC] * v7;
    v5[0xFFFFFFFD] = v5[0xFFFFFFFD] * v7;
  }
  while ( v6 );
  return 1;
}
