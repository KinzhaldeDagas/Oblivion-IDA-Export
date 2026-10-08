void __thiscall TESFile_CloseGroupRecord(int this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // edx

  v2 = *(_DWORD *)(this + 0x284); /*0x450254*/
  if ( v2 ) /*0x45025c*/
  {
    if ( *(_DWORD *)(this + 0x10) ) /*0x45025e*/
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x10) + 0xC))( /*0x450275*/
        *(_DWORD *)(this + 0x10),
        0,
        BSFile_FilePos_End);
      v3 = *(_DWORD *)(this + 0x10); /*0x450277*/
      v4 = *(_DWORD *)(v3 + 0x30); /*0x45027a*/
      if ( v4 == 0xFFFFFFFF ) /*0x450280*/
        v4 = *(_DWORD *)(v3 + 0x148); /*0x450282*/
      v5 = *(_DWORD *)(v2 + 0x14); /*0x450288*/
      *(_DWORD *)(v2 + 4) = v4 - v5; /*0x45028e*/
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x10) + 0xC))( /*0x4502a1*/
        *(_DWORD *)(this + 0x10),
        v5,
        BSFile_FilePos_Beg);
      TESFile_WriteData((Data *)this, v2, 0x14u); /*0x4502a8*/
    }
    TESFile_CloseGroupRecord_::TESFile_PopGroup((unsigned int *)this); /*0x4502b2*/
  }
}
