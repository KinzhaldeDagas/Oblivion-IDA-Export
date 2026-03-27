unsigned int *__thiscall NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::~NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
