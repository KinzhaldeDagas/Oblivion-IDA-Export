float *__thiscall sub_6E0740(_DWORD *this, float *a2)
{
  float *result; // eax
  double v3; // st7

  result = (float *)*(this + 0xC);
  if ( result )
  {
    v3 = result[0x37];
    *a2 = v3;
    return a2;
  }
  return result;
}
