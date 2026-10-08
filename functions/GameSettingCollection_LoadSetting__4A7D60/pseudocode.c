// Verified generic TESFile GameSettingCollection value loader. On a DATA chunk it branches by the registered setting's type; string-valued settings are read and passed to Setting_SetStringValue. This proves named settings can be updated through the generic file-record path, not that a blood-particle effect selects Extra1/Extra2.
char __thiscall GameSettingCollection_LoadSetting(Data **this, int a2)
{
  Data *v2; // esi
  int v3; // eax
  int v4; // eax
  int v6[3]; // [esp+0h] [ebp-14h] BYREF
  char ChunkData; // [esp+Fh] [ebp-5h]

  v2 = *(this + 0x42); /*0x4a7d72*/
  if ( !v2 ) /*0x4a7d7d*/
    return 0; /*0x4a7d7d*/
  TESFile_GetNextChunk(*(this + 0x42)); /*0x4a7d81*/
  if ( TESFile_GetChunkType(v2) != 0x41544144 ) /*0x4a7d92*/
    return 0; /*0x4a7df1*/
  v3 = Setting_GetTypeFromName(*(char **)(a2 + 4)) - 3; /*0x4a7da3*/
  if ( !v3 ) /*0x4a7da6*/
    return TESFile_GetChunkData4(v2, (char *)a2); /*0x4a7da6*/
  v4 = v3 - 2; /*0x4a7da8*/
  if ( !v4 ) /*0x4a7dab*/
    return TESFile_GetChunkData4(v2, (char *)a2); /*0x4a7ddc*/
  if ( v4 != 1 ) /*0x4a7db0*/
    return 0; /*0x4a7ded*/
  _alloca_(v6[0]); /*0x4a7db8*/
  ChunkData = TESFile_GetChunkData(v2, (char *)v6, 0); /*0x4a7dcc*/
  Setting_SetStringValue((const char **)a2, (int)v6, v6[0], v6[1], v6[2]); /*0x4a7dcf*/
  return ChunkData; /*0x4a7df6*/
}
