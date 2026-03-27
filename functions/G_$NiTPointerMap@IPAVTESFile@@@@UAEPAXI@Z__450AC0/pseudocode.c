unsigned int *__thiscall NiTPointerMap<unsigned int,TESFile *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESFile *>::~NiTPointerMap<unsigned int,TESFile *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
