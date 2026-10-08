char __thiscall TESFile_LoadChunkHeader(Data *this)
{
  int v1; // ebp
  int (__cdecl *v3)(BSFile *, UInt32 *, int, char *, int); // eax
  UInt32 currentChunkOffset; // edi
  char *currentRecordDCBuffer; // eax
  UInt32 v7; // ecx
  UInt32 v8; // eax
  BSFile *bsFile; // [esp-14h] [ebp-2Ch]
  char Dst[4]; // [esp+Ch] [ebp-Ch] BYREF
  UInt32 v11; // [esp+10h] [ebp-8h] BYREF
  unsigned __int16 v12; // [esp+14h] [ebp-4h]

  v11 = 0; /*0x450f19*/
  v12 = 0; /*0x450f1d*/
  if ( this->currentRecord.chunkInfo.type != dword_B05E20 && (this->currentRecord.flags & 0x40000) != 0 ) /*0x450f3d*/
  {
    currentChunkOffset = this->currentChunkOffset; /*0x450f80*/
    if ( !this->currentRecordDCBuffer ) /*0x450f7a*/
      TESFile_GetDecompressedRecordData(this, 0, v1, currentChunkOffset); /*0x450f88*/
    currentRecordDCBuffer = (char *)this->currentRecordDCBuffer; /*0x450f8d*/
    if ( !currentRecordDCBuffer || currentChunkOffset >= this->currentRecordDCLength ) /*0x450f9d*/
      goto LABEL_4;                             // MEF v20 fix: compressed TES chunk header tail guard. Validate currentChunkOffset + 6 <= currentRecordDCLength before reading type/length; invalid data uses existing chunk-header fail path 0x450F65. /*0x450f9d*/
    v7 = *(_DWORD *)&currentRecordDCBuffer[currentChunkOffset];// EngineIssues review: compressed chunk header path checks currentChunkOffset < decompressed length but then reads 6 bytes; verify offset+6 <= length. /*0x450f9f*/
    v11 = v7; /*0x450fa4*/
    v12 = *(_WORD *)&currentRecordDCBuffer[currentChunkOffset + 4]; /*0x450fac*/
  }
  else
  {
    bsFile = this->bsFile; /*0x450f50*/
    v3 = *((int (__cdecl **)(BSFile *, UInt32 *, int, char *, int))bsFile + 1); /*0x450f51*/
    *(_DWORD *)Dst = 1; /*0x450f54*/
    if ( !v3(bsFile, &v11, 6, Dst, 1) ) /*0x450f5c*/
    {
LABEL_4:
      this->currentChunk.length = 0; /*0x450f65*/
      this->currentChunk.type = 0; /*0x450f6c*/
      return 0; /*0x450f79*/
    }
    v7 = v11; /*0x450fb3*/
  }
  v8 = v12; /*0x450fbd*/
  this->currentChunk.type = v7; /*0x450fc2*/
  this->currentChunk.length = v8; /*0x450fc8*/
  if ( v7 == XXXX_ID ) /*0x450fce*/
  {
    *(_DWORD *)Dst = 0; /*0x450fd8*/
    TESFile_GetChunkData(this, Dst, 0); /*0x450fdc*/
    TESFile_GetNextChunk(this); /*0x450fe3*/
    this->currentChunk.length = *(_DWORD *)Dst; /*0x450fec*/
  }
  return 1; /*0x450f65*/
}
