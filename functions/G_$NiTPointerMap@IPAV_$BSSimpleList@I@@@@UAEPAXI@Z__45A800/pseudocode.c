unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>::~NiTPointerMap<unsigned int,BSSimpleList<unsigned int> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
