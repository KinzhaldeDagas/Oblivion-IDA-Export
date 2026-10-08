unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned long,TallGrassShaderProperty::CachedGrass *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned long,TallGrassShaderProperty::CachedGrass *>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned long,TallGrassShaderProperty::CachedGrass *>::`vftable'; /*0x7c3133*/
  NiTMap_Clear(this); /*0x7c3139*/
  FormHeapFree(*(this + 2)); /*0x7c3142*/
  if ( (a2 & 1) != 0 ) /*0x7c314f*/
    FormHeapFree((unsigned int)this); /*0x7c3152*/
  return this; /*0x7c315c*/
}
