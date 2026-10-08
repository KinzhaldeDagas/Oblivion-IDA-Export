NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::TextPage *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(this); /*0x575783*/
  if ( (a2 & 1) != 0 ) /*0x57578d*/
    FormHeapFree((unsigned int)this); /*0x575790*/
  return this; /*0x57579a*/
}
