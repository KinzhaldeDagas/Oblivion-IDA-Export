char __thiscall sub_51C210(TESForm *this, Data *a2)
{
  signed int i; // eax
  TESFullName *v5; // eax
  const char *v6; // eax
  int v7[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 5 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v7[0], v7[1]);
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
  {
    if ( i > 0x44494445 )
    {
      if ( i == 0x4C4C5546 )
      {
        if ( this )
          v5 = (TESFullName *)(this + 1);
        else
          v5 = 0;
        TESFullname_Load(v5, a2);
      }
      else if ( i == 0x4E4F4349 )
      {
        if ( this )
          TESTexture_Load((int)this + 0x2C, a2);
        else
          TESTexture_Load(0, a2);
      }
    }
    else
    {
      switch ( i )
      {
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v7, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v7);
          break;
        case 0x41544144:
          TESForm_LoadGenericComponents(this, a2, (char *)this + 0x38, 0x34u);
          break;
        case 0x43534544:
          if ( this )
            TESDescription_Load((int)this + 0x24, (int)a2);
          else
            TESDescription_Load(0, (int)a2);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) )
      break;
  }
  if ( !sub_51C030((unsigned int *)this) )
  {
    v6 = this->vtbl->GetEditorName(this);
    PrintError("Class %s contains invalid data. Make sure all attributes and skills are unique.", v6);
  }
  return 1;
}
