void **__thiscall ExtraLastFinishedSequence::`scalar deleting destructor'(void **this, char a2)
{
  ExtraLastFinishedSequence::~ExtraLastFinishedSequence(this); /*0x42af43*/
  if ( (a2 & 1) != 0 ) /*0x42af4d*/
    FormHeapFree((unsigned int)this); /*0x42af50*/
  return this; /*0x42af5a*/
}
