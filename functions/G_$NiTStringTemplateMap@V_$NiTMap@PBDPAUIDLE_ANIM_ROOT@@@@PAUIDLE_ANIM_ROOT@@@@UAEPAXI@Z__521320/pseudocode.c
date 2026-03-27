_DWORD *__thiscall NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>::~NiTStringTemplateMap<NiTMap<char const *,IDLE_ANIM_ROOT *>,IDLE_ANIM_ROOT *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
