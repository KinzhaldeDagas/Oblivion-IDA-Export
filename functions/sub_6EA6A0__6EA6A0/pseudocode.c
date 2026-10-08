char __thiscall sub_6EA6A0(float *this, float a2, int a3, _DWORD *a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6ea6a3*/
  result = 0; /*0x6ea6a6*/
  if ( v5 == 1 ) /*0x6ea6ab*/
  {
    result = sub_6EA340((int)this, a2, a3, a4); /*0x6ea6c1*/
    *(this + 2) = a2; /*0x6ea6ca*/
  }
  else
  {
    if ( v5 ) /*0x6ea6d3*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6ea6d7*/
      result = sub_6EA430(this, a2, a3, a4); /*0x6ea6f0*/
    }
    *(this + 2) = a2; /*0x6ea6f9*/
  }
  return result; /*0x6ea6cd*/
}
