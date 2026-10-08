void __thiscall TESDescription_LoadToCache(char **this, TESForm *a2, int a3)
{
  unsigned int v4; // eax
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // esi
  int v7[3]; // [esp+0h] [ebp-10h] BYREF

  if ( a2 )
  {
    if ( (char **)MEMORY[0xB33C04] != this
      || ((LOWORD(v4) = word_B33C0C, word_B33C0C != 0xFFFF)
        ? (v4 = (unsigned __int16)v4)
        : (v4 = strlen(MEMORY[0xB33C08].m_data)),
          !v4) )
    {
      MEMORY[0xB33C04] = (int)this; /*0x46a651*/
      BSStringT_Set(&MEMORY[0xB33C08], 0, 0); /*0x46a657*/
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x46a660*/
      if ( OverrideFile ) /*0x46a667*/
      {
        if ( *(this + 1) ) /*0x46a669*/
        {
          ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x46a676*/
          if ( TESFIle_JumpToRecord(ThreadSafeFile, *(this + 1)) ) /*0x46a67e*/
          {
            if ( (unsigned __int8)TESFile_GetRecordType(ThreadSafeFile) == *(_BYTE *)(0xC /*0x46a69c*/
                                                                                    * (unsigned __int8)a2->member.type
                                                                                    + 0xB05E00) )
            {
              while ( TESFile_GetChunkType(ThreadSafeFile) != a3 ) /*0x46a6aa*/
              {
                if ( !TESFile_GetNextChunk(ThreadSafeFile) ) /*0x46a6ae*/
                  goto LABEL_13; /*0x46a6b5*/
              }
              _alloca_(v7[0]); /*0x46a6bf*/
              TESFile_GetChunkData(ThreadSafeFile, (char *)v7, 0); /*0x46a6cb*/
              BSStringT_Set(&MEMORY[0xB33C08], (const char *)v7, 0); /*0x46a6d8*/
            }
          }
        }
      }
    }
  }
LABEL_13:
  TESDescription_LoadToCache_::Done((int)a2, a3); /*0x46a6b7*/
}
