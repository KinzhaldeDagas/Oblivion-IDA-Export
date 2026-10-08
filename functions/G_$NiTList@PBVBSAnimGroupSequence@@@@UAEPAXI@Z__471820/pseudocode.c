NiTPointerList__BSImageSpaceShader *__thiscall NiTList<BSAnimGroupSequence const *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<BSAnimGroupSequence const *>::~NiTList<BSAnimGroupSequence const *>(this); /*0x471823*/
  if ( (a2 & 1) != 0 ) /*0x47182d*/
    FormHeapFree((unsigned int)this); /*0x471830*/
  return this; /*0x47183a*/
}
