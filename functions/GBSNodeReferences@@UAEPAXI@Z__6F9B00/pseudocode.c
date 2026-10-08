BSNodeReferences *__thiscall BSNodeReferences::`scalar deleting destructor'(BSNodeReferences *this, char a2)
{
  BSNodeReferences::~BSNodeReferences(this); /*0x6f9b03*/
  if ( (a2 & 1) != 0 ) /*0x6f9b0d*/
    FormHeapFree((unsigned int)this); /*0x6f9b10*/
  return this; /*0x6f9b1a*/
}
