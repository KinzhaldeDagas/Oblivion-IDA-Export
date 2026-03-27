void __thiscall NiTList<VideoMenu::VideoRes>::~NiTList<VideoMenu::VideoRes>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<VideoMenu::VideoRes>,VideoMenu::VideoRes>::`vftable';
}
