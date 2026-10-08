void __thiscall NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::~NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'; /*0x7b38f8*/
  NiTMap_Clear(this); /*0x7b3906*/
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'; /*0x7b3915*/
  NiTMap_Clear(this); /*0x7b391b*/
  FormHeapFree(*(this + 2)); /*0x7b3924*/
}
