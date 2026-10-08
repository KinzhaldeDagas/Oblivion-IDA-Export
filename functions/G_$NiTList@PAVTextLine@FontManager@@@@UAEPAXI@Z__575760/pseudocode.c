NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::TextLine *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(this); /*0x575763*/
  if ( (a2 & 1) != 0 ) /*0x57576d*/
    FormHeapFree((unsigned int)this); /*0x575770*/
  return this; /*0x57577a*/
}
