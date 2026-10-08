unsigned int *__thiscall NiTPointerMap<unsigned int,void *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>(this); /*0x45a843*/
  if ( (a2 & 1) != 0 ) /*0x45a84d*/
    FormHeapFree((unsigned int)this); /*0x45a850*/
  return this; /*0x45a85a*/
}
