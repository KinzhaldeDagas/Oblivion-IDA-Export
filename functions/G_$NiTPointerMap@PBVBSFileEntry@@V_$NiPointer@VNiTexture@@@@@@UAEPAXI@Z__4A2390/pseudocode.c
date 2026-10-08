unsigned int *__thiscall NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::~NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(this); /*0x4a2393*/
  if ( (a2 & 1) != 0 ) /*0x4a239d*/
    FormHeapFree((unsigned int)this); /*0x4a23a0*/
  return this; /*0x4a23aa*/
}
