char *__thiscall QuestStageItem_GetLogText(void *this, TESForm *a2)
{
  void *v2; // edi
  Data *OverrideFile; // eax
  Data *v4; // ebx
  UInt32 ChunkType; // eax
  unsigned int length; // esi
  char *result; // eax
  char v8[12]; // [esp+0h] [ebp-18h] BYREF
  void *v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+12h] [ebp-6h]
  char v11; // [esp+13h] [ebp-5h]

  v2 = this;
  v9 = this;
  if ( !a2 )
    return 0;
  if ( this == (void *)dword_B362FC )
    goto LABEL_18;
  dword_B362FC = (int)this;
  BSStringT_Set(&stru_B36300, 0, 0);
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  if ( !OverrideFile )
    return 0;
  if ( !*((_DWORD *)v2 + 0x17) )
    return 0;
  v4 = sub_4520F0(OverrideFile);
  if ( !TESFIle_JumpToRecord(v4, *((char **)v2 + 0x17))
    || (unsigned __int8)TESFile_GetRecordType(v4) != *(_BYTE *)(0xC * (unsigned __int8)a2->member.type + 0xB05E00) )
  {
    return 0;
  }
  v10 = 0;
  v11 = 0;
  ChunkType = TESFile_GetChunkType(v4);
  if ( !ChunkType )
  {
LABEL_18:
    result = stru_B36300.m_data;
    if ( stru_B36300.m_data )
      return result;
    return 0;
  }
  while ( 1 )
  {
    if ( ChunkType == 0x4D414E43 )
    {
      if ( v10 )
      {
        length = v4->currentChunk.length;
        _alloca_();
        TESFile_GetChunkData(v4, v8, length);
        BSStringT_Set(&stru_B36300, v8, 0);
        v2 = v9;
      }
    }
    else if ( ChunkType == 0x54445351 )
    {
      if ( v11 == *((_BYTE *)v2 + 0x60) )
        v10 = 1;
      ++v11;
    }
    result = stru_B36300.m_data;
    if ( stru_B36300.m_data )
      return result;
    if ( TESFile_GetNextChunk(v4) )
    {
      ChunkType = TESFile_GetChunkType(v4);
      if ( ChunkType )
        continue;
    }
    goto LABEL_18;
  }
}
