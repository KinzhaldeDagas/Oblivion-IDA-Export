char __thiscall sub_4B04A0(TESForm *this, Data *a1)
{
  signed int ChunkType; // eax
  int v5; // [esp+0h] [ebp-20h] BYREF
  int v6; // [esp+4h] [ebp-1Ch]
  char v7[4]; // [esp+Ch] [ebp-14h] BYREF
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  char Dst[4]; // [esp+18h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x40 ) /*0x4b04c1*/
    return 0; /*0x4b04c3*/
  TESFile_InitializeFormFromRecord(a1, this, v5, v6); /*0x4b04cd*/
  do /*0x4b05a3*/
  {
    ChunkType = TESFile_GetChunkType(a1); /*0x4b04d4*/
    if ( ChunkType > 0x464C564C ) /*0x4b04de*/
    {
      if ( ChunkType == 0x4F4C564C ) /*0x4b056d*/
      {
        *(_DWORD *)v7 = 0; /*0x4b057c*/
        v8 = 0; /*0x4b057f*/
        v9 = 1; /*0x4b0582*/
        TESFile_GetChunkData(a1, v7, 0xCu); /*0x4b0588*/
        TESLeveledList_AddForm((char *)this + 0x24, *(int *)v7, v9, v8, v5, v6); /*0x4b059c*/
      }
    }
    else
    {
      switch ( ChunkType ) /*0x4b04e4*/
      {
        case 0x464C564C: /*0x4b04e4*/
          TESFile_GetChunkData(a1, (char *)this + 0x31, 0); /*0x4b0561*/
          break;
        case 0x44494445: /*0x4b04e4*/
          _alloca_(v5); /*0x4b0536*/
          TESFile_GetChunkData(a1, (char *)&v5, 0x200u); /*0x4b0545*/
          this->vtbl->SetEditorID(this, (const char *)&v5); /*0x4b0555*/
          break;
        case 0x444C564C: /*0x4b04e4*/
          Dst[0] = 0; /*0x4b0500*/
          TESFile_GetChunkData(a1, Dst, 0); /*0x4b0504*/
          TESLeveledList_SetCalcAllLevels((_BYTE *)this + 0x24, Dst[0] < 0); /*0x4b051a*/
          Dst[0] &= ~0x80u; /*0x4b051f*/
          TESLeveledList_SetChanceNone((_BYTE *)this + 0x24, Dst[0]); /*0x4b0529*/
          break;
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) ); /*0x4b05a3*/
  TESForm_SetIsLinked(this, 0); /*0x4b05b4*/
  return 1; /*0x4b05be*/
}
