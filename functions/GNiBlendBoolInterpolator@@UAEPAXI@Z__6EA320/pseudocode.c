NiBlendBoolInterpolator *__thiscall NiBlendBoolInterpolator::`scalar deleting destructor'(
        NiBlendBoolInterpolator *this,
        char a2)
{
  NiBlendBoolInterpolator::~NiBlendBoolInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
