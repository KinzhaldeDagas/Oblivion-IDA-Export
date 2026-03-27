char __thiscall sub_4A31C0(TESForm *this, Data *a1)
{
  float *v3; // esi
  signed int ChunkType; // eax
  float *v6; // eax
  float *v7; // ecx
  bool v8; // zf
  int *v9; // esi
  _DWORD *v10; // esi
  int v11[4]; // [esp+0h] [ebp-2Ch] BYREF
  float *v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-18h] BYREF
  float *v14; // [esp+18h] [ebp-14h] BYREF
  unsigned int v15; // [esp+28h] [ebp-4h]

  v3 = 0;
  v12 = 0;
  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x2F )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v11[0], v11[1]);
  TESForm_SetIsLinked(this, 0);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x4D414E57 )
    {
      if ( ChunkType == 0x4D414E57 )
      {
        v14 = 0;
        TESFile_GetChunkData4(a1, (char *)&v14);
        v7 = v14;
        v8 = v14 == 0;
        *((_DWORD *)this + 8) = v14;
        if ( !v8 && (this->member.flags & 0x40) != 0 && !*(_BYTE *)(TESDataHandler + 0xCD7) )
          sub_4EF170(v7, 1);
        goto LABEL_35;
      }
      if ( ChunkType <= 0x444D4452 )
      {
        if ( ChunkType != 0x444D4452 && ChunkType != 0x424F4452 )
        {
          if ( ChunkType == 0x44494445 )
          {
            _alloca_();
            TESFile_GetChunkData(a1, (char *)v11, 0x200u);
            this->vtbl->SetEditorID(this, (const char *)v11);
            v3 = 0;
          }
          else if ( ChunkType == 0x444C5052 )
          {
            if ( v12 )
              sub_4A6F40(v12, (int *)a1);
          }
          goto LABEL_35;
        }
        goto LABEL_34;
      }
      switch ( ChunkType )
      {
        case 0x44534452:
          goto LABEL_34;
        case 0x494C5052:
          v13 = 0;
          TESFile_GetChunkData4(a1, (char *)&v13);
          v6 = (float *)FormHeapAlloc(0x28u);
          v14 = v6;
          v15 = 0;
          if ( v6 )
            v3 = sub_4A6DE0(v6, 1);
          v15 = 0xFFFFFFFF;
          v12 = v3;
          sub_4A6D70(v3, v13);
          BSSimpleList_PushBack(*((_DWORD **)this + 7), (int)v3);
          v3 = 0;
          break;
        case 0x4A4F4452:
          goto LABEL_34;
      }
LABEL_35:
      if ( TESFile_GetNextChunk(a1) )
      {
        ChunkType = TESFile_GetChunkType(a1);
        if ( ChunkType )
          continue;
      }
      goto LABEL_37;
    }
    if ( ChunkType > 0x53474452 )
    {
      if ( ChunkType != 0x54414452 && ChunkType != 0x544F4452 && ChunkType != 0x54574452 )
        goto LABEL_35;
    }
    else if ( ChunkType != 0x53474452 && ChunkType != 0x4E4C4452 && ChunkType != 0x4E4F4349 && ChunkType != 0x504D4452 )
    {
      goto LABEL_35;
    }
LABEL_34:
    (*(void (__thiscall **)(_DWORD, Data *, TESForm *))(**(_DWORD **)(TESDataHandler + 0xCD8) + 0x20))(
      *(_DWORD *)(TESDataHandler + 0xCD8),
      a1,
      this);
    goto LABEL_35;
  }
LABEL_37:
  v9 = *((int **)this + 7);
  while ( v9 )
  {
    if ( !*v9 )
      break;
    if ( sub_4A78A0(*v9, 1) )
    {
      v9 = (int *)v9[1];
    }
    else
    {
      v10 = (_DWORD *)*v9;
      BSSimpleList_Remove(*((_DWORD **)this + 7), (int)v10);
      if ( v10 )
      {
        sub_4A76F0(v10);
        FormHeapFree((unsigned int)v10);
      }
      v9 = *((int **)this + 7);
    }
  }
  return 1;
}
