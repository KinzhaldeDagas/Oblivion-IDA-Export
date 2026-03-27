char __thiscall sub_51ED90(int this, Data *a2)
{
  signed int i; // eax
  int v5; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 8 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]);
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
  {
    if ( i > 0x4C4C5546 )
    {
      if ( i == 0x4E4F4349 )
      {
        if ( this )
          v5 = this + 0x24;
        else
          v5 = 0;
        TESTexture_Load(v5, a2);
      }
    }
    else
    {
      switch ( i )
      {
        case 0x4C4C5546:
          if ( this )
            TESFullname_Load((TESFullName *)(this + 0x18), a2);
          else
            TESFullname_Load(0, a2);
          break;
        case 0x41544144:
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x30), 1u);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v6, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) )
      break;
  }
  return 1;
}
