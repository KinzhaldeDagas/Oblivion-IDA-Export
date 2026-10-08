_DWORD *__thiscall BSTCaseInsensitiveStringMap<Setting *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &BSTCaseInsensitiveStringMap<Setting *>::`vftable'; /*0x4a8153*/
  NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(this); /*0x4a8159*/
  if ( (a2 & 1) != 0 ) /*0x4a8163*/
    FormHeapFree((unsigned int)this); /*0x4a8166*/
  return this; /*0x4a8170*/
}
