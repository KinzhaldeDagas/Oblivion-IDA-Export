NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::CharData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(this); /*0x575743*/
  if ( (a2 & 1) != 0 ) /*0x57574d*/
    FormHeapFree((unsigned int)this); /*0x575750*/
  return this; /*0x57575a*/
}
