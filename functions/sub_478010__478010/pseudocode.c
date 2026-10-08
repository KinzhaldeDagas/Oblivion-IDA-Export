unsigned int *__thiscall sub_478010(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,NiObject *,NiObject *>::`vftable'; /*0x478013*/
  NiTMap_Clear(this); /*0x478019*/
  FormHeapFree(*(this + 2)); /*0x478022*/
  if ( (a2 & 1) != 0 ) /*0x47802f*/
    FormHeapFree((unsigned int)this); /*0x478032*/
  return this; /*0x47803c*/
}
