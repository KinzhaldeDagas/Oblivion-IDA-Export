void __thiscall sub_65DEA0(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable'; /*0x65dea3*/
  NiTMap_Clear(this); /*0x65dea9*/
  FormHeapFree(*(this + 2)); /*0x65deb2*/
}
