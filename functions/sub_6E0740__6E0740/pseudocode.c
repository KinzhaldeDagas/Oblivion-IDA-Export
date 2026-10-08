float *__thiscall sub_6E0740(_DWORD *this, float *a2)
{
  float *result; // eax
  double v3; // st7

  result = (float *)*(this + 0xC); /*0x6e0740*/
  if ( result ) /*0x6e0745*/
  {
    v3 = result[0x37]; /*0x6e0747*/
    *a2 = v3; /*0x6e0751*/
    return a2; /*0x6e074d*/
  }
  return result; /*0x6e0753*/
}
