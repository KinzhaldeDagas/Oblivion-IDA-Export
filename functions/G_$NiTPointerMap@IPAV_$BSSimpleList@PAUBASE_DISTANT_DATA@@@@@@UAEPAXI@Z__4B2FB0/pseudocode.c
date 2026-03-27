unsigned int *__thiscall NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>::~NiTPointerMap<unsigned int,BSSimpleList<BASE_DISTANT_DATA *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
