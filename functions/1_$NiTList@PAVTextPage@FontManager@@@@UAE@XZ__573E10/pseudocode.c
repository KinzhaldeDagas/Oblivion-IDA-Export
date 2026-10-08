void __thiscall NiTList<FontManager::TextPage *>::~NiTList<FontManager::TextPage *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'; /*0x573e38*/
  NiTPointerList::FreeAllNodes(this); /*0x573e46*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'; /*0x573e4b*/
}
