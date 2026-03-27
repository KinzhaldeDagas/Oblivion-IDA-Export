unsigned int *__thiscall NiTPointerMap<char const *,XMLStorage *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,XMLStorage *>::~NiTPointerMap<char const *,XMLStorage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
