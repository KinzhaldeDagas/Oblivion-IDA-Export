float *__thiscall sub_787070(_DWORD *this, float a2, float a3, float a4)
{
  float *result; // eax

  result = (float *)*(this + 0xD);
  if ( result )
  {
    result[1] = a2;
    result[2] = a3;
    result[3] = a4;
  }
  else
  {
    result = (float *)(*this + 4);
    *result = a2;
    result[1] = a3;
    result[2] = a4;
  }
  return result;
}
