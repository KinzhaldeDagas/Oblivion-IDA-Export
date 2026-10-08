char __thiscall sub_6EB230(float *this, float a2, int a3, _DWORD *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6eb233*/
  result = 0; /*0x6eb236*/
  if ( v5 == 1 ) /*0x6eb23b*/
  {
    result = sub_6EAF50((int)this, a2, a3, a4); /*0x6eb251*/
    *(this + 2) = a2; /*0x6eb25a*/
  }
  else
  {
    if ( v5 ) /*0x6eb263*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6eb267*/
      result = sub_6EB000((int)this, a2, a3, a4); /*0x6eb280*/
    }
    *(this + 2) = a2; /*0x6eb289*/
  }
  return result; /*0x6eb25d*/
}
