NiTransformInterpolator *__thiscall NiTransformInterpolator::`scalar deleting destructor'(
        NiTransformInterpolator *this,
        char a2)
{
  NiTransformInterpolator::~NiTransformInterpolator(this); /*0x6d68d3*/
  if ( (a2 & 1) != 0 ) /*0x6d68dd*/
    FormHeapFree((unsigned int)this); /*0x6d68e0*/
  return this; /*0x6d68ea*/
}
