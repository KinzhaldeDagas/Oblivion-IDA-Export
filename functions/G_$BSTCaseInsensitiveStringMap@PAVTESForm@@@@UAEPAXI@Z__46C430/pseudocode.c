_DWORD *__thiscall BSTCaseInsensitiveStringMap<TESForm *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &BSTCaseInsensitiveStringMap<TESForm *>::`vftable';
  NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
