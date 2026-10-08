unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESPathGridPoint *> *>(this); /*0x4e6053*/
  if ( (a2 & 1) != 0 ) /*0x4e605d*/
    FormHeapFree((unsigned int)this); /*0x4e6060*/
  return this; /*0x4e606a*/
}
