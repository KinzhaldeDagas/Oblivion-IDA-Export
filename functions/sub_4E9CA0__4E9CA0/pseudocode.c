char __thiscall sub_4E9CA0(TESForm *this, Data *a1)
{
  TESForm *v2; // edi
  Data *v3; // ebx
  UInt32 i; // eax
  UInt32 v6; // esi
  UInt32 v7; // edi
  char *v8; // ebx
  float *v9; // eax
  float *v10; // esi
  unsigned int v11; // esi
  char *v12; // edi
  unsigned int v13; // ecx
  UInt32 v14; // eax
  char *v15; // ebx
  unsigned int v16; // esi
  bool v17; // zf
  float *v18; // edi
  char *v19; // eax
  unsigned int v20; // ecx
  int v21[4]; // [esp+0h] [ebp-40h] BYREF
  char *v22; // [esp+10h] [ebp-30h]
  UInt32 v23; // [esp+14h] [ebp-2Ch]
  char *v24; // [esp+18h] [ebp-28h]
  UInt32 v25; // [esp+1Ch] [ebp-24h]
  char *v26; // [esp+20h] [ebp-20h]
  unsigned int v27; // [esp+24h] [ebp-1Ch]
  TESForm *v28; // [esp+28h] [ebp-18h]
  unsigned int v29; // [esp+2Ch] [ebp-14h]
  unsigned int v30; // [esp+3Ch] [ebp-4h]

  v2 = this;
  v28 = this;
  v3 = a1;
  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x38 )
    return 0;
  TESFile_InitializeFormFromRecord(a1, v2, v21[0], v21[1]);
  TESForm_SetIsLinked(v2, 0);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(v3) )
  {
    if ( i == 0x44494445 )
    {
      _alloca_();
      TESFile_GetChunkData(v3, (char *)v21, 0x200u);
      v2->vtbl->SetEditorID(v2, (const char *)v21);
    }
    else if ( i == 0x50524750 )
    {
      v23 = v3->currentChunk.length >> 4;
      v6 = v23;
      v26 = (char *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
      TESFile_GetChunkData(v3, v26, 0x10 * v6);
      v7 = 0;
      v27 = FormHeapAlloc((unsigned __int64)v6 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v6);
      v29 = 0;
      if ( v6 )
      {
        v8 = v26;
        do
        {
          v9 = (float *)FormHeapAlloc(0x28u);
          v24 = (char *)v9;
          v10 = 0;
          v30 = 0;
          if ( v9 )
            v10 = sub_4BEF70(v9);
          v30 = 0xFFFFFFFF;
          sub_4BEF50(v10, v8);
          sub_4E9060((char *)v28, (signed int)v10);
          *(_DWORD *)(v27 + 4 * v7) = v10;
          v29 += (unsigned __int8)v8[0xC];
          ++v7;
          v8 += 0x10;
        }
        while ( v7 < v23 );
        v11 = v29;
        if ( v29 )
        {
          if ( TESFile_GetNextChunk(a1) )
          {
            if ( TESFile_GetChunkType(a1) == 0x52524750 )
            {
              v12 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v11) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v11);
              v24 = v12;
              TESFile_GetChunkData(a1, v12, 0xC * v11);
              v13 = 0;
              v14 = 0;
              v29 = 0;
              v25 = 0;
              v15 = v26 + 0xC;
              do
              {
                v16 = 0;
                v17 = *v15 == 0;
                v22 = *(char **)(v27 + 4 * v14);
                if ( !v17 )
                {
                  v18 = (float *)&v12[0xC * v13];
                  do
                  {
                    v19 = (char *)sub_4E8D00(v28, v18);
                    if ( v19 )
                      sub_4BEFE0(v22, v19);
                    v20 = (unsigned __int8)*v15;
                    ++v29;
                    ++v16;
                    v18 += 3;
                  }
                  while ( v16 < v20 );
                  v14 = v25;
                  v13 = v29;
                  v12 = v24;
                }
                ++v14;
                v15 += 0x10;
                v25 = v14;
              }
              while ( v14 < v23 );
              FormHeapFree((unsigned int)v12);
            }
          }
        }
        v3 = a1;
      }
      FormHeapFree((unsigned int)v26);
      FormHeapFree(v27);
      v2 = v28;
    }
    if ( !TESFile_GetNextChunk(v3) )
      break;
  }
  return 1;
}
