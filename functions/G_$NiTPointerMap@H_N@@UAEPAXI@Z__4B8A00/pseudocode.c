unsigned int *__thiscall NiTPointerMap<int,bool>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(this); /*0x4b8a03*/
  if ( (a2 & 1) != 0 ) /*0x4b8a0d*/
    FormHeapFree((unsigned int)this); /*0x4b8a10*/
  return this; /*0x4b8a1a*/
}
