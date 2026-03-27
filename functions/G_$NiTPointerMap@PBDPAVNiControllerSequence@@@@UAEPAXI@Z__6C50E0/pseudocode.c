unsigned int *__thiscall NiTPointerMap<char const *,NiControllerSequence *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiControllerSequence *>::~NiTPointerMap<char const *,NiControllerSequence *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
