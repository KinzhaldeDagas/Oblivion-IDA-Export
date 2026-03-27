unsigned int *__thiscall NiTPointerMap<char const *,NiAVObject *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiAVObject *>::~NiTPointerMap<char const *,NiAVObject *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
