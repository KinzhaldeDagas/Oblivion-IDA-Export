void __thiscall NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'; /*0x4cd228*/
  NiTPointerList::FreeAllNodes(this); /*0x4cd236*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<TESObjectREFR *>,TESObjectREFR *>::`vftable'; /*0x4cd23b*/
}
