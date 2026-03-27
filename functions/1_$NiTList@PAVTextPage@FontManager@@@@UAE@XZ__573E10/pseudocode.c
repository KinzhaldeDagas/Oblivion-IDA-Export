void __thiscall NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable';
}
