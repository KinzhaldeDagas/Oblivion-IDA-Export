char __thiscall sub_517CB0(TESForm *this, Data *a2)
{
  signed int i; // eax
  char v5; // dl
  char v6; // al
  int v7; // ecx
  int v8[3]; // [esp+0h] [ebp-18h] BYREF
  _BYTE Dst[4]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h]

  if ( TESFile_GetRecordType(a2) != 0xA ) /*0x517cd2*/
    return 0; /*0x517cd4*/
  TESFile_InitializeFormFromRecord(a2, this, v8[0], v8[1]); /*0x517cde*/
  for ( i = TESFile_GetChunkType(a2); i; i = TESFile_GetChunkType(a2) ) /*0x517cec*/
  {
    if ( i > 0x4D414E46 ) /*0x517cf7*/
    {
      if ( i == 0x58444E53 ) /*0x517d8c*/
        TESForm_LoadGenericComponents(this, a2, (char *)this + 0x38, 0xCu); /*0x517d97*/
    }
    else
    {
      switch ( i ) /*0x517cfd*/
      {
        case 0x4D414E46: /*0x517cfd*/
          _alloca_(v8[0]); /*0x517d68*/
          TESFile_GetChunkData(a2, (char *)v8, 0); /*0x517d74*/
          (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 9) + 0x10))((char *)this + 0x24, v8); /*0x517d83*/
          break;
        case 0x44444E53: /*0x517cfd*/
          TESForm_LoadGenericComponents(this, a2, Dst, 8u); /*0x517d43*/
          v5 = Dst[1]; /*0x517d4b*/
          v6 = Dst[2]; /*0x517d4e*/
          *((_BYTE *)this + 0x38) = Dst[0]; /*0x517d51*/
          v7 = v10; /*0x517d54*/
          *((_BYTE *)this + 0x39) = v5; /*0x517d57*/
          *((_BYTE *)this + 0x3A) = v6; /*0x517d5a*/
          *((_DWORD *)this + 0xF) = v7; /*0x517d5d*/
          break;
        case 0x44494445: /*0x517cfd*/
          _alloca_(v8[0]); /*0x517d17*/
          TESFile_GetChunkData(a2, (char *)v8, 0x200u); /*0x517d26*/
          this->vtbl->SetEditorID(this, (const char *)v8); /*0x517d36*/
          break;
      }
    }
    if ( !TESFile_GetNextChunk(a2) ) /*0x517d9e*/
      break; /*0x517da5*/
  }
  return 1; /*0x517dbb*/
}
