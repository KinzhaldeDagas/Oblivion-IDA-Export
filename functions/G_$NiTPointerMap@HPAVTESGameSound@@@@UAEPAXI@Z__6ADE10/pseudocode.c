unsigned int *__thiscall NiTPointerMap<int,TESGameSound *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<int,TESGameSound *>::~NiTPointerMap<int,TESGameSound *>(this); /*0x6ade13*/
  if ( (a2 & 1) != 0 ) /*0x6ade1d*/
    FormHeapFree((unsigned int)this); /*0x6ade20*/
  return this; /*0x6ade2a*/
}
