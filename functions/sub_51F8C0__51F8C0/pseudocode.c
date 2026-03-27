char __thiscall sub_51F8C0(int this, Data *a2)
{
  _WORD *v3; // edi
  signed int ChunkType; // eax
  BSStringT *v5; // ecx
  char *v6; // edi
  _WORD *v7; // eax
  _WORD *v8; // eax
  int v10[4]; // [esp+0h] [ebp-24h] BYREF
  _WORD *v11; // [esp+10h] [ebp-14h]
  unsigned int v12; // [esp+20h] [ebp-4h]

  v3 = 0;
  v11 = 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v10[0], v10[1]);
  while ( 1 )
  {
    ChunkType = TESFile_GetChunkType(a2);
    if ( ChunkType > 0x4D414E46 )
    {
      switch ( ChunkType )
      {
        case 0x4D414E49:
          if ( v3 )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v10, 0);
            v5 = (BSStringT *)(v11 + 0xA);
            goto LABEL_28;
          }
          break;
        case 0x4D414E4D:
          if ( v3 )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)v10, 0);
            v5 = (BSStringT *)v11;
            goto LABEL_28;
          }
          break;
        case 0x4D414E52:
          v7 = (_WORD *)FormHeapAlloc(0x1Cu);
          v11 = v7;
          v12 = 0;
          if ( v7 )
            v8 = sub_51F570(v7);
          else
            v8 = 0;
          v12 = 0xFFFFFFFF;
          v11 = v8;
          BSSimpleList_PushBack((_DWORD *)(this + 0x3C), (int)v8);
          break;
        case 0x4D414E58:
          v6 = (char *)FormHeapAlloc(8u);
          TESFile_GetChunkData(a2, v6, 8u);
          BSSimpleList_PushBack((_DWORD *)(this + 0x28), (int)v6);
          break;
        default:
          break;
      }
    }
    else if ( ChunkType == 0x4D414E46 )
    {
      if ( v3 )
      {
        _alloca_();
        TESFile_GetChunkData(a2, (char *)v10, 0);
        v5 = (BSStringT *)(v11 + 4);
LABEL_28:
        BSStringT_Set(v5, (const char *)v10, 0);
      }
    }
    else if ( ChunkType > 0x4C4C5546 )
    {
      if ( ChunkType == 0x4D414E43 )
        TESFile_GetChunkData4(a2, (char *)(this + 0x38));
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4C4C5546:
          if ( this )
            TESFullname_Load((TESFullName *)(this + 0x18), a2);
          else
            TESFullname_Load(0, a2);
          break;
        case 0x41544144:
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x34), 1u);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v10, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v10);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) )
      return 1;
    v3 = v11;
  }
}
