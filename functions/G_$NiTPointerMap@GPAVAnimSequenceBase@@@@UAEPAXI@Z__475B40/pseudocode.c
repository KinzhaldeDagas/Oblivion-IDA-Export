unsigned int *__thiscall NiTPointerMap<unsigned short,AnimSequenceBase *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned short,AnimSequenceBase *>::~NiTPointerMap<unsigned short,AnimSequenceBase *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
