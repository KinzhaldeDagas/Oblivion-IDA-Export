char __thiscall TESWorldSpace::FindCellInFile(TESWorldSpace *this, Data *a1, int a2, int a3)
{
  UInt32 *cellOffsets; // edi
  int IndexForCellCoord; // eax
  UInt32 v7; // eax
  Data::FormInfo *p_currentRecord; // edi
  UInt32 type; // eax
  char v11; // cl
  bool v12; // zf
  char v13; // bl
  UInt32 i; // eax
  char v15; // [esp+Eh] [ebp-12h]
  char v16; // [esp+Fh] [ebp-11h]
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  char Dst[4]; // [esp+18h] [ebp-8h] BYREF
  int v20; // [esp+1Ch] [ebp-4h]

  if ( !a1 || !TESFile_GetIsMaster(a1) || (cellOffsets = this->cellOffsetsArray) == 0 )
  {
    v16 = 0;
    v17 = TESObjectCELL::CalcExtGroupBlockKey(a2, a3);
    v18 = TESObjectCELL::CalcExtGroupSubBlockKey(a2, a3);
    if ( !a1 )
      return v16;
    if ( !TESFile::FindForm(a1, (TESForm *)this) )
      return v16;
    TESFile_NextRecordEx(a1, 1);
    p_currentRecord = &a1->currentRecord;
    v15 = 0;
    if ( a1 == (Data *)0xFFFFFDC4 )
      return v16;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v15 )
          return v16;
        type = p_currentRecord->chunkInfo.type;
        if ( p_currentRecord->chunkInfo.type != dword_B05E20 )
          break;
        v11 = 1;
        v15 = 1;
        switch ( a1->currentRecord.formID )
        {
          case 1u:
            v11 = 0;
            goto LABEL_15;
          case 4u:
LABEL_15:
            if ( v17 == a1->currentRecord.flags )
              v11 = 0;
            goto LABEL_17;
          case 5u:
LABEL_17:
            if ( v18 == a1->currentRecord.flags )
              v11 = 0;
            goto LABEL_19;
          case 6u:
          case 8u:
          case 9u:
          case 0xAu:
LABEL_19:
            v15 = 0;
            if ( !v11 )
              goto LABEL_34;
            TESFile::NextGroup(a1);
            break;
          default:
            continue;
        }
      }
      if ( type == dword_B06048 )
      {
        v12 = (a1->currentRecord.flags & 0x400) == 0;
        *(_DWORD *)Dst = 0;
        v20 = 0;
        if ( v12 )
        {
          v13 = 0;
          for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
          {
            if ( v13 )
              break;
            if ( i == XCLC_ID )
            {
              TESFile_GetChunkData(a1, Dst, 8u);
              v13 = 1;
            }
            if ( !TESFile_GetNextChunk(a1) )
              break;
          }
        }
        else
        {
          *(_DWORD *)Dst = 0x7FFFFFFF;
        }
        if ( *(_DWORD *)Dst != a2 || v20 != a3 )
          goto LABEL_34;
        v16 = 1;
        v15 = 1;
        TESFile_JumpToBeginningOfRecord(a1);
      }
      else if ( type == dword_B0609C || type == dword_B060A8 )
      {
LABEL_34:
        TESFile_NextRecordEx(a1, 1);
      }
      else
      {
        v15 = 1;
      }
    }
  }
  IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, a2, a3);
  if ( IndexForCellCoord == 0xFFFFFFFF )
    return 0;
  v7 = cellOffsets[IndexForCellCoord];
  if ( !v7 )
    return 0;
  TESFIle_JumpToRecord(a1, (char *)(v7 + this->recordOffsetFromFileBeginning));
  return 1;
}
