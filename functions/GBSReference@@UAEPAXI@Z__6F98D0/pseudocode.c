BSReference *__thiscall BSReference::`scalar deleting destructor'(BSReference *this, char a2)
{
  BSReference::~BSReference(this); /*0x6f98d3*/
  if ( (a2 & 1) != 0 ) /*0x6f98dd*/
    FormHeapFree((unsigned int)this); /*0x6f98e0*/
  return this; /*0x6f98ea*/
}
