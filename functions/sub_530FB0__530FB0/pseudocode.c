// Oblivion main INFO loader stores the winning record offset for lazy response/result-script reconstruction, but does not consume SCHR, SCHD, SCDA, SCTX, or SCRO here. Result scripts are reconstructed later by TESTopicInfo::GetResultScript from that winning serialized INFO record.
bool __thiscall TESTopicInfo_LoadForm(TESTopicInfo *this, Data *file)
{
  int v2; // ebp
  Data *v3; // ebx
  signed int ChunkType; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // edi
  const char *v10; // eax
  int v11; // [esp-8h] [ebp-20h]
  int v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp+0h] [ebp-18h]
  int v14; // [esp+8h] [ebp-10h] BYREF
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  int v17; // [esp+14h] [ebp-4h] BYREF

  v3 = file; /*0x530fb4*/
  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x3A ) /*0x530fc4*/
    return 0; /*0x530fcd*/
  if ( !TESFile_GetIsOptimized(v3) )            // If this TESFile is not optimized, preserve the current INFO record offset at TESTopicInfo+0x34 for lazy runtime response reconstruction. /*0x530fd2*/
    *((_DWORD *)this + 0xD) = v3->currentRecordOffset;// Last loader invocation wins sourceFileOffset. A valid partial INFO also reaches this write, so runtime responses later come from the partial override record rather than an inherited/eager list. /*0x530fe1*/
  file = (Data *)0xFFFFFFFF; /*0x530fea*/
  v14 = 0; /*0x530ff2*/
  TESFile_InitializeFormFromRecord(v3, (TESForm *)this, v2, v13); /*0x530ff6*/
  ChunkType = TESFile_GetChunkType(v3);         // Main INFO chunk loop does not recognize TRDT/NAM1/NAM2. Oblivion reconstructs response data lazily in TESTopicInfo::GetResponseList instead. /*0x530ffd*/
  if ( ChunkType ) /*0x531004*/
  {
    while ( 1 ) /*0x531010*/
    {
      if ( ChunkType > 0x49545351 ) /*0x531015*/
      {
        if ( ChunkType == 0x4D414E50 ) /*0x531103*/
        {
          TESFile_GetChunkData4(v3, (char *)&file); /*0x53116c*/
          if ( file ) /*0x531175*/
            TESForm_ResolveFormID((UInt32 *)&file, v3); /*0x53117d*/
          goto LABEL_37; /*0x53117d*/
        }
        if ( ChunkType != 0x54445443 ) /*0x53110a*/
        {
          if ( ChunkType == 0x544C4354 ) /*0x531111*/
          {
            if ( !*((_DWORD *)this + 0xC) ) /*0x531113*/
            {
              v8 = (_DWORD *)FormHeapAlloc(0x10u); /*0x53111a*/
              if ( v8 ) /*0x531124*/
              {
                *v8 = 0; /*0x531126*/
                v8[1] = 0; /*0x531128*/
                v8[2] = 0; /*0x53112b*/
                v8[3] = 0; /*0x53112e*/
              }
              else
              {
                v8 = 0; /*0x531133*/
              }
              *((_DWORD *)this + 0xC) = v8; /*0x531135*/
            }
            v17 = 0; /*0x53113f*/
            TESFile_GetChunkData4(v3, (char *)&v17); /*0x531143*/
            BSSimpleList_PushBack((_DWORD *)(*((_DWORD *)this + 0xC) + 8), v17); /*0x531153*/
          }
          goto LABEL_37; /*0x531158*/
        }
      }
      else
      {
        if ( ChunkType == 0x49545351 ) /*0x53101b*/
        {
          TESFile_GetChunkData4(v3, (char *)&v14); /*0x5310f1*/
          TESForm_ResolveFormID((UInt32 *)&v14, v3); /*0x5310fc*/
          goto LABEL_37; /*0x5310fc*/
        }
        if ( ChunkType > 0x454D414E ) /*0x531026*/
        {
          if ( ChunkType == 0x464C4354 ) /*0x53109d*/
          {
            if ( !*((_DWORD *)this + 0xC) ) /*0x5310a3*/
            {
              v7 = (_DWORD *)FormHeapAlloc(0x10u); /*0x5310aa*/
              if ( v7 ) /*0x5310b4*/
              {
                *v7 = 0; /*0x5310b6*/
                v7[1] = 0; /*0x5310b8*/
                v7[2] = 0; /*0x5310bb*/
                v7[3] = 0; /*0x5310be*/
              }
              else
              {
                v7 = 0; /*0x5310c3*/
              }
              *((_DWORD *)this + 0xC) = v7; /*0x5310c5*/
            }
            v16 = 0; /*0x5310cf*/
            TESFile_GetChunkData4(v3, (char *)&v16); /*0x5310d3*/
            BSSimpleList_PushBack(*((_DWORD **)this + 0xC), v16); /*0x5310e0*/
          }
          goto LABEL_37; /*0x5310e5*/
        }
        if ( ChunkType == 0x454D414E ) /*0x531028*/
        {
          v15 = 0; /*0x53107d*/
          TESFile_GetChunkData4(v3, (char *)&v15); /*0x531081*/
          BSSimpleList_PushBack((_DWORD *)this + 0xA, v15); /*0x53108e*/
          goto LABEL_37; /*0x531093*/
        }
        if ( ChunkType != 0x41445443 ) /*0x53102f*/
        {
          if ( ChunkType == 0x41544144 ) /*0x53103a*/
          {
            TESFile_GetChunkData(v3, (char *)&this->unk34 + 3, 3u); /*0x531048*/
            if ( SHIBYTE(this->unk34) >= 7 ) /*0x531050*/
              ((void (__thiscall *)(TESTopicInfo *, int))this->conditions.data[5].unk14)(this, 1); /*0x53105e*/
            if ( HIBYTE(this->unk34) == 1 ) /*0x531063*/
              sub_530BA0((unsigned int *)this, 0); /*0x53106c*/
          }
          goto LABEL_37; /*0x531071*/
        }
      }
      ConditionList_LoadCondition(&this->addedTopics.node.next, v3); /*0x53115e*/
LABEL_37:
      if ( TESFile_GetNextChunk(v3) ) /*0x531187*/
      {
        ChunkType = TESFile_GetChunkType(v3); /*0x531192*/
        if ( ChunkType ) /*0x531199*/
          continue; /*0x531199*/
      }
      break; /*0x531199*/
    }
  }
  if ( (*(_DWORD *)&this->unk20 & 0x20) == 0 && !sub_52FD20((int **)unk_B3650C, v14, (unsigned int)this, (int)file) ) /*0x5311bd*/
  {
    v9 = *(_DWORD *)&this->infotype; /*0x5311d3*/
    v10 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)unk_B3650C + 0xD4))( /*0x5311e0*/
                          unk_B3650C,
                          *(_DWORD *)(unk_B3650C + 0xC),
                          v14);
    PrintError("Unable to insert topic info (%08X) into topic '%s' (%08X), quest (%08X).", v9, v10, v11, v12); /*0x5311e9*/
  }
  return 1; /*0x530fc6*/
}
