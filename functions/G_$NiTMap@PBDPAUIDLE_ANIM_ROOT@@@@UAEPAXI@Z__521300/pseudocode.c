unsigned int *__thiscall NiTMap<char const *,IDLE_ANIM_ROOT *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(this); /*0x521303*/
  if ( (a2 & 1) != 0 ) /*0x52130d*/
    FormHeapFree((unsigned int)this); /*0x521310*/
  return this; /*0x52131a*/
}
