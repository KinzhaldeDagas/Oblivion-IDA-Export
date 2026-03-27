float *__thiscall sub_7103C0(float *this, float *a2)
{
  bool v2; // zf
  float *result; // eax

  v2 = sub_7102B0(this, a2) == 0;
  result = a2;
  if ( v2 )
  {
    *a2 = 0.0;
    a2[3] = 0.0;
    a2[6] = 0.0;
    a2[1] = 0.0;
    a2[4] = 0.0;
    a2[7] = 0.0;
    a2[2] = 0.0;
    a2[5] = 0.0;
    a2[8] = 0.0;
  }
  return result;
}
