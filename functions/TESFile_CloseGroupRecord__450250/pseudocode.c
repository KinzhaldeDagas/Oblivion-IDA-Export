void __thiscall TESFile_CloseGroupRecord(int this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // edx

  v2 = *(_DWORD *)(this + 0x284);
  if ( v2 )
  {
    if ( *(_DWORD *)(this + 0x10) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 0x10) + 0xC))(
        *(_DWORD *)(this + 0x10),
        0,
        BSFile_FilePos_End);
      v3 = *(_DWORD *)(this + 0x10);
      v4 = *(_DWORD *)(v3 + 0x30);
      if ( v4 == 0xFFFFFFFF )
        v4 = *(_DWORD *)(v3 + 0x148);
      v5 = *(_DWORD *)(v2 + 0x14);
      *(_DWORD *)(v2 + 4) = v4 - v5;
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 0x10) + 0xC))(
        *(_DWORD *)(this + 0x10),
        v5,
        BSFile_FilePos_Beg);
      TESFile_WriteData((Data *)this, v2, 0x14u);
    }
    TESFile_CloseGroupRecord_::TESFile_PopGroup((unsigned int *)this);
  }
}
