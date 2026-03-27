void __thiscall NiTList<FontManager::CharData *>::~NiTList<FontManager::CharData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable';
}
