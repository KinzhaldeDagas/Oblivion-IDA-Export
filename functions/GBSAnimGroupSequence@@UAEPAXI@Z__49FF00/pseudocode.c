BSAnimGroupSequence *__thiscall BSAnimGroupSequence::`scalar deleting destructor'(BSAnimGroupSequence *this, char a2)
{
  BSAnimGroupSequence::~BSAnimGroupSequence(this); /*0x49ff03*/
  if ( (a2 & 1) != 0 ) /*0x49ff0d*/
    FormHeapFree((unsigned int)this); /*0x49ff10*/
  return this; /*0x49ff1a*/
}
