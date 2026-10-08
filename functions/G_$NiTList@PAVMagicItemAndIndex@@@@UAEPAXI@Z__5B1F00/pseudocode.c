NiTPointerList__BSImageSpaceShader *__thiscall NiTList<MagicItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<MagicItemAndIndex *>::~NiTList<MagicItemAndIndex *>(this); /*0x5b1f03*/
  if ( (a2 & 1) != 0 ) /*0x5b1f0d*/
    FormHeapFree((unsigned int)this); /*0x5b1f10*/
  return this; /*0x5b1f1a*/
}
