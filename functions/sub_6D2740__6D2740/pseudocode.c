char __thiscall sub_6D2740(float *this, float a2, int a3, float *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6d2743*/
  result = 0; /*0x6d2746*/
  if ( v5 == 1 ) /*0x6d274b*/
  {
    result = sub_6D2580((int)this, a2, a3, a4); /*0x6d2761*/
    *(this + 2) = a2; /*0x6d276a*/
  }
  else
  {
    if ( v5 ) /*0x6d2773*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6d2777*/
      result = sub_6D2600((int)this, a2, a3, a4); /*0x6d2790*/
    }
    *(this + 2) = a2; /*0x6d2799*/
  }
  return result; /*0x6d276d*/
}
