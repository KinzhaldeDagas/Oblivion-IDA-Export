char __thiscall sub_4ED6A0(int this, Data *a2)
{
  signed int i; // eax
  int v5; // eax
  int v6; // eax
  int v7[3]; // [esp+0h] [ebp-14h] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x42 ) /*0x4ed6c1*/
    return 0; /*0x4ed6c3*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v7[0], v7[1]); /*0x4ed6cd*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4ed6d6*/
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) ) /*0x4ed6e4*/
  {
    if ( i > 0x4D414E47 ) /*0x4ed6f5*/
    {
      v5 = i - 0x4D414E4D; /*0x4ed795*/
      if ( v5 ) /*0x4ed79a*/
      {
        v6 = v5 - 6; /*0x4ed79c*/
        if ( v6 ) /*0x4ed79f*/
        {
          if ( v6 == 1 ) /*0x4ed7a4*/
            TESTexture_Load(this + 0x20, a2); /*0x4ed7ab*/
        }
        else
        {
          v8 = 0; /*0x4ed7bb*/
          TESFile_GetChunkData4(a2, (char *)&v8); /*0x4ed7c2*/
          *(_DWORD *)(this + 0x38) = v8; /*0x4ed7ca*/
        }
      }
      else
      {
        _alloca_(v7[0]); /*0x4ed7d5*/
        TESFile_GetChunkData(a2, (char *)v7, 0); /*0x4ed7e1*/
        BSStringT_Set((BSStringT *)(this + 0x30), (const char *)v7, 0); /*0x4ed7ec*/
      }
    }
    else if ( i == 0x4D414E47 ) /*0x4ed6fb*/
    {
      TESFile_GetChunkData(a2, (char *)(this + 0xA0), 0xCu); /*0x4ed78e*/
    }
    else if ( i > 0x4D414E41 ) /*0x4ed706*/
    {
      if ( i == 0x4D414E46 ) /*0x4ed772*/
        TESFile_GetChunkData(a2, (char *)(this + 0x2D), 1u); /*0x4ed77c*/
    }
    else
    {
      switch ( i ) /*0x4ed708*/
      {
        case 0x4D414E41: /*0x4ed708*/
          TESFile_GetChunkData(a2, (char *)(this + 0x2C), 1u); /*0x4ed763*/
          break;
        case 0x41544144: /*0x4ed708*/
          TESForm_LoadGenericComponents((TESForm *)this, a2, (void *)(this + 0x3C), 0x64u); /*0x4ed751*/
          break;
        case 0x44494445: /*0x4ed708*/
          _alloca_(v7[0]); /*0x4ed722*/
          TESFile_GetChunkData(a2, (char *)v7, 0x200u); /*0x4ed731*/
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, v7); /*0x4ed741*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) ) /*0x4ed7f3*/
      break; /*0x4ed7fa*/
  }
  return 1; /*0x4ed810*/
}
