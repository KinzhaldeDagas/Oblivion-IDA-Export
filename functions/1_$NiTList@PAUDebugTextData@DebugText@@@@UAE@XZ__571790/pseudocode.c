void __thiscall NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'; /*0x5717b8*/
  NiTPointerList::FreeAllNodes(this); /*0x5717c6*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'; /*0x5717cb*/
}
