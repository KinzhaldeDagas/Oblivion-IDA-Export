char __thiscall TESFile_GetChunkData(Data *a1, char *Dst, unsigned int a4)
{
  int v3; // edi
  UInt32 File; // eax
  int v7; // eax
  bool v8; // zf
  UInt32 type; // ecx
  char type_high; // dl
  char v11; // al
  char v12; // dl
  char v13; // al
  int (__cdecl *v14)(BSFile *, char *, UInt32, char **, int); // eax
  UInt32 v15; // eax
  int v16; // eax
  int v17; // edi
  UInt32 length; // [esp+0h] [ebp-3Ch]
  BSFile *bsFile; // [esp+0h] [ebp-3Ch]
  UInt32 v20; // [esp+8h] [ebp-34h]
  size_t v21; // [esp+10h] [ebp-2Ch]
  char *v22; // [esp+24h] [ebp-18h] BYREF
  char v23[8]; // [esp+28h] [ebp-14h] BYREF
  char v24[8]; // [esp+30h] [ebp-Ch] BYREF

  if ( !a1->currentChunk.length )
    return 1;
  HIDWORD(v21) = v3;
  if ( a1->fetchedChunkDataSize )
  {
    if ( a1->currentRecord.chunkInfo.type == dword_B05E20 || (a1->currentRecord.flags & 0x40000) == 0 )
      (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)a1->bsFile + 0xC))(
        a1->bsFile,
        a1->currentChunkOffset + a1->currentRecordOffset + 0x1A,
        BSFile_FilePos_Beg);
    a1->fetchedChunkDataSize = 0;
  }
  if ( a4 && a1->currentChunk.length > a4 )
  {
    Dst[a4 - 1] = 0;
    if ( a1->currentRecord.chunkInfo.type != dword_B05E20 && (a1->currentRecord.flags & 0x40000) != 0 )
    {
      v8 = a1->currentRecordDCBuffer == 0;
      v22 = (char *)(a1->currentChunkOffset + 6);
      if ( v8 )
        TESFile_GetDecompressedRecordData(a1, 0x40000, (int)Dst, a4);
      LODWORD(v21) = a4 - 1;
      memcpy(Dst, &v22[(unsigned int)a1->currentRecordDCBuffer], v21);
      a1->fetchedChunkDataSize = a4 - 1;
    }
    else
    {
      File = ReadFile__((int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a1->bsFile, (int)Dst, a4 - 1);
      a1->fetchedChunkDataSize = File;
      if ( File != a4 - 1 )
      {
        v7 = ((int (__stdcall *)(int, char **, _DWORD, _DWORD))GetLastError)(0x400, &v22, 0, 0);
        ((void (__stdcall *)(int, _DWORD, int))FormatMessageA)(0x1300, 0, v7);
        PrintError("First ReadFile() in GetChunkData failed with error:\n%s", v22);
        LocalFree(v22);
        return 0;
      }
    }
    type = a1->currentChunk.type;
    v24[0] = a1->currentChunk.type;
    type_high = HIBYTE(a1->currentChunk.type);
    v24[2] = BYTE2(type);
    v11 = a1->currentRecord.chunkInfo.type;
    v24[1] = BYTE1(type);
    LOBYTE(type) = BYTE1(a1->currentRecord.chunkInfo.type);
    v24[3] = type_high;
    v12 = BYTE2(a1->currentRecord.chunkInfo.type);
    v23[0] = v11;
    v13 = HIBYTE(a1->currentRecord.chunkInfo.type);
    v23[1] = type;
    v23[2] = v12;
    v23[3] = v13;
    length = a1->currentChunk.length;
    v24[4] = 0;
    v23[4] = 0;
    PrintError(
      "Chunk size %d too big in chunk %s_ID in form %s_ID.\r\nMax size is %d, data truncated to \"%s\".\r\n",
      length,
      v24,
      v23,
      a4,
      Dst);
  }
  else if ( a1->currentRecord.chunkInfo.type != dword_B05E20 && (a1->currentRecord.flags & 0x40000) != 0 )
  {
    v17 = a1->currentChunkOffset + 6;
    if ( !a1->currentRecordDCBuffer )
      TESFile_GetDecompressedRecordData(a1, 0x40000, (int)Dst, v17);
    LODWORD(v21) = a1->currentChunk.length;
    memcpy(Dst, (char *)a1->currentRecordDCBuffer + v17, v21);
    a1->fetchedChunkDataSize = a1->currentChunk.length;
  }
  else
  {
    v20 = a1->currentChunk.length;
    bsFile = a1->bsFile;
    v14 = *((int (__cdecl **)(BSFile *, char *, UInt32, char **, int))bsFile + 1);
    v22 = (char *)1;
    v15 = v14(bsFile, Dst, v20, &v22, 1);
    v8 = v15 == a1->currentChunk.length;
    a1->fetchedChunkDataSize = v15;
    if ( !v8 )
    {
      v16 = ((int (__stdcall *)(int, char **, _DWORD, _DWORD))GetLastError)(0x400, &v22, 0, 0);
      ((void (__stdcall *)(int, _DWORD, int))FormatMessageA)(0x1300, 0, v16);
      PrintError("Second ReadFile() in GetChunkData failed with error:\n%s", v22);
      LocalFree(v22);
      return 0;
    }
  }
  return 1;
}
