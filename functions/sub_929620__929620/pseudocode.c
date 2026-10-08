_OWORD *__thiscall sub_929620(int this, int a2, int a3)
{
  _OWORD *result; // eax
  double v4; // st7

  result = (_OWORD *)a3; /*0x929620*/
  if ( a3 ) /*0x929626*/
  {
    v4 = *(float *)(this + 0x34); /*0x929628*/
    *(_WORD *)(a3 + 6) = 1; /*0x92962b*/
    *(float *)(a3 + 0xC) = v4; /*0x929631*/
    *(_DWORD *)(a3 + 8) = 0; /*0x929634*/
    *(_DWORD *)a3 = &hkTriangleShape::`vftable'; /*0x92963b*/
  }
  else
  {
    result = 0; /*0x929643*/
  }
  result[1] = *(_OWORD *)(0x10 * *(_DWORD *)(0xC * a2 + *(_DWORD *)(this + 0x1C)) + *(_DWORD *)(this + 0x10)); /*0x929663*/
  result[2] = *(_OWORD *)(0x10 * *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0xC * a2 + 4) + *(_DWORD *)(this + 0x10)); /*0x92967a*/
  result[3] = *(_OWORD *)(0x10 * *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0xC * a2 + 8) + *(_DWORD *)(this + 0x10)); /*0x929692*/
  return result; /*0x929697*/
}
