unsigned int *__thiscall NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>::~NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>(this); /*0x550673*/
  if ( (a2 & 1) != 0 ) /*0x55067d*/
    FormHeapFree((unsigned int)this); /*0x550680*/
  return this; /*0x55068a*/
}
