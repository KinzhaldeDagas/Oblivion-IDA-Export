unsigned int *__thiscall NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>::~NiTPointerMap<unsigned int,NiPointer<DistantLODShaderProperty::CachedGeometry>>(this); /*0x7b3bc3*/
  if ( (a2 & 1) != 0 ) /*0x7b3bcd*/
    FormHeapFree((unsigned int)this); /*0x7b3bd0*/
  return this; /*0x7b3bda*/
}
