NiBlendAccumTransformInterpolator *__thiscall NiBlendAccumTransformInterpolator::`scalar deleting destructor'(
        NiBlendAccumTransformInterpolator *this,
        char a2)
{
  NiBlendAccumTransformInterpolator::~NiBlendAccumTransformInterpolator(this); /*0x6c38f3*/
  if ( (a2 & 1) != 0 ) /*0x6c38fd*/
    FormHeapFree((unsigned int)this); /*0x6c3900*/
  return this; /*0x6c390a*/
}
