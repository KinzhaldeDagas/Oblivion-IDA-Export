char __thiscall sub_4B43A0(TESForm *this, Data *a2)
{
  signed int ChunkType; // eax
  float *v5; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  int Dst; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x41 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v6[0], v6[1]);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x44494445 )
    {
      switch ( ChunkType )
      {
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v6, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v6);
          break;
        case 0x41544144:
          Dst = 0;
          TESForm_LoadGenericComponents(this, a2, &Dst, 4u);
          *((_DWORD *)this + 0xC) = Dst;
          break;
        case 0x42444F4D:
          goto LABEL_13;
      }
LABEL_17:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
    if ( ChunkType != 0x4C444F4D && ChunkType != 0x54444F4D )
      goto LABEL_17;
LABEL_13:
    if ( this )
      v5 = (float *)(this + 1);
    else
      v5 = 0;
    TESModel_Load(v5, a2);
    goto LABEL_17;
  }
  return 1;
}
