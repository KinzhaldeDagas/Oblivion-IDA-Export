// Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
char __thiscall TESFile_GetChunkData(Data *a1, char *Dst, unsigned int a4)
{                                               // Generic chunk read treats length zero as successful no-op and does not initialize the destination. SCPT callers that use stack/object destinations therefore retain prior or uninitialized bytes.
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

  if ( !a1->currentChunk.length ) /*0x450c36*/
    return 1; /*0x450c51*/
  HIDWORD(v21) = v3; /*0x450c5c*/
  if ( a1->fetchedChunkDataSize ) /*0x450c54*/
  {
    if ( a1->currentRecord.chunkInfo.type == dword_B05E20 || (a1->currentRecord.flags & 0x40000) == 0 ) /*0x450c78*/
      (*(void (__thiscall **)(BSFile *, UInt32, int))(*(_DWORD *)a1->bsFile + 0xC))( /*0x450c99*/
        a1->bsFile,
        a1->currentChunkOffset + a1->currentRecordOffset + 0x1A,
        BSFile_FilePos_Beg);
    a1->fetchedChunkDataSize = 0; /*0x450c9b*/
  }
  if ( a4 && a1->currentChunk.length > a4 )     // HEDR caller TESFile_Open passes maxSize=12. Size 0 exits without touching destination; sizes 1..12 copy only that prefix, preserving prior/default suffix. Size >12 takes this branch, writes byte 11=0 and copies exactly 11 bytes. Each occurrence therefore overlays shared header storage rather than invalidating all fields. /*0x450cb7*/
  {
    Dst[a4 - 1] = 0;                            // Oversized HEDR terminator write: maxSize 12 means destination[11]=0, followed by an 11-byte payload copy. TESFile_Open applies its minimum-next-ID clamp after each read at 0x451C36. /*0x450cbd*/
    if ( a1->currentRecord.chunkInfo.type != dword_B05E20 && (a1->currentRecord.flags & 0x40000) != 0 ) /*0x450cd6*/
    {
      v8 = a1->currentRecordDCBuffer == 0; /*0x450d52*/
      v22 = (char *)(a1->currentChunkOffset + 6); /*0x450d59*/
      if ( v8 ) /*0x450d5d*/
        TESFile_GetDecompressedRecordData(a1, 0x40000, (int)Dst, a4); /*0x450d61*/
      LODWORD(v21) = a4 - 1; /*0x450d73*/
      memcpy(Dst, &v22[(unsigned int)a1->currentRecordDCBuffer], v21);// MEF v20 fix: bounded truncated compressed chunk copy. Clip source range to currentRecordDCLength and zero-fill missing destination bytes instead of memcpy overreading decompressed buffer. /*0x450d76*/
      a1->fetchedChunkDataSize = a4 - 1; /*0x450d7e*/
    }
    else
    {
      File = Archive_ReadBytes( /*0x450ce0*/
               (int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))a1->bsFile,
               (int)Dst,
               a4 - 1);
      a1->fetchedChunkDataSize = File; /*0x450ce7*/
      if ( File != a4 - 1 ) /*0x450ced*/
      {
        v7 = ((int (__stdcall *)(int, char **, _DWORD, _DWORD))GetLastError)(0x400, &v22, 0, 0); /*0x450d01*/
        ((void (__stdcall *)(int, _DWORD, int))FormatMessageA)(0x1300, 0, v7); /*0x450d0f*/
        PrintError("First ReadFile() in GetChunkData failed with error:\n%s", v22); /*0x450d1f*/
        LocalFree(v22); /*0x450d2c*/
        return 0; /*0x450d46*/
      }
    }
    type = a1->currentChunk.type; /*0x450d91*/
    v24[0] = a1->currentChunk.type; /*0x450d96*/
    type_high = HIBYTE(a1->currentChunk.type); /*0x450d9a*/
    v24[2] = BYTE2(type); /*0x450da1*/
    v11 = a1->currentRecord.chunkInfo.type; /*0x450da5*/
    v24[1] = BYTE1(type); /*0x450daf*/
    LOBYTE(type) = BYTE1(a1->currentRecord.chunkInfo.type); /*0x450db3*/
    v24[3] = type_high; /*0x450db9*/
    v12 = BYTE2(a1->currentRecord.chunkInfo.type); /*0x450dbd*/
    v23[0] = v11; /*0x450dc5*/
    v13 = HIBYTE(a1->currentRecord.chunkInfo.type); /*0x450dc9*/
    v23[1] = type; /*0x450dd1*/
    v23[2] = v12; /*0x450dda*/
    v23[3] = v13; /*0x450de2*/
    length = a1->currentChunk.length; /*0x450ded*/
    v24[4] = 0; /*0x450df3*/
    v23[4] = 0; /*0x450df8*/
    PrintError( /*0x450dfd*/
      "Chunk size %d too big in chunk %s_ID in form %s_ID.\r\nMax size is %d, data truncated to \"%s\".\r\n",
      length,
      v24,
      v23,
      a4,
      Dst);
  }
  else if ( a1->currentRecord.chunkInfo.type != dword_B05E20 && (a1->currentRecord.flags & 0x40000) != 0 ) /*0x450e1e*/
  {
    v17 = a1->currentChunkOffset + 6; /*0x450eb5*/
    if ( !a1->currentRecordDCBuffer ) /*0x450eb8*/
      TESFile_GetDecompressedRecordData(a1, 0x40000, (int)Dst, v17); /*0x450ec3*/
    LODWORD(v21) = a1->currentChunk.length;     // MEF v20 fix: bounded full compressed chunk copy. Validate source range against currentRecordDCLength before returning through normal success path. /*0x450ed4*/
    memcpy(Dst, (char *)a1->currentRecordDCBuffer + v17, v21); /*0x450ed9*/
    a1->fetchedChunkDataSize = a1->currentChunk.length; /*0x450ee7*/
  }
  else
  {
    v20 = a1->currentChunk.length;              // With max=0 (SCHR/SCDA), GetChunkData copies the full current chunk length with no destination bound or structural-size validation. /*0x450e34*/
    bsFile = a1->bsFile; /*0x450e36*/
    v14 = *((int (__cdecl **)(BSFile *, char *, UInt32, char **, int))bsFile + 1); /*0x450e37*/
    v22 = (char *)1; /*0x450e3a*/
    v15 = v14(bsFile, Dst, v20, &v22, 1); /*0x450e42*/
    v8 = v15 == a1->currentChunk.length; /*0x450e47*/
    a1->fetchedChunkDataSize = v15; /*0x450e4d*/
    if ( !v8 ) /*0x450e53*/
    {
      v16 = ((int (__stdcall *)(int, char **, _DWORD, _DWORD))GetLastError)(0x400, &v22, 0, 0); /*0x450e67*/
      ((void (__stdcall *)(int, _DWORD, int))FormatMessageA)(0x1300, 0, v16); /*0x450e75*/
      PrintError("Second ReadFile() in GetChunkData failed with error:\n%s", v22); /*0x450e85*/
      LocalFree(v22); /*0x450e92*/
      return 0; /*0x450eac*/
    }
  }
  return 1; /*0x450c3f*/
}
