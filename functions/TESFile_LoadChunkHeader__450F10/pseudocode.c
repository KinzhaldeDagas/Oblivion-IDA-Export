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

  v11 = 0;
  v12 = 0;
  if ( this->currentRecord.chunkInfo.type != dword_B05E20 && (this->currentRecord.flags & 0x40000) != 0 )
  {
    currentChunkOffset = this->currentChunkOffset;
    if ( !this->currentRecordDCBuffer )
      TESFile_GetDecompressedRecordData(this, 0, v1, currentChunkOffset);
    currentRecordDCBuffer = (char *)this->currentRecordDCBuffer;
    if ( !currentRecordDCBuffer || currentChunkOffset >= this->currentRecordDCLength )
      goto LABEL_4;
    v7 = *(_DWORD *)&currentRecordDCBuffer[currentChunkOffset];
    v11 = v7;
    v12 = *(_WORD *)&currentRecordDCBuffer[currentChunkOffset + 4];
  }
  else
  {
    bsFile = this->bsFile;
    v3 = *((int (__cdecl **)(BSFile *, UInt32 *, int, char *, int))bsFile + 1);
    *(_DWORD *)Dst = 1;
    if ( !v3(bsFile, &v11, 6, Dst, 1) )
    {
LABEL_4:
      this->currentChunk.length = 0;
      this->currentChunk.type = 0;
      return 0;
    }
    v7 = v11;
  }
  v8 = v12;
  this->currentChunk.type = v7;
  this->currentChunk.length = v8;
  if ( v7 == XXXX_ID )
  {
    *(_DWORD *)Dst = 0;
    TESFile_GetChunkData(this, Dst, 0);
    TESFile_GetNextChunk(this);
    this->currentChunk.length = *(_DWORD *)Dst;
  }
  return 1;
}
