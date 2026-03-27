unsigned int *__thiscall NiTPointerMap<unsigned int,void *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTPointerMap<unsigned int,void *>::~NiTPointerMap<unsigned int,void *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
