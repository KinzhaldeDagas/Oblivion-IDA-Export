UInt32 __thiscall TESFile_WriteFormRecord(Data *this, int a2)
{
  UInt32 v3; // ebx

  TESFile_UpdateOpenGroups(this, a2); /*0x450a1a*/
  (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)this->bsFile + 0xC))(this->bsFile, 0, BSFile_FilePos_End); /*0x450a30*/
  v3 = TESFile_WriteData(this, (int)MEMORY[0xB33C14], MEMORY[0xB33C18]);// TESFile_WriteFormRecord writes B33C14/B33C18; if MEF v25 skips compression, these remain the original uncompressed record buffer and length. /*0x450a4e*/
  if ( MEMORY[0xB33C14] ) /*0x450a47*/
  {
    if ( MEMORY[0xB33C18] ) /*0x450a52*/
      ++this->formCount; /*0x450a5b*/
  }
  TESFile_ClearFormRecord(); /*0x450a64*/
  return v3; /*0x450a69*/
}
