unsigned int *__thiscall NiTMap<char const *,IDLE_ANIM_ROOT *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
