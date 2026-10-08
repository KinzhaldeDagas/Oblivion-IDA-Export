unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>::~NiTPointerMap<unsigned int,BSSimpleList<TESConnectedPoint *> *>(this); /*0x4e8f83*/
  if ( (a2 & 1) != 0 ) /*0x4e8f8d*/
    FormHeapFree((unsigned int)this); /*0x4e8f90*/
  return this; /*0x4e8f9a*/
}
