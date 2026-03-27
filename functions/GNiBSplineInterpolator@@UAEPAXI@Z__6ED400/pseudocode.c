NiBSplineInterpolator *__thiscall NiBSplineInterpolator::`scalar deleting destructor'(
        NiBSplineInterpolator *this,
        char a2)
{
  NiBSplineInterpolator::~NiBSplineInterpolator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
