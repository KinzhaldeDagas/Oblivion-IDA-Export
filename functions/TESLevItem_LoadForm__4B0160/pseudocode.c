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

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x2B ) /*0x4b0181*/
    return 0; /*0x4b0183*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v5, v6); /*0x4b018d*/
  do /*0x4b0294*/
  {
    ChunkType = TESFile_GetChunkType(a2); /*0x4b0194*/
    if ( ChunkType > 0x444C564C ) /*0x4b019e*/
    {
      if ( ChunkType == 0x464C564C ) /*0x4b0248*/
      {
        TESFile_GetChunkData(a2, (char *)(this + 0x31), 0); /*0x4b028d*/
      }
      else if ( ChunkType == 0x4F4C564C ) /*0x4b024f*/
      {
        *(_DWORD *)v7 = 0; /*0x4b025e*/
        v8 = 0; /*0x4b0261*/
        v9 = 1; /*0x4b0264*/
        TESFile_GetChunkData(a2, v7, 0xCu); /*0x4b026a*/
        TESLeveledList_AddForm((char *)(this + 0x24), *(int *)v7, v9, v8, v5, v6); /*0x4b027e*/
      }
    }
    else
    {
      switch ( ChunkType ) /*0x4b01a4*/
      {
        case 0x444C564C: /*0x4b01a4*/
          v10[0] = 0; /*0x4b0213*/
          TESFile_GetChunkData(a2, v10, 0); /*0x4b0217*/
          TESLeveledList_SetCalcAllLevels((_BYTE *)(this + 0x24), v10[0] < 0); /*0x4b022d*/
          v10[0] &= ~0x80u; /*0x4b0232*/
          TESLeveledList_SetChanceNone((_BYTE *)(this + 0x24), v10[0]); /*0x4b023c*/
          break;
        case 0x41544144: /*0x4b01a4*/
          Dst = 0; /*0x4b01ed*/
          TESForm_LoadGenericComponents((TESForm *)this, a2, &Dst, 1u); /*0x4b01f1*/
          TESLeveledList_SetCalcEachInCount((_BYTE *)(this + 0x24), Dst != 0); /*0x4b0201*/
          break;
        case 0x44494445: /*0x4b01a4*/
          _alloca_(v5); /*0x4b01be*/
          TESFile_GetChunkData(a2, (char *)&v5, 0x200u); /*0x4b01cd*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, &v5); /*0x4b01dd*/
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a2) ); /*0x4b0294*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4b02a5*/
  return 1; /*0x4b02af*/
}
