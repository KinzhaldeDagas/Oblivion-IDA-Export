_DWORD *__thiscall BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  *this = &BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT *>::`vftable'; /*0x521593*/
  NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(this); /*0x521599*/
  if ( (a2 & 1) != 0 ) /*0x5215a3*/
    FormHeapFree((unsigned int)this); /*0x5215a6*/
  return this; /*0x5215b0*/
}
