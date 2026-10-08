unsigned int *__thiscall sub_4A7E30(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<Setting *>,char const *,Setting *>::`vftable'; /*0x4a7e33*/
  NiTMap_Clear(this); /*0x4a7e39*/
  FormHeapFree(*(this + 2)); /*0x4a7e42*/
  if ( (a2 & 1) != 0 ) /*0x4a7e4f*/
    FormHeapFree((unsigned int)this); /*0x4a7e52*/
  return this; /*0x4a7e5c*/
}
