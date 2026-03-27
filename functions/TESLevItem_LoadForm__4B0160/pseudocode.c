char __thiscall TESLevItem_LoadForm(int this, Data *a2)
{
  signed int ChunkType; // eax
  int v5; // [esp+0h] [ebp-24h] BYREF
  int v6; // [esp+4h] [ebp-20h]
  char v7[4]; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+10h] [ebp-14h]
  int v9; // [esp+14h] [ebp-10h]
  char v10[4]; // [esp+1Bh] [ebp-9h] BYREF
  char Dst; // [esp+1Fh] [ebp-5h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x2B )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v5, v6);
  do
  {
    ChunkType = TESFile_GetChunkType(a2);
    if ( ChunkType > 0x444C564C )
    {
      if ( ChunkType == 0x464C564C )
      {
        TESFile_GetChunkData(a2, (char *)(this + 0x31), 0);
      }
      else if ( ChunkType == 0x4F4C564C )
      {
        *(_DWORD *)v7 = 0;
        v8 = 0;
        v9 = 1;
        TESFile_GetChunkData(a2, v7, 0xCu);
        TESLeveledList_AddForm((void *)(this + 0x24), *(int *)v7, v9, v8, v5, v6);
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x444C564C:
          v10[0] = 0;
          TESFile_GetChunkData(a2, v10, 0);
          TESLeveledList_SetCalcAllLevels((_BYTE *)(this + 0x24), v10[0] < 0);
          v10[0] &= ~0x80u;
          TESLeveledList_SetChanceNone((_BYTE *)(this + 0x24), v10[0]);
          break;
        case 0x41544144:
          Dst = 0;
          TESForm_LoadGenericComponents((TESForm *)this, a2, &Dst, 1u);
          TESLeveledList_SetCalcEachInCount((_BYTE *)(this + 0x24), Dst != 0);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)&v5, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, &v5);
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a2) );
  TESForm_SetIsLinked((TESForm *)this, 0);
  return 1;
}
