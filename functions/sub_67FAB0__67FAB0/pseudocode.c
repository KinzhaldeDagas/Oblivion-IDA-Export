unsigned int *__thiscall sub_67FAB0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`vftable'; /*0x67fab3*/
  NiTMap_Clear(this); /*0x67fab9*/
  FormHeapFree(*(this + 2)); /*0x67fac2*/
  if ( (a2 & 1) != 0 ) /*0x67facf*/
    FormHeapFree((unsigned int)this); /*0x67fad2*/
  return this; /*0x67fadc*/
}
