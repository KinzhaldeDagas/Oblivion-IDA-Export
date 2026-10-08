char __thiscall sub_4ABBC0(TESForm *this, Data *a1)
{
  UInt32 i; // eax
  float *v5; // eax
  float *v6; // eax
  int v7[3]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x3E ) /*0x4abbdf*/
    return 0; /*0x4abbe1*/
  this->vtbl->Unk_06(this); /*0x4abbef*/
  TESFile_InitializeFormFromRecord(a1, this, v7[0], v7[1]); /*0x4abbf4*/
  TESForm_SetIsLinked(this, 0); /*0x4abbfd*/
  for ( i = TESFile_GetChunkType(a1); i; i = TESFile_GetChunkType(a1) ) /*0x4abc0b*/
  {
    switch ( i ) /*0x4abc16*/
    {
      case 0x44415343u: /*0x4abc16*/
        if ( *((_DWORD *)this + 0x25) ) /*0x4abd23*/
        {
          FormHeapFree(*((_DWORD *)this + 0x25)); /*0x4abd2e*/
          *((_DWORD *)this + 0x25) = 0; /*0x4abd36*/
        }
        v5 = (float *)FormHeapAlloc(0x54u); /*0x4abd42*/
        if ( v5 ) /*0x4abd4c*/
          v6 = sub_4A9BF0(v5); /*0x4abd50*/
        else
          v6 = 0; /*0x4abd57*/
        *((_DWORD *)this + 0x25) = v6; /*0x4abd5e*/
        TESFile_GetChunkData(a1, (char *)v6, 0x54u); /*0x4abd64*/
        *((_BYTE *)this + 0x68) |= 1u; /*0x4abd69*/
        break;
      case 0x44494445u: /*0x4abc16*/
        _alloca_(v7[0]); /*0x4abd00*/
        TESFile_GetChunkData(a1, (char *)v7, 0x200u); /*0x4abd0f*/
        this->vtbl->SetEditorID(this, (const char *)v7); /*0x4abd1f*/
        break;
      case 0x44545343u: /*0x4abc16*/
        _memset((int)(this + 1), 0, 0x7Cu); /*0x4abc3a*/
        *((float *)this + 0x1B) = 1.0; /*0x4abc41*/
        *((float *)this + 0x1C) = 1.0; /*0x4abc47*/
        *((float *)this + 0x1D) = MEMORY[0xB35670]; /*0x4abc53*/
        *((float *)this + 0x1E) = MEMORY[0xB35678]; /*0x4abc5e*/
        *((float *)this + 0x1F) = MEMORY[0xB35680]; /*0x4abc67*/
        *((float *)this + 0x20) = MEMORY[0xB35688]; /*0x4abc70*/
        *((float *)this + 0x21) = MEMORY[0xB35690]; /*0x4abc7c*/
        *((_BYTE *)this + 0x88) = stru_B35778.value; /*0x4abc87*/
        *((float *)this + 0x23) = MEMORY[0xB35780]; /*0x4abc93*/
        TESFile_GetChunkData(a1, (char *)this + 0x18, 0x7Cu); /*0x4abc99*/
        if ( *((float *)this + 0x1D) <= 0.0 ) /*0x4abca8*/
          *((float *)this + 0x1D) = MEMORY[0xB35670]; /*0x4abcb0*/
        if ( *((float *)this + 0x1E) <= 0.0 ) /*0x4abcbb*/
          *((float *)this + 0x1E) = MEMORY[0xB35678]; /*0x4abcc3*/
        if ( *((char *)this + 0x88) <= 0 ) /*0x4abccd*/
          *((_BYTE *)this + 0x88) = stru_B35778.value; /*0x4abcd5*/
        if ( *((float *)this + 0x23) <= 0.0 ) /*0x4abce6*/
          *((float *)this + 0x23) = MEMORY[0xB35780]; /*0x4abcf2*/
        break;
    }
    if ( !TESFile_GetNextChunk(a1) ) /*0x4abd6f*/
      break; /*0x4abd76*/
  }
  return 1; /*0x4abd8c*/
}
