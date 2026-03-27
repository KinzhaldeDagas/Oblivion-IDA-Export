_DWORD *__thiscall NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>(
        _DWORD *this,
        char a2)
{
  *this = &NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
