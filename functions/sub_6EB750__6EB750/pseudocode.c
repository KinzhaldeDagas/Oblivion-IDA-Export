char __thiscall sub_6EB750(float *this, float a2, int a3, _BYTE *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6eb753*/
  result = 0; /*0x6eb756*/
  if ( v5 == 1 ) /*0x6eb75b*/
  {
    result = sub_6EB570((int)this, a2, a3, a4); /*0x6eb771*/
    *(this + 2) = a2; /*0x6eb77a*/
  }
  else
  {
    if ( v5 ) /*0x6eb783*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6eb787*/
      result = sub_6EB5E0(this, a2, a3, a4); /*0x6eb7a0*/
    }
    *(this + 2) = a2; /*0x6eb7a9*/
  }
  return result; /*0x6eb77d*/
}
