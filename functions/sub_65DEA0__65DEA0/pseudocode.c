void __thiscall sub_65DEA0(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
