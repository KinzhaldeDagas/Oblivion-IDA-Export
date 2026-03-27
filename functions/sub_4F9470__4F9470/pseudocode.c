char __thiscall sub_4F9470(void *this, Data *a1)
{
  UInt32 i; // eax
  int v5[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a1) != 4 )
    return 0;
  TESFile_InitializeFormFromRecord(a1, (TESForm *)this, v5[0], v5[1]);
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) )
  {
    switch ( i )
    {
      case 0x44494445u:
        _alloca_();
        TESFile_GetChunkData(a1, (char *)v5, 0x200u);
        (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xD8))(this, v5);
        break;
      case 0x4D414E46u:
        TESFile_GetChunkData(a1, (char *)this + 0x20, 1u);
        break;
      case 0x56544C46u:
        TESFile_GetChunkData4(a1, (char *)this + 0x24);
        break;
    }
    if ( !TESFile_GetNextChunk(a1) )
      break;
  }
  return 1;
}
