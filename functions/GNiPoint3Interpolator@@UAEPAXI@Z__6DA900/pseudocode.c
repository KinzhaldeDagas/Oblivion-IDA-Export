NiPoint3Interpolator *__thiscall NiPoint3Interpolator::`scalar deleting destructor'(
        NiPoint3Interpolator *this,
        char a2)
{
  NiPoint3Interpolator::~NiPoint3Interpolator(this); /*0x6da903*/
  if ( (a2 & 1) != 0 ) /*0x6da90d*/
    FormHeapFree((unsigned int)this); /*0x6da910*/
  return this; /*0x6da91a*/
}
