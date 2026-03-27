char __userpurge sub_530FB0@<al>(unsigned int a1@<ecx>, int a2@<ebp>, TESForm ArgList)
{
  Data *vtbl; // ebx
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

  vtbl = (Data *)ArgList.vtbl;
  if ( (unsigned __int8)TESFile_GetRecordType((Data *)ArgList.vtbl) != 0x3A )
    return 0;
  if ( !sub_44FAB0(vtbl) )
    *(_DWORD *)(a1 + 0x34) = vtbl->currentRecordOffset;
  ArgList.vtbl = (TESFormVtbl *)0xFFFFFFFF;
  v14 = 0;
  TESFile_InitializeFormFromRecord(vtbl, (TESForm *)a1, a2, v13);
  ChunkType = TESFile_GetChunkType(vtbl);
  if ( ChunkType )
  {
    while ( 1 )
    {
      if ( ChunkType > 0x49545351 )
      {
        if ( ChunkType == 0x4D414E50 )
        {
          TESFile_GetChunkData4(vtbl, (char *)&ArgList);
          if ( ArgList.vtbl )
            TESForm_ResolveFormID((UInt32 *)&ArgList, vtbl);
          goto LABEL_37;
        }
        if ( ChunkType != 0x54445443 )
        {
          if ( ChunkType == 0x544C4354 )
          {
            if ( !*(_DWORD *)(a1 + 0x30) )
            {
              v8 = (_DWORD *)FormHeapAlloc(0x10u);
              if ( v8 )
              {
                *v8 = 0;
                v8[1] = 0;
                v8[2] = 0;
                v8[3] = 0;
              }
              else
              {
                v8 = 0;
              }
              *(_DWORD *)(a1 + 0x30) = v8;
            }
            v17 = 0;
            TESFile_GetChunkData4(vtbl, (char *)&v17);
            BSSimpleList_PushBack((_DWORD *)(*(_DWORD *)(a1 + 0x30) + 8), v17);
          }
          goto LABEL_37;
        }
      }
      else
      {
        if ( ChunkType == 0x49545351 )
        {
          TESFile_GetChunkData4(vtbl, (char *)&v14);
          TESForm_ResolveFormID((UInt32 *)&v14, vtbl);
          goto LABEL_37;
        }
        if ( ChunkType > 0x454D414E )
        {
          if ( ChunkType == 0x464C4354 )
          {
            if ( !*(_DWORD *)(a1 + 0x30) )
            {
              v7 = (_DWORD *)FormHeapAlloc(0x10u);
              if ( v7 )
              {
                *v7 = 0;
                v7[1] = 0;
                v7[2] = 0;
                v7[3] = 0;
              }
              else
              {
                v7 = 0;
              }
              *(_DWORD *)(a1 + 0x30) = v7;
            }
            v16 = 0;
            TESFile_GetChunkData4(vtbl, (char *)&v16);
            BSSimpleList_PushBack(*(_DWORD **)(a1 + 0x30), v16);
          }
          goto LABEL_37;
        }
        if ( ChunkType == 0x454D414E )
        {
          v15 = 0;
          TESFile_GetChunkData4(vtbl, (char *)&v15);
          BSSimpleList_PushBack((_DWORD *)(a1 + 0x28), v15);
          goto LABEL_37;
        }
        if ( ChunkType != 0x41445443 )
        {
          if ( ChunkType == 0x41544144 )
          {
            TESFile_GetChunkData(vtbl, (char *)(a1 + 0x23), 3u);
            if ( *(char *)(a1 + 0x23) >= 7 )
              (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)a1 + 0x8C))(a1, 1);
            if ( *(_BYTE *)(a1 + 0x23) == 1 )
              sub_530BA0((unsigned int *)a1, 0);
          }
          goto LABEL_37;
        }
      }
      ConditionList_LoadCondition((int *)vtbl);
LABEL_37:
      if ( TESFile_GetNextChunk(vtbl) )
      {
        ChunkType = TESFile_GetChunkType(vtbl);
        if ( ChunkType )
          continue;
      }
      break;
    }
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x20) == 0 && !sub_52FD20((int **)dword_B3650C, v14, a1, (int)ArgList.vtbl) )
  {
    v9 = *(_DWORD *)(a1 + 0xC);
    v10 = (const char *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_B3650C + 0xD4))(
                          dword_B3650C,
                          *(_DWORD *)(dword_B3650C + 0xC),
                          v14);
    PrintError("Unable to insert topic info (%08X) into topic '%s' (%08X), quest (%08X).", v9, v10, v11, v12);
  }
  return 1;
}
