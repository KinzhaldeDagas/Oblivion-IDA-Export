unsigned int *__thiscall NiTPointerMap<unsigned int,TESTextureList *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESTextureList *>::~NiTPointerMap<unsigned int,TESTextureList *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
