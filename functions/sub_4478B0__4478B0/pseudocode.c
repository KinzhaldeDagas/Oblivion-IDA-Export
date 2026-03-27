void *__userpurge sub_4478B0@<eax>(int *this@<ecx>, char *a2@<ebp>, int a3@<esi>, char *Str2, _DWORD *a5, int *a6)
{
  int *v6; // edi
  Data *v7; // esi
  Data::FormInfo *p_currentRecord; // eax
  char Record; // al
  Data::FormInfo *v10; // eax
  UInt32 type; // ecx
  UInt32 formID; // edi
  Data *MasterByIndex; // eax
  unsigned __int8 FileIndex; // al
  TESForm *v15; // eax
  UInt32 ChunkType; // ebx
  int v17; // edi
  int v18; // eax
  char Group; // al
  int v21; // [esp-Ah] [ebp-2Ch]
  char v22; // [esp+9h] [ebp-19h]
  void *v23; // [esp+Ah] [ebp-18h]
  Data **v24; // [esp+Eh] [ebp-14h]
  int v25; // [esp+12h] [ebp-10h]
  char Dst[4]; // [esp+1Ah] [ebp-8h] BYREF
  int v28; // [esp+1Eh] [ebp-4h]

  v6 = this;
  *a5 = 0;
  v23 = 0;
  *a6 = 0;
  if ( !Str2 )
    return 0;
  if ( !*Str2 )
    return 0;
  v25 = 0;
  if ( !*(this + 0x234) )
    return 0;
  v24 = (Data **)(this + 0x235);
  v21 = a3;
  while ( 1 )
  {
    v7 = *v24;
    if ( *v24 )
    {
      if ( TESFile_OpenBSFileWrapper__((int)v7, 0, 0) )
        break;
    }
LABEL_40:
    ++v24;
    if ( ++v25 >= (unsigned int)v6[0x234] )
      return v23;
  }
  p_currentRecord = &v7->currentRecord;
  v22 = 0;
  if ( v7 == (Data *)0xFFFFFDC4 )
    goto LABEL_38;
  while ( !v22 )
  {
    if ( p_currentRecord->chunkInfo.type != dword_B05E20 )
      goto LABEL_13;
    if ( !p_currentRecord->formID && p_currentRecord->flags == dword_B06084 )
    {
      v22 = 1;
LABEL_13:
      Record = TESFile_NextRecordEx(v7, 1);
      goto LABEL_14;
    }
    Record = TESFile::NextGroup(v7);
LABEL_14:
    if ( !Record )
    {
      if ( !v22 )
        goto LABEL_38;
      break;
    }
    p_currentRecord = &v7->currentRecord;
  }
  v10 = &v7->currentRecord;
  v22 = 0;
  while ( !v22 )
  {
    type = v10->chunkInfo.type;
    if ( v10->chunkInfo.type == dword_B06084 )
    {
      formID = v10->formID;
      MasterByIndex = (Data *)TESFile_GetMasterByIndex(v7, HIBYTE(formID) + 1);
      if ( !MasterByIndex )
        MasterByIndex = v7;
      FileIndex = TESFile_GetFileIndex(MasterByIndex);
      v15 = TESForm_LookupByFormID(formID & 0xFFFFFF | (FileIndex << 0x18));
      v23 = OblivionDynamicCast(
              v15,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESWorldSpace `RTTI Type Descriptor',
              0);
    }
    else if ( type == dword_B06048 )
    {
      ChunkType = TESFile_GetChunkType(v7);
      if ( ChunkType == 0x44494445 )
      {
        v17 = v7->currentChunk.length + 1;
        a2 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)a2, (unsigned int)v17 | 0x100000000LL, v21);
        _memset(a2, 0, v17);
        TESFile_GetChunkData(v7, a2, 0);
        if ( !_strcmp(a2, Str2) )
        {
          v22 = 1;
          while ( ChunkType != 0x434C4358 )
          {
            if ( TESFile_GetNextChunk(v7) )
            {
              ChunkType = TESFile_GetChunkType(v7);
              if ( ChunkType )
                continue;
            }
            goto LABEL_31;
          }
          *(_DWORD *)Dst = 0;
          v28 = 0;
          TESFile_GetChunkData(v7, Dst, 8u);
          v18 = v28;
          *a5 = *(_DWORD *)Dst;
          *a6 = v18;
        }
LABEL_31:
        MemoryHeap_Free_checked(a2);
      }
    }
    else
    {
      if ( type == dword_B05E20 )
      {
        switch ( v10->formID )
        {
          case 0u:
            if ( v10->flags == dword_B06084 )
              goto LABEL_44;
            TESForm_GetFormTypeFromChunkType(v10->flags);
            break;
          case 1u:
          case 4u:
          case 5u:
            goto LABEL_44;
          case 6u:
            Group = TESFile::NextGroup(v7);
            goto LABEL_45;
          default:
            goto LABEL_38;
        }
        break;
      }
      if ( type != dword_B060A8 )
        break;
    }
LABEL_44:
    Group = TESFile_NextRecordEx(v7, 1);
LABEL_45:
    if ( !Group )
      break;
    v10 = &v7->currentRecord;
  }
LABEL_38:
  TESFile_Close(v7);
  if ( !v22 )
  {
    v6 = this;
    v23 = 0;
    goto LABEL_40;
  }
  return v23;
}
