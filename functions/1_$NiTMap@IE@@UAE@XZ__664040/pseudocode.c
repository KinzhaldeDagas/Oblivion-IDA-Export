void __thiscall NiTMap<unsigned int,unsigned char>::~NiTMap<unsigned int,unsigned char>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<unsigned int,unsigned char>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
