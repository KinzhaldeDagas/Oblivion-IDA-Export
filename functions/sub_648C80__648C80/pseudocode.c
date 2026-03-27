unsigned int *__thiscall sub_648C80(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<LP_LOCK_DATA>,LowProcess *,LP_LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
