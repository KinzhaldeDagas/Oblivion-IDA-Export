char __thiscall sub_51ED90(int this, Data *a2)
{
  signed int i; // eax
  int v5; // eax
  int v6[3]; // [esp+0h] [ebp-10h] BYREF

  if ( TESFile_GetRecordType(a2) != 8 ) /*0x51edb0*/
    return 0; /*0x51edb2*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v6[0], v6[1]); /*0x51edbc*/
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) ) /*0x51edca*/
  {
    if ( i > 0x4C4C5546 ) /*0x51edd5*/
    {
      if ( i == 0x4E4F4349 ) /*0x51ee40*/
      {
        if ( this ) /*0x51ee44*/
          v5 = this + 0x24; /*0x51ee46*/
        else
          v5 = 0; /*0x51ee4b*/
        TESTexture_Load(v5, a2); /*0x51ee4f*/
      }
    }
    else
    {
      switch ( i ) /*0x51edd7*/
      {
        case 0x4C4C5546: /*0x51edd7*/
          if ( this ) /*0x51ee22*/
            TESFullname_Load((TESFullName *)(this + 0x18), a2); /*0x51ee29*/
          else
            TESFullname_Load(0, a2); /*0x51ee34*/
          break;
        case 0x41544144: /*0x51edd7*/
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x30), 1u); /*0x51ee19*/
          break;
        case 0x44494445: /*0x51edd7*/
          _alloca_(v6[0]); /*0x51eded*/
          TESFile_GetChunkData(a2, (char *)v6, 0x200u); /*0x51edfc*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v6); /*0x51ee0c*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) ) /*0x51ee59*/
      break; /*0x51ee60*/
  }
  return 1; /*0x51ee76*/
}
