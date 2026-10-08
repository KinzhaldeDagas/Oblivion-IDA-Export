NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSFaceGenKeyframe *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSFaceGenKeyframe *>::~NiTPointerList<BSFaceGenKeyframe *>(this); /*0x54bcc3*/
  if ( (a2 & 1) != 0 ) /*0x54bccd*/
    FormHeapFree((unsigned int)this); /*0x54bcd0*/
  return this; /*0x54bcda*/
}
