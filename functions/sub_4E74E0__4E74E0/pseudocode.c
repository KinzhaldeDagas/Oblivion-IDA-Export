char __thiscall sub_4E74E0(TESForm *this, Data *a1)
{
  UInt32 refID; // edi
  UInt32 v5; // eax
  signed int ChunkType; // eax
  int v7[3]; // [esp+0h] [ebp-18h] BYREF
  char Dst[6]; // [esp+Ch] [ebp-Ch] BYREF
  char v9; // [esp+12h] [ebp-6h]
  char v10; // [esp+13h] [ebp-5h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x34 )
    return 0;
  refID = this->member.refID;
  TESFile_InitializeFormFromRecord(a1, this, v7[0], v7[1]);
  if ( refID )
  {
    v5 = this->member.refID;
    if ( refID != v5 )
      PrintError("Potentially duplicate PathGrid (%08x) encountered in file %s.", v5, a1->name);
  }
  v9 = 0;
  if ( TESFile_IsActive(a1) || sub_4C9FF0() )
    v9 = 1;
  v10 = 1;
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x4C524750 )
    {
      if ( ChunkType == 0x50524750 || ChunkType == 0x52524750 )
        goto LABEL_20;
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4C524750:
          goto LABEL_20;
        case 0x41544144:
          TESFile_GetChunkData(a1, Dst, 2u);
          *((_WORD *)this + 0x18) = *(_WORD *)Dst;
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v7, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v7);
          break;
        case 0x49524750:
LABEL_20:
          if ( v9 )
            v10 = sub_4E65B0((int)this, a1);
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) );
  if ( (this->member.flags & 0x20) != 0 )
    *((_WORD *)this + 0x18) = 0;
  return v10;
}
