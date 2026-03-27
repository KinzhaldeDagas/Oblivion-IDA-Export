UInt32 __thiscall TESFile_WriteEmptyFormRecord(Data *this, int a2)
{
  BSFile *bsFile; // ecx
  BSFile *v4; // eax
  int v5; // eax

  TESFile_UpdateOpenGroups(this, a2);
  this->unkFile268.record.flags = *(_DWORD *)(a2 + 8) & 0x30EE0;
  bsFile = this->bsFile;
  this->unkFile268.record.chunkInfo.type = *(_DWORD *)(0xC * *(unsigned __int8 *)(a2 + 4) + 0xB05E08);
  this->unkFile268.record.formID = *(_DWORD *)(a2 + 0xC);
  this->unkFile268.record.chunkInfo.length = 0;
  (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End);
  v4 = this->bsFile;
  if ( *((_DWORD *)v4 + 0xC) == 0xFFFFFFFF )
    v5 = *((_DWORD *)v4 + 0x52);
  else
    v5 = *((_DWORD *)v4 + 0xC);
  this->unkFile268.recordOffset = v5;
  this->unkFile280 = 0;
  return TESFile_WriteData(this, (int)&this->unkFile268, 0x14u);
}
