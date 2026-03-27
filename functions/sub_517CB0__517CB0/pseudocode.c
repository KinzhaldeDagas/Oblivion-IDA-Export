char __thiscall sub_517CB0(TESForm *this, Data *a2)
{
  signed int i; // eax
  char v5; // dl
  char v6; // al
  int v7; // ecx
  int v8[3]; // [esp+0h] [ebp-18h] BYREF
  _BYTE Dst[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h]

  if ( TESFile_GetRecordType(a2) != 0xA )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v8[0], v8[1]);
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) )
  {
    if ( i > 0x4D414E46 )
    {
      if ( i == 0x58444E53 )
        TESForm_LoadGenericComponents(this, a2, (char *)this + 0x38, 0xCu);
    }
    else
    {
      switch ( i )
      {
        case 0x4D414E46:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v8, 0);
          (*(void (__thiscall **)(_BYTE *, int *))(*((_DWORD *)this + 9) + 0x10))((_BYTE *)this + 0x24, v8);
          break;
        case 0x44444E53:
          TESForm_LoadGenericComponents(this, a2, Dst, 8u);
          v5 = Dst[1];
          v6 = Dst[2];
          *((_BYTE *)this + 0x38) = Dst[0];
          v7 = v10;
          *((_BYTE *)this + 0x39) = v5;
          *((_BYTE *)this + 0x3A) = v6;
          *((_DWORD *)this + 0xF) = v7;
          break;
        case 0x44494445:
          _alloca_();
          TESFile_GetChunkData(a2, (char *)v8, 0x200u);
          this->vtbl->SetEditorID(this, (const char *)v8);
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) )
      break;
  }
  return 1;
}
