unsigned int *__thiscall NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::~NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>(this); /*0x7c4b13*/
  if ( (a2 & 1) != 0 ) /*0x7c4b1d*/
    FormHeapFree((unsigned int)this); /*0x7c4b20*/
  return this; /*0x7c4b2a*/
}
