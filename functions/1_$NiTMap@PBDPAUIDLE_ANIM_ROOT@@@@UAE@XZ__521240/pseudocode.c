void __thiscall NiTMap<char const *,IDLE_ANIM_ROOT *>::~NiTMap<char const *,IDLE_ANIM_ROOT *>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<char const *,IDLE_ANIM_ROOT *>::`vftable'; /*0x521268*/
  NiTMap_Clear(this); /*0x521276*/
  *this = (unsigned int)&NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'; /*0x521285*/
  NiTMap_Clear(this); /*0x52128b*/
  FormHeapFree(*(this + 2)); /*0x521294*/
}
