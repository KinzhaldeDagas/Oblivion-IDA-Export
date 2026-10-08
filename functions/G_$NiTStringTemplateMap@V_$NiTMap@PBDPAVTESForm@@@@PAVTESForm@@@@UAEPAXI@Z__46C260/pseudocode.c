_DWORD *__thiscall NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>::~NiTStringTemplateMap<NiTMap<char const *,TESForm *>,TESForm *>(this); /*0x46c263*/
  if ( (a2 & 1) != 0 ) /*0x46c26d*/
    FormHeapFree((unsigned int)this); /*0x46c270*/
  return this; /*0x46c27a*/
}
