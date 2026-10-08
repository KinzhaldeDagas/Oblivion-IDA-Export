void __thiscall sub_45A580(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45a583*/
  NiTMap_Clear(this); /*0x45a589*/
  FormHeapFree(*(this + 2)); /*0x45a592*/
}
