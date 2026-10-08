_DWORD *__thiscall BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`scalar deleting destructor'(
        _DWORD *this,
        char a2)
{
  *this = &BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x551373*/
  NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>::~NiTStringTemplateMap<NiTMap<char const *,NiPointer<BSFaceGenModelMap::Entry>>,NiPointer<BSFaceGenModelMap::Entry>>(this); /*0x551379*/
  if ( (a2 & 1) != 0 ) /*0x551383*/
    FormHeapFree((unsigned int)this); /*0x551386*/
  return this; /*0x551390*/
}
