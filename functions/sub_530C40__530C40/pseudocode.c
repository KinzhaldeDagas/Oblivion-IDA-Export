int *__thiscall sub_530C40(TESForm *this)
{
  TESForm *v1; // ebx
  Data *OverrideFile; // eax
  char *v3; // esi
  Data *v4; // edi
  UInt32 i; // eax
  BSStringT *v6; // eax
  int *v7; // eax
  unsigned int length; // esi
  char v10[16]; // [esp+0h] [ebp-28h] BYREF
  TESForm *v11; // [esp+10h] [ebp-18h]
  BSStringT *v12; // [esp+14h] [ebp-14h]
  unsigned int v13; // [esp+24h] [ebp-4h]

  v1 = this;
  v11 = this;
  if ( this != (TESForm *)dword_B36528 )
  {
    dword_B36528 = (int)this;
    sub_530620();
    OverrideFile = TESForm_GetOverrideFile(v1, 0xFFFFFFFF);
    v3 = 0;
    if ( OverrideFile )
    {
      if ( *(_DWORD *)&v1[2].member.type )
      {
        v4 = sub_4520F0(OverrideFile);
        if ( TESFIle_JumpToRecord(v4, *(char **)&v1[2].member.type) )
        {
          if ( (unsigned __int8)TESFile_GetRecordType(v4) == *(_BYTE *)(0xC * (unsigned __int8)v1->member.type + 0xB05E00) )
          {
            v12 = 0;
            for ( i = TESFile_GetChunkType(v4); i; v3 = 0 )
            {
              if ( i == 0x314D414E )
              {
                if ( v12 )
                {
                  length = v4->currentChunk.length;
                  _alloca_();
                  TESFile_GetChunkData(v4, v10, length);
                  BSStringT_Set(v12 + 2, v10, 0);
                  v1 = v11;
                }
              }
              else if ( i == 0x54445254 )
              {
                v6 = (BSStringT *)FormHeapAlloc(0x18u);
                v12 = v6;
                v13 = 0;
                if ( v6 )
                  v3 = (char *)sub_52E150(v6);
                v13 = 0xFFFFFFFF;
                v12 = (BSStringT *)v3;
                sub_52E0D0(v3, v4);
                v7 = sub_530C40(v1);
                BSSimpleList_PushBack(v7, (int)v3);
              }
              if ( !TESFile_GetNextChunk(v4) )
                break;
              i = TESFile_GetChunkType(v4);
            }
          }
        }
      }
    }
  }
  return &dword_B36580;
}
