void __thiscall NiTList<ContainerItemAndIndex *>::~NiTList<ContainerItemAndIndex *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'; /*0x598698*/
  NiTPointerList::FreeAllNodes(this); /*0x5986a6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<ContainerItemAndIndex *>,ContainerItemAndIndex *>::`vftable'; /*0x5986ab*/
}
