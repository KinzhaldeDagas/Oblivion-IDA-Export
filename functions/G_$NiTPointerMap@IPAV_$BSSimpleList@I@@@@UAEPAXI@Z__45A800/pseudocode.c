unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::~NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>(this); /*0x45a803*/
  if ( (a2 & 1) != 0 ) /*0x45a80d*/
    FormHeapFree((unsigned int)this); /*0x45a810*/
  return this; /*0x45a81a*/
}
