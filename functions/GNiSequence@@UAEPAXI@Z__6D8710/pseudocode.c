NiSequence *__thiscall NiSequence::`scalar deleting destructor'(NiSequence *this, char a2)
{
  NiSequence::~NiSequence(this); /*0x6d8713*/
  if ( (a2 & 1) != 0 ) /*0x6d871d*/
    FormHeapFree((unsigned int)this); /*0x6d8720*/
  return this; /*0x6d872a*/
}
