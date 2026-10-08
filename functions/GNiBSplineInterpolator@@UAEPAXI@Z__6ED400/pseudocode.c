NiBSplineInterpolator *__thiscall NiBSplineInterpolator::`scalar deleting destructor'(
        NiBSplineInterpolator *this,
        char a2)
{
  NiBSplineInterpolator::~NiBSplineInterpolator(this); /*0x6ed403*/
  if ( (a2 & 1) != 0 ) /*0x6ed40d*/
    FormHeapFree((unsigned int)this); /*0x6ed410*/
  return this; /*0x6ed41a*/
}
