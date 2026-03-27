char __thiscall GameSettingCollection_LoadSetting(Data **this, int a2)
{
  Data *v2; // esi
  int v3; // eax
  int v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  char ChunkData; // [esp+Fh] [ebp-5h]

  v2 = *(this + 0x42);
  if ( !v2 )
    return 0;
  TESFile_GetNextChunk(*(this + 0x42));
  if ( TESFile_GetChunkType(v2) != 0x41544144 )
    return 0;
  v3 = Setting_GetTypeFromName(*(char **)(a2 + 4)) - 3;
  if ( !v3 )
    return TESFile_GetChunkData4(v2, (char *)a2);
  v4 = v3 - 2;
  if ( !v4 )
    return TESFile_GetChunkData4(v2, (char *)a2);
  if ( v4 != 1 )
    return 0;
  _alloca_();
  ChunkData = TESFile_GetChunkData(v2, (char *)v6, 0);
  Setting_SetStringValue((const char **)a2, (int)v6, v6[0], v6[1], v6[2]);
  return ChunkData;
}
