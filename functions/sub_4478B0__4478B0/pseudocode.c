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
  unsigned int v17; // edi
  int v18; // eax
  char Group; // al
  int v21; // [esp-Ah] [ebp-2Ch]
  char v22; // [esp+9h] [ebp-19h]
  void *v23; // [esp+Ah] [ebp-18h]
  Data **v24; // [esp+Eh] [ebp-14h]
  int v25; // [esp+12h] [ebp-10h]
  char Dst[4]; // [esp+1Ah] [ebp-8h] BYREF
  int v28; // [esp+1Eh] [ebp-4h]

  v6 = this; /*0x4478bc*/
  *a5 = 0; /*0x4478c0*/
  v23 = 0; /*0x4478cc*/
  *a6 = 0; /*0x4478d0*/
  if ( !Str2 ) /*0x4478d2*/
    return 0; /*0x4478d2*/
  if ( !*Str2 ) /*0x4478d8*/
    return 0; /*0x4478d8*/
  v25 = 0; /*0x4478e6*/
  if ( !*(this + 0x234) ) /*0x4478e0*/
    return 0; /*0x447b76*/
  v24 = (Data **)(this + 0x235); /*0x4478f8*/
  v21 = a3; /*0x4478fc*/
  while ( 1 ) /*0x447904*/
  {
    v7 = *v24; /*0x447904*/
    if ( *v24 ) /*0x447904*/
    {
      if ( TESFile_OpenBSFileWrapper__(v7, 0, 0) ) /*0x447914*/
        break; /*0x447914*/
    }
LABEL_40:
    ++v24; /*0x447b1e*/
    if ( ++v25 >= (unsigned int)v6[0x234] ) /*0x447b34*/
      return v23; /*0x447b34*/
  }
  p_currentRecord = &v7->currentRecord; /*0x447927*/
  v22 = 0; /*0x44792b*/
  if ( v7 == (Data *)0xFFFFFDC4 ) /*0x447930*/
    goto LABEL_38; /*0x447930*/
  while ( !v22 ) /*0x44793b*/
  {
    if ( p_currentRecord->chunkInfo.type != dword_B05E20 ) /*0x447945*/
      goto LABEL_13; /*0x447945*/
    if ( !p_currentRecord->formID && p_currentRecord->flags == dword_B06084 ) /*0x44795a*/
    {
      v22 = 1; /*0x447960*/
LABEL_13:
      Record = TESFile_NextRecordEx(v7, 1); /*0x447965*/
      goto LABEL_14; /*0x447969*/
    }
    Record = TESFile::NextGroup(v7); /*0x447a02*/
LABEL_14:
    if ( !Record ) /*0x447970*/
    {
      if ( !v22 ) /*0x44797d*/
        goto LABEL_38; /*0x44797d*/
      break; /*0x44797d*/
    }
    p_currentRecord = &v7->currentRecord; /*0x447972*/
  }
  v10 = &v7->currentRecord; /*0x447983*/
  v22 = 0; /*0x447987*/
  while ( !v22 ) /*0x447997*/
  {
    type = v10->chunkInfo.type; /*0x44799d*/
    if ( v10->chunkInfo.type == dword_B06084 ) /*0x4479a7*/
    {
      formID = v10->formID; /*0x4479a9*/
      MasterByIndex = (Data *)TESFile_GetMasterByIndex(v7, HIBYTE(formID) + 1); /*0x4479b7*/
      if ( !MasterByIndex ) /*0x4479be*/
        MasterByIndex = v7; /*0x4479c0*/
      FileIndex = TESFile_GetFileIndex(MasterByIndex); /*0x4479c4*/
      v15 = TESForm_LookupByFormID(formID & 0xFFFFFF | (FileIndex << 0x18)); /*0x4479e6*/
      v23 = OblivionDynamicCast( /*0x4479f7*/
              v15,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESWorldSpace `RTTI Type Descriptor',
              0);
    }
    else if ( type == dword_B06048 ) /*0x447a12*/
    {
      ChunkType = TESFile_GetChunkType(v7); /*0x447a1f*/
      if ( ChunkType == 0x44494445 ) /*0x447a27*/
      {
        v17 = v7->currentChunk.length + 1; /*0x447a35*/
        a2 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)a2, v17 | 0x100000000LL, v21); /*0x447a44*/
        _memset((int)a2, 0, v17); /*0x447a49*/
        TESFile_GetChunkData(v7, a2, 0); /*0x447a56*/
        if ( !CRT_StricmpLocaleDispatch(a2, Str2) ) /*0x447a61*/
        {
          v22 = 1; /*0x447a6d*/
          while ( ChunkType != 0x434C4358 ) /*0x447a7a*/
          {
            if ( TESFile_GetNextChunk(v7) ) /*0x447a7c*/
            {
              ChunkType = TESFile_GetChunkType(v7); /*0x447a8c*/
              if ( ChunkType ) /*0x447a90*/
                continue; /*0x447a90*/
            }
            goto LABEL_31; /*0x447a90*/
          }
          *(_DWORD *)Dst = 0; /*0x447aa4*/
          v28 = 0; /*0x447aa8*/
          TESFile_GetChunkData(v7, Dst, 8u); /*0x447ab3*/
          v18 = v28; /*0x447ac0*/
          *a5 = *(_DWORD *)Dst; /*0x447ac4*/
          *a6 = v18; /*0x447aca*/
        }
LABEL_31:
        MemoryHeap_Free_checked(a2); /*0x447a92*/
      }
    }
    else
    {
      if ( type == dword_B05E20 ) /*0x447ae2*/
      {
        switch ( v10->formID ) /*0x447aec*/
        {
          case 0u: /*0x447aec*/
            if ( v10->flags == dword_B06084 ) /*0x447af6*/
              goto LABEL_44; /*0x447af6*/
            TESForm_GetFormTypeFromChunkType(v10->flags); /*0x447afc*/
            break; /*0x447afc*/
          case 1u: /*0x447aec*/
          case 4u: /*0x447aec*/
          case 5u: /*0x447aec*/
            goto LABEL_44;
          case 6u: /*0x447aec*/
            Group = TESFile::NextGroup(v7); /*0x447b4a*/
            goto LABEL_45; /*0x447b4f*/
          default:
            goto LABEL_38;
        }
        break;
      }
      if ( type != dword_B060A8 ) /*0x447b57*/
        break; /*0x447b57*/
    }
LABEL_44:
    Group = TESFile_NextRecordEx(v7, 1); /*0x447b59*/
LABEL_45:
    if ( !Group ) /*0x447b64*/
      break; /*0x447b64*/
    v10 = &v7->currentRecord; /*0x447b66*/
  }
LABEL_38:
  TESFile_Close(v7); /*0x447b04*/
  if ( !v22 ) /*0x447b10*/
  {
    v6 = this; /*0x447b12*/
    v23 = 0; /*0x447b16*/
    goto LABEL_40; /*0x447b16*/
  }
  return v23; /*0x447b41*/
}
