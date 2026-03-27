NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::TextPage *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
