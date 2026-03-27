_DWORD *__thiscall BSTCaseInsensitiveStringMap<Setting *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &BSTCaseInsensitiveStringMap<Setting *>::`vftable';
  NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
