void __thiscall NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable';
}
