void __thiscall sub_45A5A0(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
