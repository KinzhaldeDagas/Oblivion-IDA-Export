_DWORD *__thiscall BSTCaseInsensitiveStringMap<TESForm *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &BSTCaseInsensitiveStringMap<TESForm *>::`vftable'; /*0x46c433*/
  NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(this); /*0x46c439*/
  if ( (a2 & 1) != 0 ) /*0x46c443*/
    FormHeapFree((unsigned int)this); /*0x46c446*/
  return this; /*0x46c450*/
}
