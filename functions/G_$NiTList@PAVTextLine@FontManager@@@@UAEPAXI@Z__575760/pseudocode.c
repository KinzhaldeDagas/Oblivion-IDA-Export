NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::TextLine *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
