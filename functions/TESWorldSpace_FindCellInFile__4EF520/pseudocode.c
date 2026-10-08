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

  if ( !a1 || !TESFile_GetIsMaster(a1) || (cellOffsets = this->cellOffsetsArray) == 0 ) /*0x4ef548*/
  {
    v16 = 0; /*0x4ef593*/
    v17 = TESObjectCELL::CalcExtGroupBlockKey(a2, a3);// MEF v21 fallback target: existing GRUP/CELL scan remains the fallback for untracked or out-of-range OFST cache data. /*0x4ef5a2*/
    v18 = TESObjectCELL::CalcExtGroupSubBlockKey(a2, a3); /*0x4ef5b0*/
    if ( !a1 ) /*0x4ef5b4*/
      return v16; /*0x4ef5b4*/
    if ( !TESFile::FindForm(a1, (TESForm *)this) ) /*0x4ef5bd*/
      return v16; /*0x4ef5bd*/
    TESFile_NextRecordEx(a1, 1); /*0x4ef5ce*/
    p_currentRecord = &a1->currentRecord; /*0x4ef5d3*/
    v15 = 0; /*0x4ef5db*/
    if ( a1 == (Data *)0xFFFFFDC4 ) /*0x4ef5e0*/
      return v16; /*0x4ef70f*/
    while ( 1 ) /*0x4ef5f9*/
    {
      while ( 1 ) /*0x4ef5e6*/
      {
        if ( v15 ) /*0x4ef5eb*/
          return v16; /*0x4ef5eb*/
        type = p_currentRecord->chunkInfo.type; /*0x4ef5f1*/
        if ( p_currentRecord->chunkInfo.type != dword_B05E20 ) /*0x4ef5f9*/
          break; /*0x4ef5f9*/
        v11 = 1; /*0x4ef604*/
        v15 = 1; /*0x4ef606*/
        switch ( a1->currentRecord.formID ) /*0x4ef613*/
        {
          case 1u: /*0x4ef613*/
            v11 = 0; /*0x4ef61a*/
            goto LABEL_15; /*0x4ef61a*/
          case 4u: /*0x4ef613*/
LABEL_15:
            if ( v17 == a1->currentRecord.flags ) /*0x4ef623*/
              v11 = 0; /*0x4ef625*/
            goto LABEL_17; /*0x4ef625*/
          case 5u: /*0x4ef613*/
LABEL_17:
            if ( v18 == a1->currentRecord.flags ) /*0x4ef62e*/
              v11 = 0; /*0x4ef630*/
            goto LABEL_19; /*0x4ef630*/
          case 6u: /*0x4ef613*/
          case 8u: /*0x4ef613*/
          case 9u: /*0x4ef613*/
          case 0xAu: /*0x4ef613*/
LABEL_19:
            v15 = 0; /*0x4ef632*/
            if ( !v11 ) /*0x4ef639*/
              goto LABEL_34; /*0x4ef639*/
            TESFile::NextGroup(a1); /*0x4ef641*/
            break; /*0x4ef646*/
          default:
            continue;
        }
      }
      if ( type == dword_B06048 ) /*0x4ef64e*/
      {
        v12 = (a1->currentRecord.flags & 0x400) == 0; /*0x4ef656*/
        *(_DWORD *)Dst = 0; /*0x4ef65d*/
        v20 = 0; /*0x4ef661*/
        if ( v12 ) /*0x4ef665*/
        {
          v13 = 0; /*0x4ef673*/
          for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) ) /*0x4ef67c*/
          {
            if ( v13 ) /*0x4ef682*/
              break; /*0x4ef682*/
            if ( i == XCLC_ID ) /*0x4ef689*/
            {
              TESFile_GetChunkData(a1, Dst, 8u); /*0x4ef694*/
              v13 = 1; /*0x4ef699*/
            }
            if ( !TESFile_GetNextChunk(a1) ) /*0x4ef69d*/
              break; /*0x4ef6a4*/
          }
        }
        else
        {
          *(_DWORD *)Dst = 0x7FFFFFFF; /*0x4ef667*/
        }
        if ( *(_DWORD *)Dst != a2 || v20 != a3 ) /*0x4ef6c1*/
          goto LABEL_34; /*0x4ef6c1*/
        v16 = 1; /*0x4ef6c5*/
        v15 = 1; /*0x4ef6ca*/
        TESFile_JumpToBeginningOfRecord(a1); /*0x4ef6cf*/
      }
      else if ( type == dword_B0609C || type == dword_B060A8 ) /*0x4ef6f5*/
      {
LABEL_34:
        TESFile_NextRecordEx(a1, 1); /*0x4ef6e1*/
      }
      else
      {
        v15 = 1; /*0x4ef705*/
      }
    }
  }
  IndexForCellCoord = TESWorldSpace::GetIndexForCellCoord(this, a2, a3); /*0x4ef554*/
  if ( IndexForCellCoord == 0xFFFFFFFF ) /*0x4ef55c*/
    return 0; /*0x4ef55c*/
  v7 = cellOffsets[IndexForCellCoord];          // MEF v21 implementation target: guarded exterior-cell offset fast path. Requires tracked OFST/rebuilt-table count, validates index and base+offset target, falls back to 0x4EF58B for non-authoritative cache misses. /*0x4ef55e*/
  if ( !v7 ) /*0x4ef563*/
    return 0; /*0x4ef580*/
  TESFIle_JumpToRecord(a1, (char *)(v7 + this->recordOffsetFromFileBeginning)); /*0x4ef570*/
  return 1; /*0x4ef577*/
}
