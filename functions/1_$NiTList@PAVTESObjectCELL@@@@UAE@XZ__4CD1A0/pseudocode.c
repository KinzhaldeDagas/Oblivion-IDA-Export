void __thiscall NiTList<TESObjectCELL *>::~NiTList<TESObjectCELL *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'; /*0x4cd1c8*/
  NiTPointerList::FreeAllNodes(this); /*0x4cd1d6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<TESObjectCELL *>,TESObjectCELL *>::`vftable'; /*0x4cd1db*/
}
