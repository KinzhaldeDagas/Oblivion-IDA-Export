_DWORD *__thiscall NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(this); /*0x550693*/
  if ( (a2 & 1) != 0 ) /*0x55069d*/
    FormHeapFree((unsigned int)this); /*0x5506a0*/
  return this; /*0x5506aa*/
}
