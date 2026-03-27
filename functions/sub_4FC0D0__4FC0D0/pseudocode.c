char __thiscall sub_4FC0D0(_DWORD *this, Data *a1)
{
  _DWORD *v2; // ebx
  signed int ChunkType; // edi
  int length; // edi
  FreeEntry *v6; // ebx
  double *v7; // eax
  double *v8; // edi
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // ecx
  const char *v12; // eax
  const char *v13; // [esp-4h] [ebp-34h]
  int v14[4]; // [esp+0h] [ebp-30h] BYREF
  char v15[4]; // [esp+10h] [ebp-20h] BYREF
  int v16; // [esp+14h] [ebp-1Ch] BYREF
  BSStringT *v17; // [esp+18h] [ebp-18h]
  _DWORD *v18; // [esp+1Ch] [ebp-14h]
  unsigned int v19; // [esp+2Ch] [ebp-4h]
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v2 = this;
  v18 = this;
  v17 = 0;
  if ( TESFile_GetRecordType(a1) != 0xD )
    return 0;
  TESFile_InitializeFormFromRecord(a1, (TESForm *)v2, v14[0], v14[1]);
  ChunkType = TESFile_GetChunkType(a1);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x4F524353 )
      {
        switch ( ChunkType )
        {
          case 0x52484353:
            TESFile_GetChunkData(a1, (char *)v2 + 0x18, 0);
            break;
          case 0x52564353:
            if ( v17 )
            {
              _alloca_();
              TESFile_GetChunkData(a1, (char *)v14, 0x200u);
              BSStringT_Set(v17 + 3, (const char *)v14, 0);
            }
            break;
          case 0x56524353:
LABEL_20:
            v9 = FormHeapAlloc(0x10u);
            v10 = 0;
            if ( v9 )
            {
              *(_DWORD *)v9 = 0;
              *(_WORD *)(v9 + 4) = 0;
              *(_WORD *)(v9 + 6) = 0;
              *(_DWORD *)(v9 + 8) = 0;
              *(_DWORD *)(v9 + 0xC) = 0;
              v10 = v9;
            }
            TESFile_GetChunkData4(a1, (char *)&v16);
            v11 = v18 + 0x10;
            if ( ChunkType == 0x4F524353 )
              *(_DWORD *)(v10 + 8) = v16;
            else
              *(_DWORD *)(v10 + 0xC) = v16;
            BSSimpleList_PushBack(v11, v10);
            v2 = v18;
            break;
        }
      }
      else
      {
        if ( ChunkType == 0x4F524353 )
          goto LABEL_20;
        if ( ChunkType > 0x44534C53 )
        {
          if ( ChunkType == 0x4D414E52 )
            TESFile_GetChunkData4(a1, v15);
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x44534C53:
              v7 = (double *)FormHeapAlloc(0x20u);
              v17 = (BSStringT *)v7;
              v8 = 0;
              v19 = 0;
              if ( v7 )
                v8 = sub_517A80(v7);
              v19 = 0xFFFFFFFF;
              v17 = (BSStringT *)v8;
              sub_517A50(v8, (int *)a1);
              BSSimpleList_PushBack(v2 + 0x12, (int)v8);
              break;
            case 0x41444353:
              length = a1->currentChunk.length;
              v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, (unsigned int)length | 0x100000000LL, v14[0]);
              _memset(v6, 0, length);
              v18[0xC] = v6;
              _memset(v6, 0, length);
              TESFile_GetChunkData(a1, (char *)v18[0xC], 0);
              v2 = v18;
              break;
            case 0x44494445:
              _alloca_();
              TESFile_GetChunkData(a1, (char *)v14, 0x200u);
              (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 0xD8))(v2, v14);
              break;
          }
        }
      }
      if ( TESFile_GetNextChunk(a1) )
      {
        ChunkType = TESFile_GetChunkType(a1);
        if ( ChunkType )
          continue;
      }
      break;
    }
  }
  if ( !v2[0xC] )
  {
    v12 = (const char *)(*(int (__thiscall **)(_DWORD *, char *))(*v2 + 0xD4))(v2, a1->name);
    PrintError("Script '%s' in file '%s' has not been compiled.\r\n", v12, v13);
  }
  return 1;
}
