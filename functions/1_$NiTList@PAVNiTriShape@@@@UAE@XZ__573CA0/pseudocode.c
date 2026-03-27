void __thiscall NiTList<NiTriShape *>::~NiTList<NiTriShape *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable';
}
