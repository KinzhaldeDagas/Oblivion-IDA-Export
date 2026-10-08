AnimSequenceMultiple *__thiscall AnimSequenceMultiple::`scalar deleting destructor'(
        AnimSequenceMultiple *this,
        char a2)
{
  AnimSequenceMultiple::~AnimSequenceMultiple(this); /*0x473e33*/
  if ( (a2 & 1) != 0 ) /*0x473e3d*/
    FormHeapFree((unsigned int)this); /*0x473e40*/
  return this; /*0x473e4a*/
}
