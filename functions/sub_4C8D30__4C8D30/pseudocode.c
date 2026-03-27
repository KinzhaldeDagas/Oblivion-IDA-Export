void __thiscall sub_4C8D30(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
