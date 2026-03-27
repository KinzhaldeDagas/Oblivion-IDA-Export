void __thiscall NiTList<TESObjectCELL *>::~NiTList<TESObjectCELL *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable';
}
