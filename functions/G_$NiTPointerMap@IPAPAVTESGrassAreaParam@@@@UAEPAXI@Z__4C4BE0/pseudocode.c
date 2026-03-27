unsigned int *__thiscall NiTPointerMap<unsigned int,TESGrassAreaParam * *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
