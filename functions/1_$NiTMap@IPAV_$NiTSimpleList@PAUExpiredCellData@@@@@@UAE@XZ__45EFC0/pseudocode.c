void __thiscall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
