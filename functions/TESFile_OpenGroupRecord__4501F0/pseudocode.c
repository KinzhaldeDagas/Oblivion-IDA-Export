void __thiscall TESFile_OpenGroupRecord(Data *this, _DWORD *a2)
{
  BSFile *bsFile; // ecx
  int v4; // edi
  BSFile *v5; // eax
  int v6; // eax

  if ( a2 ) /*0x4501f9*/
  {
    TESFile_PushGroup(this, a2); /*0x4501fc*/
    bsFile = this->bsFile; /*0x450201*/
    if ( bsFile ) /*0x450206*/
    {
      v4 = this->openGroups[0]; /*0x450214*/
      (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End); /*0x45021d*/
      v5 = this->bsFile; /*0x45021f*/
      if ( *((_DWORD *)v5 + 0xC) == 0xFFFFFFFF ) /*0x450228*/
        v6 = *((_DWORD *)v5 + 0x52); /*0x45022e*/
      else
        v6 = *((_DWORD *)v5 + 0xC); /*0x45022a*/
      *(_DWORD *)(v4 + 0x14) = v6; /*0x450239*/
      TESFile_WriteData(this, v4, 0x14u); /*0x45023c*/
      ++this->formCount; /*0x450241*/
    }
  }
}
