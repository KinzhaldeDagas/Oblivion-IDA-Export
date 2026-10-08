_DWORD *__thiscall NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(this); /*0x521323*/
  if ( (a2 & 1) != 0 ) /*0x52132d*/
    FormHeapFree((unsigned int)this); /*0x521330*/
  return this; /*0x52133a*/
}
