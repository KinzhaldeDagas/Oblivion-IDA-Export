void __thiscall TESDescription_LoadToCache(char **this, TESForm *a2, int a3)
{
  unsigned int v4; // eax
  Data *OverrideFile; // eax
  Data *v6; // esi
  char v7[12]; // [esp+0h] [ebp-10h] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( a2 )
  {
    if ( (char **)TESDescription_lastDescription != this
      || ((LOWORD(v4) = TESDescription_CachedDesc.m_dataLen, TESDescription_CachedDesc.m_dataLen != (__int16)0xFFFF)
        ? (v4 = (unsigned __int16)v4)
        : (v4 = strlen(TESDescription_CachedDesc.m_data)),
          !v4) )
    {
      TESDescription_lastDescription = (int)this;
      BSStringT_Set(&TESDescription_CachedDesc, 0, 0);
      OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
      if ( OverrideFile )
      {
        if ( *(this + 1) )
        {
          v6 = sub_4520F0(OverrideFile);
          if ( TESFIle_JumpToRecord(v6, *(this + 1)) )
          {
            if ( (unsigned __int8)TESFile_GetRecordType(v6) == *(_BYTE *)(0xC * (unsigned __int8)a2->member.type
                                                                        + 0xB05E00) )
            {
              while ( TESFile_GetChunkType(v6) != a3 )
              {
                if ( !TESFile_GetNextChunk(v6) )
                  goto LABEL_13;
              }
              _alloca_();
              TESFile_GetChunkData(v6, v7, 0);
              BSStringT_Set(&TESDescription_CachedDesc, v7, 0);
            }
          }
        }
      }
    }
  }
LABEL_13:
  TESDescription_LoadToCache_::Done((int)&savedregs, (int)a2, a3);
}
