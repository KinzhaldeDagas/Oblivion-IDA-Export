NiControllerSequence *__thiscall NiControllerSequence::`scalar deleting destructor'(
        NiControllerSequence *this,
        char a2)
{
  NiControllerSequence::~NiControllerSequence(this); /*0x6cb093*/
  if ( (a2 & 1) != 0 ) /*0x6cb09d*/
    FormHeapFree((unsigned int)this); /*0x6cb0a0*/
  return this; /*0x6cb0aa*/
}
