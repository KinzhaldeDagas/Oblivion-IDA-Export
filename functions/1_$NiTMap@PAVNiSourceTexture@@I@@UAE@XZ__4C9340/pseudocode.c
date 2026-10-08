void __thiscall NiTMap<NiSourceTexture *,unsigned int>::~NiTMap<NiSourceTexture *,unsigned int>(unsigned int *this)
{
  *this = (unsigned int)&NiTMap<NiSourceTexture *,unsigned int>::`vftable'; /*0x4c9368*/
  NiTMap_Clear(this); /*0x4c9376*/
  *this = (unsigned int)&NiTMapBase<DFALL<unsigned int>,NiSourceTexture *,unsigned int>::`vftable'; /*0x4c9385*/
  NiTMap_Clear(this); /*0x4c938b*/
  FormHeapFree(*(this + 2)); /*0x4c9394*/
}
