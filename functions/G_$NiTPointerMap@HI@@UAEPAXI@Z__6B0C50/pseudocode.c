unsigned int *__thiscall NiTPointerMap<int,unsigned int>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,unsigned int>::~NiTPointerMap<int,unsigned int>(this); /*0x6b0c53*/
  if ( (a2 & 1) != 0 ) /*0x6b0c5d*/
    FormHeapFree((unsigned int)this); /*0x6b0c60*/
  return this; /*0x6b0c6a*/
}
