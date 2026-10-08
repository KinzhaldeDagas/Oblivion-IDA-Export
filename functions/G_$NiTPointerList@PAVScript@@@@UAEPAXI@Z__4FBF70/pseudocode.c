NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<Script *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<Script *>::~NiTPointerList<Script *>(this); /*0x4fbf73*/
  if ( (a2 & 1) != 0 ) /*0x4fbf7d*/
    FormHeapFree((unsigned int)this); /*0x4fbf80*/
  return this; /*0x4fbf8a*/
}
