_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::`vftable'; /*0x7c1328*/
  if ( (a2 & 1) != 0 ) /*0x7c132e*/
    FormHeapFree((unsigned int)this); /*0x7c1331*/
  return this; /*0x7c133b*/
}
