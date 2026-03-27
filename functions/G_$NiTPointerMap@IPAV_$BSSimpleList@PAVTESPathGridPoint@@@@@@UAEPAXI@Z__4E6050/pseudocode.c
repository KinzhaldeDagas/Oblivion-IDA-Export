unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
