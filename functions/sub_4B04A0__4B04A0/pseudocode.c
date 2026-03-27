char __thiscall sub_4B04A0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  int v5; // [esp+0h] [ebp-20h] BYREF
  int v6; // [esp+4h] [ebp-1Ch]
  char v7[4]; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  char Dst[4]; // [esp+18h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x40 )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v5, v6);
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > 0x464C564C )
    {
      if ( ChunkType == 0x4F4C564C )
      {
        *(_DWORD *)v7 = 0;
        v8 = 0;
        v9 = 1;
        TESFile_GetChunkData(a1, v7, 0xCu);
        TESLeveledList_AddForm((char *)this + 0x24, *(int *)v7, v9, v8, v5, v6);
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x464C564C:
          TESFile_GetChunkData(a1, (char *)this + 0x31, 0);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)&v5, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)&v5);
          break;
        case 0x444C564C:
          Dst[0] = 0;
          TESFile_GetChunkData(a1, Dst, 0);
          TESLeveledList_SetCalcAllLevels((_BYTE *)this + 0x24, Dst[0] < 0);
          Dst[0] &= ~0x80u;
          TESLeveledList_SetChanceNone((_BYTE *)this + 0x24, Dst[0]);
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) );
  TESForm_SetIsLinked(this, 0);
  return 1;
}
