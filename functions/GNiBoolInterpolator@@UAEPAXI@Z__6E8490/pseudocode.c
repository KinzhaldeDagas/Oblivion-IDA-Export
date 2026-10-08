NiBoolInterpolator *__thiscall NiBoolInterpolator::`scalar deleting destructor'(NiBoolInterpolator *this, char a2)
{
  NiBoolInterpolator::~NiBoolInterpolator(this); /*0x6e8493*/
  if ( (a2 & 1) != 0 ) /*0x6e849d*/
    FormHeapFree((unsigned int)this); /*0x6e84a0*/
  return this; /*0x6e84aa*/
}
