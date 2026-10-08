void __thiscall NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::~NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'; /*0x7b3888*/
  NiTMap_Clear(this); /*0x7b3896*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'; /*0x7b38a5*/
  NiTMap_Clear(this); /*0x7b38ab*/
  FormHeapFree(*(this + 2)); /*0x7b38b4*/
}
