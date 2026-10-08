unsigned int *__thiscall sub_520F70(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<IDLE_ANIM_ROOT *>,char const *,IDLE_ANIM_ROOT *>::`vftable'; /*0x520f73*/
  NiTMap_Clear(this); /*0x520f79*/
  FormHeapFree(*(this + 2)); /*0x520f82*/
  if ( (a2 & 1) != 0 ) /*0x520f8f*/
    FormHeapFree((unsigned int)this); /*0x520f92*/
  return this; /*0x520f9c*/
}
