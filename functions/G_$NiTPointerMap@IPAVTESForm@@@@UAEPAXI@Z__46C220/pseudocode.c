unsigned int *__thiscall NiTPointerMap<unsigned int,TESForm *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESForm *>::~NiTPointerMap<unsigned int,TESForm *>(this); /*0x46c223*/
  if ( (a2 & 1) != 0 ) /*0x46c22d*/
    FormHeapFree((unsigned int)this); /*0x46c230*/
  return this; /*0x46c23a*/
}
