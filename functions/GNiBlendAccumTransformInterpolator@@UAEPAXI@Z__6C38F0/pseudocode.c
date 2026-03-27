NiBlendAccumTransformInterpolator *__thiscall NiBlendAccumTransformInterpolator::`scalar deleting destructor'(
        NiBlendAccumTransformInterpolator *this,
        char a2)
{
  NiBlendAccumTransformInterpolator::~NiBlendAccumTransformInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
