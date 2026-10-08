unsigned int *__thiscall sub_45A5F0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable'; /*0x45a5f3*/
  NiTMap_Clear(this); /*0x45a5f9*/
  FormHeapFree(*(this + 2)); /*0x45a602*/
  if ( (a2 & 1) != 0 ) /*0x45a60f*/
    FormHeapFree((unsigned int)this); /*0x45a612*/
  return this; /*0x45a61c*/
}
