char __thiscall sub_52A570(int this, Data *a2)
{
  int v4; // esi
  signed int ChunkType; // eax
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  char v9; // al
  char *v10; // ecx
  char *v11; // eax
  char *v12; // esi
  int v13[4]; // [esp+0h] [ebp-34h] BYREF
  int v14; // [esp+10h] [ebp-24h] BYREF
  _DWORD *v15; // [esp+14h] [ebp-20h]
  char *v16; // [esp+18h] [ebp-1Ch]
  int v17; // [esp+1Ch] [ebp-18h]
  char v18; // [esp+23h] [ebp-11h]
  int v19; // [esp+30h] [ebp-4h]

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x3B )
    return 0;
  v4 = 0;
  v16 = 0;
  v17 = 0;
  v15 = 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v13[0], v13[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  v18 = 0;
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType > 0x4D414E43 )
    {
      if ( ChunkType > 0x54445351 )
      {
        if ( ChunkType != 0x54445443 )
        {
          if ( ChunkType == 0x58444E49 )
          {
            v11 = (char *)FormHeapAlloc(0xCu);
            v16 = v11;
            v19 = 1;
            if ( v11 )
              v12 = sub_52AC20(v11);
            else
              v12 = 0;
            v19 = 0xFFFFFFFF;
            v16 = v12;
            sub_52AC60(v12, (int *)a2);
            BSSimpleList_PushBack((_DWORD *)(this + 0x40), (int)v12);
            v4 = v17;
          }
          goto LABEL_47;
        }
LABEL_46:
        ConditionList_LoadCondition((int *)a2);
        goto LABEL_47;
      }
      switch ( ChunkType )
      {
        case 0x54445351:
          if ( v16 )
          {
            v8 = FormHeapAlloc(0x6Cu);
            v17 = v8;
            v19 = 2;
            if ( v8 )
              v4 = sub_52ACC0(v8);
            else
              v4 = 0;
            v19 = 0xFFFFFFFF;
            v17 = v4;
            sub_52B1F0((void **)v4, (int *)a2);
            v9 = v18;
            v10 = v16;
            *(_BYTE *)(v4 + 0x60) = v18;
            v18 = v9 + 1;
            BSSimpleList_PushBack((_DWORD *)v10 + 1, v4);
          }
          break;
        case 0x4E4F4349:
          if ( this )
            TESTexture_Load(this + 0x24, a2);
          else
            TESTexture_Load(0, a2);
          break;
        case 0x4F524353:
        case 0x52484353:
          goto LABEL_30;
      }
LABEL_47:
      if ( TESFile_GetNextChunk(a2) )
      {
        ChunkType = TESFile_GetChunkType(a2);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
    if ( ChunkType == 0x4D414E43 )
    {
      if ( v4 )
        *(_BYTE *)(v4 + 0x61) = 1;
      goto LABEL_47;
    }
    if ( ChunkType > 0x41545351 )
    {
      switch ( ChunkType )
      {
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v13, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v13);
          v4 = v17;
          break;
        case 0x49524353:
          v14 = 0;
          TESFile_GetChunkData4(a2, (char *)&v14);
          *(_DWORD *)(this + 0x1C) = v14;
          TESScriptableForm_Link(this + 0x18, (TESForm *)this);
          break;
        case 0x4C4C5546:
          if ( this )
            TESFullname_Load((TESFullName *)(this + 0x30), a2);
          else
            TESFullname_Load(0, a2);
          break;
      }
      goto LABEL_47;
    }
    if ( ChunkType == 0x41545351 )
    {
      v16 = 0;
      v17 = 0;
      v6 = FormHeapAlloc(0x14u);
      v15 = (_DWORD *)v6;
      v7 = 0;
      v19 = 0;
      if ( v6 )
        v7 = (_DWORD *)sub_52B310(v6);
      v19 = 0xFFFFFFFF;
      v15 = v7;
      sub_52B3F0(v7, (int *)a2);
      BSSimpleList_PushBack((_DWORD *)(this + 0x48), (int)v7);
      v4 = v17;
      goto LABEL_47;
    }
    if ( ChunkType == 0x41444353 )
    {
LABEL_30:
      if ( v4 )
        sub_52B1F0((void **)v4, (int *)a2);
      goto LABEL_47;
    }
    if ( ChunkType != 0x41445443 )
    {
      if ( ChunkType == 0x41544144 )
        TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 2u);
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  return 1;
}
