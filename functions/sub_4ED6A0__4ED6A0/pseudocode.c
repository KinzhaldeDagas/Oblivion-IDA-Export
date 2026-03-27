char __thiscall sub_4ED6A0(int this, Data *a2)
{
  signed int i; // eax
  int v5; // eax
  int v6; // eax
  int v7[3]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x42 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v7[0], v7[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
  {
    if ( i > 0x4D414E47 )
    {
      v5 = i - 0x4D414E4D;
      if ( v5 )
      {
        v6 = v5 - 6;
        if ( v6 )
        {
          if ( v6 == 1 )
            TESTexture_Load(this + 0x20, a2);
        }
        else
        {
          v8 = 0;
          TESFile_GetChunkData4(a2, (char *)&v8);
          *(_DWORD *)(this + 0x38) = v8;
        }
      }
      else
      {
        _alloca_();
        TESFile_GetChunkData(a2, (char *)v7, 0);
        BSStringT_Set((BSStringT *)(this + 0x30), (const char *)v7, 0);
      }
    }
    else if ( i == 0x4D414E47 )
    {
      TESFile_GetChunkData(a2, (char *)(this + 0xA0), 0xCu);
    }
    else if ( i > 0x4D414E41 )
    {
      if ( i == 0x4D414E46 )
        TESFile_GetChunkData(a2, (char *)(this + 0x2D), 1u);
    }
    else
    {
      switch ( i )
      {
        case 0x4D414E41:
          TESFile_GetChunkData(a2, (char *)(this + 0x2C), 1u);
          break;
        case 0x41544144:
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 0x64u);
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v7, 0x200u);
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) )
      break;
  }
  return 1;
}
