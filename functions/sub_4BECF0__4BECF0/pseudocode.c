char __thiscall sub_4BECF0(TESForm *this, Data *a1)
{
  signed int i; // eax
  char v5; // bl
  bool v6; // cc
  const char *v7; // eax
  int v8[3]; // [esp+0h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x2E )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v8[0], v8[1]);
  TESForm_SetIsLinked(this, 0);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    if ( i > 0x4D414E50 )
    {
      if ( i == 0x4D414E54 )
      {
        TESFile_GetChunkData(a1, (char *)this + 0x50, 6u);
      }
      else if ( i == 0x54534C57 )
      {
        v5 = bDisableWarning_MESSAGES;
        v9 = dword_B34D88;
        bDisableWarning_MESSAGES = 1;
        sub_4EEDD0((_DWORD *)this + 0xC, (int)a1, (int)this);
        v6 = dword_B34D88 <= v9;
        bDisableWarning_MESSAGES = v5;
        if ( !v6 )
        {
          v7 = this->vtbl->GetEditorName(this);
          PrintError("Warnings were encountered while loading weather list chunk from climate %s", v7);
        }
      }
    }
    else if ( i >= 0x4D414E46 )
    {
      if ( i - 0x4D414E46 < 2 )
        TESTexture_Load((int)this + 0xC * i + 0x60F054F0, a1);
    }
    else if ( i == 0x44494445 )
    {
      _alloca_();
      TESFile_GetChunkData(a1, (char *)v8, 0x200u);
      this->vtbl->SetEditorID(this, (const char *)v8);
    }
    else if ( i == 0x4C444F4D )
    {
      TESModel_Load((float *)this + 6, a1);
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  return 1;
}
