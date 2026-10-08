void __thiscall NiTPointerList<AudioManager::SoundMessage *>::~NiTPointerList<AudioManager::SoundMessage *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<NiTPointerAllocator<unsigned int>,AudioManager::SoundMessage *>::`vftable'; /*0x6aa4f8*/
  NiTPointerList::FreeAllNodes(this); /*0x6aa506*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<NiTPointerAllocator<unsigned int>,AudioManager::SoundMessage *>::`vftable'; /*0x6aa50b*/
}
