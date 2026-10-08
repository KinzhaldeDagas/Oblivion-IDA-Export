unsigned int *__thiscall NiTPointerMap<unsigned int,float>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<unsigned int,float>::~NiTPointerMap<unsigned int,float>(this); /*0x72ef73*/
  if ( (a2 & 1) != 0 ) /*0x72ef7d*/
    FormHeapFree((unsigned int)this); /*0x72ef80*/
  return this; /*0x72ef8a*/
}
