NiLookAtInterpolator *__thiscall NiLookAtInterpolator::`scalar deleting destructor'(
        NiLookAtInterpolator *this,
        char a2)
{
  NiLookAtInterpolator::~NiLookAtInterpolator(this); /*0x6dfcd3*/
  if ( (a2 & 1) != 0 ) /*0x6dfcdd*/
    FormHeapFree((unsigned int)this); /*0x6dfce0*/
  return this; /*0x6dfcea*/
}
