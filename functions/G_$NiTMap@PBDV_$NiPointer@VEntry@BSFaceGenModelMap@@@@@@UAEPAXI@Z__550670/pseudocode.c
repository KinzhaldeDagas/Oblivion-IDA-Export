unsigned int *__thiscall NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
