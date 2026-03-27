UInt32 __thiscall sub_450A80(Data *this)
{
  int unkFile280; // eax
  BSFile *bsFile; // ecx

  unkFile280 = this->unkFile280;
  ++this->formCount;
  bsFile = this->bsFile;
  this->unkFile268.record.chunkInfo.length = unkFile280;
  (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)bsFile + 0xC))(
    bsFile,
    this->unkFile268.recordOffset,
    BSFile_FilePos_Beg);
  return TESFile_WriteData(this, (int)&this->unkFile268, 0x14u);
}
