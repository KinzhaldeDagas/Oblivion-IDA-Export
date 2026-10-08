unsigned int *__thiscall NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>::~NiTPointerMap<unsigned int,DistantLODShaderProperty::CachedDistantLOD *>(this); /*0x7b3ba3*/
  if ( (a2 & 1) != 0 ) /*0x7b3bad*/
    FormHeapFree((unsigned int)this); /*0x7b3bb0*/
  return this; /*0x7b3bba*/
}
