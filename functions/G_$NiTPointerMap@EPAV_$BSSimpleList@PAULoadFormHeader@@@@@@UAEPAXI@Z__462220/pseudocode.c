unsigned int *__thiscall NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::~NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(this); /*0x462223*/
  if ( (a2 & 1) != 0 ) /*0x46222d*/
    FormHeapFree((unsigned int)this); /*0x462230*/
  return this; /*0x46223a*/
}
