void __thiscall sub_64AC60(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<LowProcess *,LP_LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
