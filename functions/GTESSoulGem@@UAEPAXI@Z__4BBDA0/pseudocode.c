TESSoulGem *__thiscall TESSoulGem::`scalar deleting destructor'(TESSoulGem *this, char a2)
{
  TESSoulGem::~TESSoulGem(this); /*0x4bbda3*/
  if ( (a2 & 1) != 0 ) /*0x4bbdad*/
    FormHeapFree((unsigned int)this); /*0x4bbdb0*/
  return this; /*0x4bbdba*/
}
