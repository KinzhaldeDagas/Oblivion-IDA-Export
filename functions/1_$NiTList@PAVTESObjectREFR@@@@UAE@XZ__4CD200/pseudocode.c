void __thiscall NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable';
}
