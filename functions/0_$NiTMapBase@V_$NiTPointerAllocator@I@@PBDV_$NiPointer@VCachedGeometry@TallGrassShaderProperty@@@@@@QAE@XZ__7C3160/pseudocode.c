unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<TallGrassShaderProperty::CachedGeometry>>::`vftable'; /*0x7c3163*/
  NiTMap_Clear(this); /*0x7c3169*/
  FormHeapFree(*(this + 2)); /*0x7c3172*/
  if ( (a2 & 1) != 0 ) /*0x7c317f*/
    FormHeapFree((unsigned int)this); /*0x7c3182*/
  return this; /*0x7c318c*/
}
