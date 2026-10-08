// Verified TESRoad RGRP loader resolves each 12-byte target XYZ through the road's coordinate lookup and rebuilds adjacency pointers. This differs from TESPathGrid's PGRR u16 point-index stream.
bool __thiscall TESRoad_LoadForm(TESRoad *this, Data *file)
{
  TESRoad *v2; // edi
  Data *v3; // ebx
  UInt32 i; // eax
  UInt32 v6; // esi
  UInt32 v7; // edi
  NiPoint3 *v8; // ebx
  TESConnectedPoint *v9; // eax
  TESConnectedPoint *v10; // esi
  unsigned int v11; // esi
  char *v12; // edi
  unsigned int v13; // ecx
  UInt32 v14; // eax
  NiPoint3 *v15; // ebx
  unsigned int v16; // esi
  bool v17; // zf
  const NiPoint3 *v18; // edi
  TESConnectedPoint *ConnectedPointByPosition; // eax
  unsigned int x_low; // ecx
  int v21[4]; // [esp+0h] [ebp-40h] BYREF
  char *v22; // [esp+10h] [ebp-30h]
  UInt32 v23; // [esp+14h] [ebp-2Ch]
  TESConnectedPoint *v24; // [esp+18h] [ebp-28h]
  UInt32 v25; // [esp+1Ch] [ebp-24h]
  NiPoint3 *position; // [esp+20h] [ebp-20h]
  unsigned int v27; // [esp+24h] [ebp-1Ch]
  TESRoad *v28; // [esp+28h] [ebp-18h]
  unsigned int v29; // [esp+2Ch] [ebp-14h]
  unsigned int v30; // [esp+3Ch] [ebp-4h]

  v2 = this; /*0x4e9ccb*/
  v28 = this; /*0x4e9ccd*/
  v3 = file; /*0x4e9cd0*/
  if ( (unsigned __int8)TESFile_GetRecordType(file) != 0x38 ) /*0x4e9cdc*/
    return 0; /*0x4e9cde*/
  TESFile_InitializeFormFromRecord(file, (TESForm *)v2, v21[0], v21[1]); /*0x4e9ce8*/
  TESForm_SetIsLinked((TESForm *)v2, 0); /*0x4e9cf1*/
  for ( i = TESFile_GetChunkType(file); i; i = TESFile_GetChunkType(v3) )
  {
    if ( i == 0x44494445 )
    {
      _alloca_(v21[0]); /*0x4e9ebf*/
      TESFile_GetChunkData(v3, (char *)v21, 0x200u); /*0x4e9ece*/
      (*(void (__thiscall **)(TESRoad *, int *))(*(_DWORD *)v2 + 0xD8))(v2, v21); /*0x4e9ede*/
    }
    else if ( i == 0x50524750 )
    {
      v23 = v3->currentChunk.length >> 4; /*0x4e9d32*/
      v6 = v23; /*0x4e9d26*/
      position = (NiPoint3 *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
      TESFile_GetChunkData(v3, (char *)position, 0x10 * v6); /*0x4e9d4e*/
      v7 = 0; /*0x4e9d6b*/
      v27 = FormHeapAlloc((unsigned __int64)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
      v29 = 0; /*0x4e9d75*/
      if ( v6 )
      {
        v8 = position; /*0x4e9d7e*/
        do /*0x4e9dce*/
        {
          v9 = (TESConnectedPoint *)FormHeapAlloc(0x28u); /*0x4e9d83*/
          v24 = v9; /*0x4e9d8b*/
          v10 = 0; /*0x4e9d8e*/
          v30 = 0; /*0x4e9d92*/
          if ( v9 ) /*0x4e9d95*/
            v10 = TESConnectedPoint_ctor(v9); /*0x4e9d9e*/
          v30 = 0xFFFFFFFF; /*0x4e9da3*/
          PathGraphNode_SetPosition(v10, v8); /*0x4e9daa*/
          TESRoad_AddConnectedPointIfMissing(v28, v10); /*0x4e9db3*/
          *(_DWORD *)(v27 + 4 * v7) = v10; /*0x4e9dbb*/
          v29 += LOBYTE(v8[1].x); /*0x4e9dc2*/
          ++v7; /*0x4e9dc5*/
          v8 = (NiPoint3 *)((char *)v8 + 0x10); /*0x4e9dc8*/
        }
        while ( v7 < v23 ); /*0x4e9dce*/
        v11 = v29; /*0x4e9dd0*/
        if ( v29 )
        {
          if ( TESFile_GetNextChunk(file) )
          {
            if ( TESFile_GetChunkType(file) == 0x52524750 )
            {
              v12 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v11) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v11);
              v24 = (TESConnectedPoint *)v12; /*0x4e9e27*/
              TESFile_GetChunkData(file, v12, 0xC * v11); /*0x4e9e2a*/
              v13 = 0; /*0x4e9e32*/
              v14 = 0; /*0x4e9e34*/
              v29 = 0; /*0x4e9e36*/
              v25 = 0; /*0x4e9e39*/
              v15 = position + 1; /*0x4e9e3c*/
              do /*0x4e9e91*/
              {
                v16 = 0; /*0x4e9e45*/
                v17 = LOBYTE(v15->x) == 0; /*0x4e9e47*/
                v22 = *(char **)(v27 + 4 * v14); /*0x4e9e4a*/
                if ( !v17 ) /*0x4e9e4d*/
                {
                  v18 = (const NiPoint3 *)&v12[0xC * v13]; /*0x4e9e52*/
                  do /*0x4e9e7a*/
                  {
                    ConnectedPointByPosition = TESRoad_FindConnectedPointByPosition(v28, v18); /*0x4e9e59*/
                    if ( ConnectedPointByPosition ) /*0x4e9e60*/
                      sub_4BEFE0(v22, (char *)ConnectedPointByPosition); /*0x4e9e66*/
                    x_low = LOBYTE(v15->x); /*0x4e9e6b*/
                    ++v29; /*0x4e9e6e*/
                    ++v16; /*0x4e9e72*/
                    ++v18; /*0x4e9e75*/
                  }
                  while ( v16 < x_low ); /*0x4e9e7a*/
                  v14 = v25; /*0x4e9e7c*/
                  v13 = v29; /*0x4e9e7f*/
                  v12 = (char *)v24; /*0x4e9e82*/
                }
                ++v14; /*0x4e9e85*/
                v15 = (NiPoint3 *)((char *)v15 + 0x10); /*0x4e9e88*/
                v25 = v14; /*0x4e9e8e*/
              }
              while ( v14 < v23 ); /*0x4e9e91*/
              FormHeapFree((unsigned int)v12); /*0x4e9e94*/
            }
          }
        }
        v3 = file; /*0x4e9e9c*/
      }
      FormHeapFree((unsigned int)position); /*0x4e9ea3*/
      FormHeapFree(v27); /*0x4e9eac*/
      v2 = v28; /*0x4e9eb1*/
    }
    if ( !TESFile_GetNextChunk(v3) ) /*0x4e9ee2*/
      break; /*0x4e9ee9*/
  }
  return 1; /*0x4e9eff*/
}
