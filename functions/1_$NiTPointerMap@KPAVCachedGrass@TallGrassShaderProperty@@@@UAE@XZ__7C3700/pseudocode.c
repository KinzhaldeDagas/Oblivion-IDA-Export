void __thiscall NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::~NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
