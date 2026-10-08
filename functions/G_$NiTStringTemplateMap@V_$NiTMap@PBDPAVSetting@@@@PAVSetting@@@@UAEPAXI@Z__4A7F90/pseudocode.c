_DWORD *__thiscall NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>::~NiTStringTemplateMap<NiTMap<char const *,Setting *>,Setting *>(this); /*0x4a7f93*/
  if ( (a2 & 1) != 0 ) /*0x4a7f9d*/
    FormHeapFree((unsigned int)this); /*0x4a7fa0*/
  return this; /*0x4a7faa*/
}
