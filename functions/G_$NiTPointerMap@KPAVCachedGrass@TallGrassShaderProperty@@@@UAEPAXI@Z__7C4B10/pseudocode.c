unsigned int *__thiscall NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>::~NiTPointerMap<unsigned long,TallGrassShaderProperty::CachedGrass *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
