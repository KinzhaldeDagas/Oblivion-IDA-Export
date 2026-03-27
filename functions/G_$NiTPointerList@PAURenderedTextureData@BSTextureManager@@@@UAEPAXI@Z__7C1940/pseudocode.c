NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSTextureManager::RenderedTextureData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
