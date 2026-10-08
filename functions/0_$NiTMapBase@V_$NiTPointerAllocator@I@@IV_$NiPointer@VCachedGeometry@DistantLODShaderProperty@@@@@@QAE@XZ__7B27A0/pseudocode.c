unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`vftable'; /*0x7b27a3*/
  NiTMap_Clear(this); /*0x7b27a9*/
  FormHeapFree(*(this + 2)); /*0x7b27b2*/
  if ( (a2 & 1) != 0 ) /*0x7b27bf*/
    FormHeapFree((unsigned int)this); /*0x7b27c2*/
  return this; /*0x7b27cc*/
}
