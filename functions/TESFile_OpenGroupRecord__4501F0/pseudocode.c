void __thiscall TESFile_OpenGroupRecord(Data *this, _DWORD *a2)
{
  BSFile *bsFile; // ecx
  int v4; // edi
  BSFile *v5; // eax
  int v6; // eax

  if ( a2 )
  {
    TESFile_PushGroup(this, a2);
    bsFile = this->bsFile;
    if ( bsFile )
    {
      v4 = this->openGroups[0];
      (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End);
      v5 = this->bsFile;
      if ( *((_DWORD *)v5 + 0xC) == 0xFFFFFFFF )
        v6 = *((_DWORD *)v5 + 0x52);
      else
        v6 = *((_DWORD *)v5 + 0xC);
      *(_DWORD *)(v4 + 0x14) = v6;
      TESFile_WriteData(this, v4, 0x14u);
      ++this->formCount;
    }
  }
}
