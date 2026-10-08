unsigned int *__thiscall NiTMap<char const *,Setting *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(this); /*0x4a7f73*/
  if ( (a2 & 1) != 0 ) /*0x4a7f7d*/
    FormHeapFree((unsigned int)this); /*0x4a7f80*/
  return this; /*0x4a7f8a*/
}
