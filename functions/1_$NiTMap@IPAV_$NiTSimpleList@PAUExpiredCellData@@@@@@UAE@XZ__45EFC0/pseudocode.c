void __thiscall NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::~NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable'; /*0x45efe8*/
  NiTMap_Clear(this); /*0x45eff6*/
  *this = (unsigned int)&NiTMapBase<DFALL<NiTSimpleList<ExpiredCellData *> *>,unsigned int,NiTSimpleList<ExpiredCellData *> *>::`vftable'; /*0x45f005*/
  NiTMap_Clear(this); /*0x45f00b*/
  FormHeapFree(*(this + 2)); /*0x45f014*/
}
