AnimSequenceSingle *__thiscall AnimSequenceSingle::`scalar deleting destructor'(AnimSequenceSingle *this, char a2)
{
  AnimSequenceSingle::~AnimSequenceSingle(this); /*0x473d73*/
  if ( (a2 & 1) != 0 ) /*0x473d7d*/
    FormHeapFree((unsigned int)this); /*0x473d80*/
  return this; /*0x473d8a*/
}
