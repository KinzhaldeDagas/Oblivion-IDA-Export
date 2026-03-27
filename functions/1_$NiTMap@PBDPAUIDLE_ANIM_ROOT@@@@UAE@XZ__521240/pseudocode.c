void __thiscall NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,IDLE_ANIM_ROOT *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
