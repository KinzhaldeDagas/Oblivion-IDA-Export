char *__thiscall QuestStageItem_GetLogText(void *this, TESForm *a2)
{
  void *v2; // edi
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // ebx
  UInt32 ChunkType; // eax
  unsigned int length; // esi
  char *result; // eax
  int v8[3]; // [esp+0h] [ebp-18h] BYREF
  void *v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+12h] [ebp-6h]
  char v11; // [esp+13h] [ebp-5h]

  v2 = this; /*0x52af58*/
  v9 = this; /*0x52af5a*/
  if ( !a2 ) /*0x52af5d*/
    return 0; /*0x52af5d*/
  if ( this == (void *)unk_B362FC ) /*0x52af69*/
    goto LABEL_18; /*0x52af69*/
  unk_B362FC = (int)this; /*0x52af78*/
  BSStringT_Set(&unk_B36300, 0, 0); /*0x52af7e*/
  OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x52af87*/
  if ( !OverrideFile ) /*0x52af8e*/
    return 0; /*0x52af8e*/
  if ( !*((_DWORD *)v2 + 0x17) ) /*0x52af94*/
    return 0; /*0x52af94*/
  ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x52afa5*/
  if ( !TESFIle_JumpToRecord(ThreadSafeFile, *((char **)v2 + 0x17)) /*0x52afcf*/
    || (unsigned __int8)TESFile_GetRecordType(ThreadSafeFile) != *(_BYTE *)(0xC * (unsigned __int8)a2->member.type
                                                                          + 0xB05E00) )
  {
    return 0; /*0x52b05e*/
  }
  v10 = 0; /*0x52afd7*/
  v11 = 0; /*0x52afdb*/
  ChunkType = TESFile_GetChunkType(ThreadSafeFile); /*0x52afdf*/
  if ( !ChunkType ) /*0x52afe6*/
  {
LABEL_18:
    result = unk_B36300.m_data; /*0x52b055*/
    if ( unk_B36300.m_data ) /*0x52b055*/
      return result; /*0x52b05c*/
    return 0; /*0x52b05c*/
  }
  while ( 1 ) /*0x52afed*/
  {
    if ( ChunkType == 0x4D414E43 ) /*0x52afed*/
    {
      if ( v10 ) /*0x52b00c*/
      {
        length = ThreadSafeFile->currentChunk.length; /*0x52b00e*/
        _alloca_(v8[0]); /*0x52b016*/
        TESFile_GetChunkData(ThreadSafeFile, (char *)v8, length); /*0x52b021*/
        BSStringT_Set(&unk_B36300, (const char *)v8, 0); /*0x52b02e*/
        v2 = v9; /*0x52b033*/
      }
    }
    else if ( ChunkType == 0x54445351 ) /*0x52aff4*/
    {
      if ( v11 == *((_BYTE *)v2 + 0x60) ) /*0x52affc*/
        v10 = 1; /*0x52affe*/
      ++v11; /*0x52b002*/
    }
    result = unk_B36300.m_data; /*0x52b036*/
    if ( unk_B36300.m_data ) /*0x52b036*/
      return result; /*0x52b063*/
    if ( TESFile_GetNextChunk(ThreadSafeFile) ) /*0x52b041*/
    {
      ChunkType = TESFile_GetChunkType(ThreadSafeFile); /*0x52b04c*/
      if ( ChunkType ) /*0x52b053*/
        continue; /*0x52b053*/
    }
    goto LABEL_18; /*0x52b053*/
  }
}
