void __thiscall NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::~NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
