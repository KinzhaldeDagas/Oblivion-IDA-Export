unsigned int *__thiscall NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,DistantLODShaderProperty::CachedDistantLOD *>(
        unsigned int *this,
        char a2)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`vftable'; /*0x7b2773*/
  NiTMap_Clear(this); /*0x7b2779*/
  FormHeapFree(*(this + 2)); /*0x7b2782*/
  if ( (a2 & 1) != 0 ) /*0x7b278f*/
    FormHeapFree((unsigned int)this); /*0x7b2792*/
  return this; /*0x7b279c*/
}
