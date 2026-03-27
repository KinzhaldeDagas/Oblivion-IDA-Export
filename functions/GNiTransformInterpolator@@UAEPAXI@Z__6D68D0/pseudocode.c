NiTransformInterpolator *__thiscall NiTransformInterpolator::`scalar deleting destructor'(
        NiTransformInterpolator *this,
        char a2)
{
  NiTransformInterpolator::~NiTransformInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
