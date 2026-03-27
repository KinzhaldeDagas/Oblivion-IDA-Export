unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
