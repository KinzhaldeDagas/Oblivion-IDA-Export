unsigned int *__thiscall sub_54F810(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x54f813*/
  NiTMap_Clear(this); /*0x54f819*/
  FormHeapFree(*(this + 2)); /*0x54f822*/
  if ( (a2 & 1) != 0 ) /*0x54f82f*/
    FormHeapFree((unsigned int)this); /*0x54f832*/
  return this; /*0x54f83c*/
}
