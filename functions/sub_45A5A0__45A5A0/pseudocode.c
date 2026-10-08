void __thiscall sub_45A5A0(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable'; /*0x45a5a3*/
  NiTMap_Clear(this); /*0x45a5a9*/
  FormHeapFree(*(this + 2)); /*0x45a5b2*/
}
