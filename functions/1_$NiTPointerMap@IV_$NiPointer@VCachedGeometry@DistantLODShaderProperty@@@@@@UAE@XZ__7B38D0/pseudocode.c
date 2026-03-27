void __thiscall NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::~NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
