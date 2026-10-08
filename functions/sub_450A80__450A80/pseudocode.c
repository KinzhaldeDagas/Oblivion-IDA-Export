// Closes the current form record: increments formCount, writes the final payload length into the saved record header, seeks back to its header offset, and rewrites the 0x14-byte header.
UInt32 __thiscall TESFile_CloseForm(Data *this)
{
  UInt32 unkFile280; // eax
  BSFile *bsFile; // ecx

  unkFile280 = this->unkFile280; /*0x450a83*/
  ++this->formCount; /*0x450a89*/
  bsFile = this->bsFile; /*0x450a90*/
  this->unkFile268.record.chunkInfo.length = unkFile280; /*0x450a93*/
  (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)bsFile + 0xC))( /*0x450aab*/
    bsFile,
    this->unkFile268.recordOffset,
    BSFile_FilePos_Beg);
  return TESFile_WriteData(this, (int)&this->unkFile268, 0x14u); /*0x450abd*/
}
