NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<BSTextureManager::RenderedTextureData *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>(this); /*0x7c1943*/
  if ( (a2 & 1) != 0 ) /*0x7c194d*/
    FormHeapFree((unsigned int)this); /*0x7c1950*/
  return this; /*0x7c195a*/
}
