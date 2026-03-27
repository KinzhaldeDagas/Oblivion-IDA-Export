void __thiscall NiTMap<NiSourceTexture *,unsigned int>::~NiTMap<NiSourceTexture *,unsigned int>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<NiSourceTexture *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
