char __thiscall sub_51FEA0(int this, Data *a2)
{
  signed int ChunkType; // eax
  TESFullName *v5; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 7 ) /*0x51fec0*/
    return 0; /*0x51fec4*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x51fecc*/
  ChunkType = TESFile_GetChunkType(a2); /*0x51fed3*/
  if ( ChunkType ) /*0x51feda*/
  {
    while ( 1 ) /*0x51fee0*/
    {
      if ( ChunkType > 0x4C444F4D ) /*0x51fee5*/
      {
        switch ( ChunkType ) /*0x51ff40*/
        {
          case 0x4C4C5546: /*0x51ff40*/
            if ( this ) /*0x51ff88*/
              v5 = (TESFullName *)(this + 0x18); /*0x51ff8a*/
            else
              v5 = 0; /*0x51ff8f*/
            TESFullname_Load(v5, a2); /*0x51ff93*/
            break; /*0x51ff93*/
          case 0x4E4F4349: /*0x51ff40*/
            if ( this ) /*0x51ff6d*/
              TESTexture_Load(this + 0x3C, a2); /*0x51ff74*/
            else
              TESTexture_Load(0, a2); /*0x51ff7f*/
            break; /*0x51ff79*/
          case 0x54444F4D: /*0x51ff40*/
LABEL_14:
            if ( this ) /*0x51ff52*/
              TESModel_Load((float *)(this + 0x24), a2); /*0x51ff59*/
            else
              TESModel_Load(0, a2); /*0x51ff64*/
            break;
        }
      }
      else
      {
        switch ( ChunkType ) /*0x51fee7*/
        {
          case 0x4C444F4D: /*0x51fee7*/
            goto LABEL_14; /*0x51fee7*/
          case 0x41544144: /*0x51fee7*/
            TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x48), 1u); /*0x51ff34*/
            break;
          case 0x42444F4D: /*0x51fee7*/
            goto LABEL_14; /*0x51fef5*/
          case 0x44494445: /*0x51fee7*/
            _alloca_(v6[0]); /*0x51ff08*/
            TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x51ff17*/
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x51ff27*/
            break;
        }
      }
      if ( TESFile_GetNextChunk(a2) ) /*0x51ff9d*/
      {
        ChunkType = TESFile_GetChunkType(a2); /*0x51ffa8*/
        if ( ChunkType ) /*0x51ffaf*/
          continue; /*0x51ffaf*/
      }
      return 1; /*0x51ffaf*/
    }
  }
  return 1; /*0x51ffba*/
}
