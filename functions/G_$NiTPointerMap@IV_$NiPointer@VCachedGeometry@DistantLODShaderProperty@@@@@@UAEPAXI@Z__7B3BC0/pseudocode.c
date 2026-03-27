unsigned int *__thiscall NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::~NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
