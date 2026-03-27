char __thiscall sub_5301E0(TESForm *this, Data *a1)
{
  signed int i; // eax
  Data *OverrideFile; // eax
  int *v6; // eax
  int *v7; // esi
  TESFullName *v8; // eax
  int v9[3]; // [esp+0h] [ebp-14h] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x39 )
    return 0;
  TESFile_InitializeFormFromRecord(a1, this, v9[0], v9[1]);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    if ( i > 0x49545351 )
    {
      if ( i == 0x4C4C5546 )
      {
        if ( this )
          v8 = (TESFullName *)(this + 1);
        else
          v8 = 0;
        TESFullname_Load(v8, a1);
      }
      else if ( i == 0x58444958 )
      {
        TESFile_GetChunkData4(a1, (char *)this + 0x30);
      }
    }
    else
    {
      switch ( i )
      {
        case 0x49545351:
          v10 = 0;
          TESFile_GetChunkData4(a1, (char *)&v10);
          OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
          TESForm_ResolveFormID((UInt32 *)&v10, OverrideFile);
          v6 = sub_52FC40((int **)this, v10, 0);
          v7 = v6;
          if ( v6 )
          {
            sub_452910((unsigned int *)v6 + 1, v6[3] + 0x64);
            v7[6] = 0xA;
          }
          break;
        case 0x41544144:
          TESFile_GetChunkData(a1, (char *)this + 0x24, 1u);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a1, (char *)v9, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v9);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  dword_B3650C = (int)this;
  return 1;
}
