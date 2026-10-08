char __thiscall sub_4A31C0(TESForm *this, Data *a1)
{
  float *v3; // esi
  signed int ChunkType; // eax
  float *v6; // eax
  float *v7; // ecx
  bool v8; // zf
  int *v9; // esi
  unsigned int *v10; // esi
  int v11[4]; // [esp+0h] [ebp-2Ch] BYREF
  float *v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-18h] BYREF
  float *v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v3 = 0; /*0x4a31f7*/
  v12 = 0; /*0x4a31fb*/
  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x2F ) /*0x4a31fe*/
    return 0; /*0x4a3202*/
  TESFile_InitializeFormFromRecord(a1, this, v11[0], v11[1]); /*0x4a320a*/
  TESForm_SetIsLinked(this, 0); /*0x4a3212*/
  ChunkType = TESFile_GetChunkType(a1); /*0x4a3219*/
  if ( ChunkType ) /*0x4a3220*/
  {
    while ( ChunkType <= 0x4D414E57 ) /*0x4a3235*/
    {
      if ( ChunkType == 0x4D414E57 ) /*0x4a323b*/
      {
        v14 = 0; /*0x4a3329*/
        TESFile_GetChunkData4(a1, (char *)&v14); /*0x4a332c*/
        v7 = v14; /*0x4a3331*/
        v8 = v14 == 0; /*0x4a3334*/
        *((_DWORD *)this + 8) = v14; /*0x4a3336*/
        if ( !v8 /*0x4a334b*/
          && (this->member.flags & 0x40) != 0
          && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[5] )
        {
          sub_4EF170(v7, 1); /*0x4a3356*/
        }
        goto LABEL_35; /*0x4a335b*/
      }
      if ( ChunkType <= 0x444D4452 ) /*0x4a3246*/
      {
        if ( ChunkType != 0x444D4452 && ChunkType != 0x424F4452 ) /*0x4a3253*/
        {
          if ( ChunkType == 0x44494445 ) /*0x4a325e*/
          {
            _alloca_(v11[0]); /*0x4a3287*/
            TESFile_GetChunkData(a1, (char *)v11, 0x200u); /*0x4a3296*/
            this->vtbl->SetEditorID(this, (const char *)v11); /*0x4a32a6*/
            v3 = 0; /*0x4a32a8*/
          }
          else if ( ChunkType == 0x444C5052 ) /*0x4a3265*/
          {
            if ( v12 ) /*0x4a3270*/
              sub_4A6F40(v12, a1); /*0x4a3277*/
          }
          goto LABEL_35; /*0x4a327c*/
        }
        goto LABEL_34; /*0x4a3253*/
      }
      switch ( ChunkType ) /*0x4a32b4*/
      {
        case 0x44534452: /*0x4a32b4*/
          goto LABEL_34; /*0x4a32b4*/
        case 0x494C5052: /*0x4a32b4*/
          v13 = 0; /*0x4a32d7*/
          TESFile_GetChunkData4(a1, (char *)&v13); /*0x4a32da*/
          v6 = (float *)FormHeapAlloc(0x28u); /*0x4a32e1*/
          v14 = v6; /*0x4a32e9*/
          v15 = 0; /*0x4a32ee*/
          if ( v6 ) /*0x4a32f1*/
            v3 = sub_4A6DE0(v6, 1); /*0x4a32fc*/
          v15 = 0xFFFFFFFF; /*0x4a3304*/
          v12 = v3; /*0x4a330b*/
          sub_4A6D70(v3, v13); /*0x4a330e*/
          BSSimpleList_PushBack(*((_DWORD **)this + 7), (int)v3); /*0x4a3317*/
          v3 = 0; /*0x4a331c*/
          break; /*0x4a331e*/
        case 0x4A4F4452: /*0x4a32b4*/
          goto LABEL_34; /*0x4a32c6*/
      }
LABEL_35:
      if ( TESFile_GetNextChunk(a1) ) /*0x4a33a8*/
      {
        ChunkType = TESFile_GetChunkType(a1); /*0x4a33b3*/
        if ( ChunkType ) /*0x4a33ba*/
          continue; /*0x4a33ba*/
      }
      goto LABEL_37; /*0x4a33ba*/
    }
    if ( ChunkType > 0x53474452 ) /*0x4a3362*/
    {
      if ( ChunkType != 0x54414452 && ChunkType != 0x544F4452 && ChunkType != 0x54574452 ) /*0x4a3390*/
        goto LABEL_35; /*0x4a3390*/
    }
    else if ( ChunkType != 0x53474452 && ChunkType != 0x4E4C4452 && ChunkType != 0x4E4F4349 && ChunkType != 0x504D4452 ) /*0x4a3379*/
    {
      goto LABEL_35; /*0x4a3379*/
    }
LABEL_34:
    ((void (__thiscall *)(TESRegionDataManager *, Data *, TESForm *))g_TESDataHandler->regionDataManager->vtable->loadRegionDataRecord)( /*0x4a3392*/
      g_TESDataHandler->regionDataManager,
      a1,
      this);
    goto LABEL_35; /*0x4a33a4*/
  }
LABEL_37:
  v9 = *((int **)this + 7); /*0x4a33c0*/
  while ( v9 ) /*0x4a33c5*/
  {
    if ( !*v9 ) /*0x4a33c7*/
      break; /*0x4a33cb*/
    if ( sub_4A78A0(*v9, 1) ) /*0x4a33cf*/
    {
      v9 = (int *)v9[1]; /*0x4a33fc*/
    }
    else
    {
      v10 = (unsigned int *)*v9; /*0x4a33d8*/
      BSSimpleList_Remove(*((int **)this + 7), (int)v10); /*0x4a33de*/
      if ( v10 ) /*0x4a33e5*/
      {
        sub_4A76F0(v10); /*0x4a33e9*/
        FormHeapFree((unsigned int)v10); /*0x4a33ef*/
      }
      v9 = *((int **)this + 7); /*0x4a33f7*/
    }
  }
  return 1; /*0x4a3408*/
}
