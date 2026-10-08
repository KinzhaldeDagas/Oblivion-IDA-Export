NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiNode *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(this); /*0x708d83*/
  if ( (a2 & 1) != 0 ) /*0x708d8d*/
    FormHeapFree((unsigned int)this); /*0x708d90*/
  return this; /*0x708d9a*/
}
