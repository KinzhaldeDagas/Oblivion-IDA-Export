float *__thiscall sub_78E570(float *this, signed int a2)
{
  float *result; // eax
  signed int v3; // ecx

  result = this;
  v3 = a2;
  result[4] = 0.0;
  result[3] = 0.0;
  result[2] = 0.0;
  result[1] = 0.0;
  *result = 0.0;
  if ( a2 > 5 )
    v3 = 5;
  *((_DWORD *)result + 5) = v3;
  return result;
}
