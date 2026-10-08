void __thiscall NiTList<FontManager::TextLine *>::~NiTList<FontManager::TextLine *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'; /*0x573dd8*/
  NiTPointerList::FreeAllNodes(this); /*0x573de6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'; /*0x573deb*/
}
