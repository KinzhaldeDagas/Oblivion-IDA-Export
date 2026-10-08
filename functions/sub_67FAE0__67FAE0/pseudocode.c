unsigned int *__thiscall sub_67FAE0(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable'; /*0x67fae3*/
  NiTMap_Clear(this); /*0x67fae9*/
  FormHeapFree(*(this + 2)); /*0x67faf2*/
  if ( (a2 & 1) != 0 ) /*0x67faff*/
    FormHeapFree((unsigned int)this); /*0x67fb02*/
  return this; /*0x67fb0c*/
}
