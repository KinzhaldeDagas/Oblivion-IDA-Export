void __thiscall NiTList<DebugText::DebugTextData *>::~NiTList<DebugText::DebugTextData *>(
        NiTPointerList__BSImageSpaceShader *this)
{
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable';
  NiTPointerList::FreeAllNodes(this);
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable';
}
