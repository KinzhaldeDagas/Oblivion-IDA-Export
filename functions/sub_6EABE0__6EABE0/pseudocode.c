char __thiscall sub_6EABE0(float *this, float a2, int a3, _DWORD *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6eabe3*/
  result = 0; /*0x6eabe6*/
  if ( v5 == 1 ) /*0x6eabeb*/
  {
    result = sub_6EA970((int)this, a2, a3, a4); /*0x6eac01*/
    *(this + 2) = a2; /*0x6eac0a*/
  }
  else
  {
    if ( v5 ) /*0x6eac13*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6eac17*/
      result = sub_6EAA10((int)this, a2, a3, a4); /*0x6eac30*/
    }
    *(this + 2) = a2; /*0x6eac39*/
  }
  return result; /*0x6eac0d*/
}
