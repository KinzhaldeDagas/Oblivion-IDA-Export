void __thiscall NiTList<NiTriShape *>::~NiTList<NiTriShape *>(NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'; /*0x573cc8*/
  NiTPointerList::FreeAllNodes(this); /*0x573cd6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<NiTriShape *>,NiTriShape *>::`vftable'; /*0x573cdb*/
}
