void __thiscall NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'; /*0x573d78*/
  NiTPointerList::FreeAllNodes(this); /*0x573d86*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'; /*0x573d8b*/
}
