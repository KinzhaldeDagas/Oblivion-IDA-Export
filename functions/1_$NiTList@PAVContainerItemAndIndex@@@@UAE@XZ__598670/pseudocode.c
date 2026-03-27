void __thiscall NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable';
}
