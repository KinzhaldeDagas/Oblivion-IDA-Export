void __thiscall NiTPointerList<BSTextureManager::RenderedTextureData *>::~NiTPointerList<BSTextureManager::RenderedTextureData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::`vftable'; /*0x7c1618*/
  NiTPointerList::FreeAllNodes(this); /*0x7c1626*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,BSTextureManager::RenderedTextureData *>::`vftable'; /*0x7c162b*/
}
