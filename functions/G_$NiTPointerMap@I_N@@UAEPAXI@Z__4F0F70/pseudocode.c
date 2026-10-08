unsigned int *__thiscall NiTPointerMap<unsigned int,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<unsigned int,bool>::~NiTPointerMap<unsigned int,bool>(this); /*0x4f0f73*/
  if ( (a2 & 1) != 0 ) /*0x4f0f7d*/
    FormHeapFree((unsigned int)this); /*0x4f0f80*/
  return this; /*0x4f0f8a*/
}
