// NiBlendTransformInterpolator virtual transform update (+0x4C). Dispatches by active blend-item count +0x0E: one item takes the single-item fast path, multiple items normalize/prepare blend state and evaluate the weighted transform path, and zero items fail. Caches the requested time at +0x08.
char __thiscall NiBlendTransformInterpolator_Update(float *this, float a2, int a3, int a4)
{
  char v5; // cl
  char result; // al

  v5 = *((_BYTE *)this + 0xE); /*0x6cc3a3*/
  result = 0; /*0x6cc3a6*/
  if ( v5 == 1 ) /*0x6cc3ab*/
  {
    result = NiBlendTransformInterpolator_UpdateSingle((int)this, a2, a3, a4); /*0x6cc3c1*/
    *(this + 2) = a2; /*0x6cc3ca*/
  }
  else
  {
    if ( v5 ) /*0x6cc3d3*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6cc3d7*/
      result = NiBlendTransformInterpolator_UpdateMultiple(this, a2, a3, a4); /*0x6cc3f0*/
    }
    *(this + 2) = a2; /*0x6cc3f9*/
  }
  return result; /*0x6cc3cd*/
}
