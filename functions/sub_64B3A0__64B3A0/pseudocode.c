_OWORD *__thiscall sub_64B3A0(_DWORD *this, float *arg0)
{
  _OWORD *result; // eax
  double v3; // rt0
  hkVector4 a2; // [esp+0h] [ebp-20h] BYREF

  result = this;
  if ( this )
  {
    result = (_OWORD *)*(this + 2);
    if ( result )
    {
      v3 = hkFactor;
      a2.x = *arg0 * v3;
      a2.y = arg0[1] * v3;
      a2.z = v3 * arg0[2];
      return sub_8AC0B0(result, &a2);
    }
  }
  return result;
}
