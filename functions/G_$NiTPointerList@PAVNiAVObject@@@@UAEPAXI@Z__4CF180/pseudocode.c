NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiAVObject *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiAVObject *>::~NiTPointerList<NiAVObject *>(this); /*0x4cf183*/
  if ( (a2 & 1) != 0 ) /*0x4cf18d*/
    FormHeapFree((unsigned int)this); /*0x4cf190*/
  return this; /*0x4cf19a*/
}
