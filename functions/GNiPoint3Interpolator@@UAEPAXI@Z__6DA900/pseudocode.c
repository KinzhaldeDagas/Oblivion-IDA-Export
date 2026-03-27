NiPoint3Interpolator *__thiscall NiPoint3Interpolator::`scalar deleting destructor'(
        NiPoint3Interpolator *this,
        char a2)
{
  NiPoint3Interpolator::~NiPoint3Interpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
