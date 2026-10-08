unsigned int *__thiscall NiTMap<char const *,TESForm *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(this); /*0x46c243*/
  if ( (a2 & 1) != 0 ) /*0x46c24d*/
    FormHeapFree((unsigned int)this); /*0x46c250*/
  return this; /*0x46c25a*/
}
