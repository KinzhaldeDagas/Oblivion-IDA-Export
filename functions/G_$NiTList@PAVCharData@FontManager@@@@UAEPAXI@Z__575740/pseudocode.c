NiTPointerList__BSImageSpaceShader *__thiscall NiTList<FontManager::CharData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
