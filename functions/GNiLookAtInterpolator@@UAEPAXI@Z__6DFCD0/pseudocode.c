NiLookAtInterpolator *__thiscall NiLookAtInterpolator::`scalar deleting destructor'(
        NiLookAtInterpolator *this,
        char a2)
{
  NiLookAtInterpolator::~NiLookAtInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
