void __thiscall NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::~NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable'; /*0x7c3728*/
  NiTMap_Clear(this); /*0x7c3736*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable'; /*0x7c3745*/
  NiTMap_Clear(this); /*0x7c374b*/
  FormHeapFree(*(this + 2)); /*0x7c3754*/
}
