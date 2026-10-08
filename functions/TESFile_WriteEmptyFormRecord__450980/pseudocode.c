UInt32 __thiscall TESFile_WriteEmptyFormRecord(Data *this, int a2)
{
  BSFile *bsFile; // ecx
  BSFile *v4; // eax
  UInt32 v5; // eax

  TESFile_UpdateOpenGroups(this, a2); /*0x45098a*/
  this->unkFile268.record.flags = *(_DWORD *)(a2 + 8) & 0x30EE0; /*0x450997*/
  bsFile = this->bsFile; /*0x4509ab*/
  this->unkFile268.record.chunkInfo.type = *(_DWORD *)(0xC * *(unsigned __int8 *)(a2 + 4) + 0xB05E08); /*0x4509ae*/
  this->unkFile268.record.formID = *(_DWORD *)(a2 + 0xC); /*0x4509bf*/
  this->unkFile268.record.chunkInfo.length = 0; /*0x4509c5*/
  (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End); /*0x4509d7*/
  v4 = this->bsFile; /*0x4509d9*/
  if ( *((_DWORD *)v4 + 0xC) == 0xFFFFFFFF ) /*0x4509e2*/
    v5 = *((_DWORD *)v4 + 0x52); /*0x4509e8*/
  else
    v5 = *((_DWORD *)v4 + 0xC); /*0x4509e4*/
  this->unkFile268.recordOffset = v5; /*0x4509f3*/
  this->unkFile280 = 0; /*0x4509f9*/
  return TESFile_WriteData(this, (int)&this->unkFile268, 0x14u); /*0x450a04*/
}
