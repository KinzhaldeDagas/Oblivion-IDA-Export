char __thiscall TESFile_Close(Data *this)
{
  BSFile *bsFile; // ecx
  void (__stdcall *v4)(LPSTR, LPCSTR); // ebx
  char *v5; // ebp
  BSFile *unkFile00C; // ecx
  char v7; // bl
  char *name; // [esp-Ch] [ebp-220h]
  char *v9; // [esp-8h] [ebp-21Ch]
  CHAR OldFilename[260]; // [esp+8h] [ebp-20Ch] BYREF
  CHAR String1[260]; // [esp+10Ch] [ebp-108h] BYREF

  if ( TESDataHandler && !*(_BYTE *)(TESDataHandler + 0xCD4) )
    return 1;
  sub_450430(&this->errorState);
  bsFile = this->bsFile;
  if ( bsFile )
  {
    (**(void (__thiscall ***)(BSFile *, int))bsFile)(bsFile, 1);
    this->bsFile = 0;
  }
  if ( this->currentRecordDCBuffer )
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer);
    this->currentRecordDCBuffer = 0;
    this->currentRecordDCLength = 0;
  }
  if ( this->unkFile00C )
  {
    lstrcpyA(String1, this->filepath);
    v4 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
    lstrcatA(String1, this->name);
    lstrcpyA(OldFilename, this->filepath);
    v5 = strchr(this->name, 0x2E);
    name = this->name;
    if ( v5 )
    {
      *v5 = 0;
      v4(OldFilename, name);
      v4(OldFilename, ".tes");
      *v5 = 0x2E;
    }
    else
    {
      v4(OldFilename, name);
      v4(OldFilename, ".tes");
    }
    unkFile00C = this->unkFile00C;
    if ( unkFile00C )
      (**(void (__thiscall ***)(BSFile *, int))unkFile00C)(unkFile00C, 1);
    this->unkFile00C = 0;
    v7 = bDisableWarning_MESSAGES;
    bDisableWarning_MESSAGES = 0;
    if ( !DeleteFileA(String1) )
    {
      v9 = "Unable to complete operation due to failure removing previous file.\r\nTemp file remains.";
LABEL_18:
      this->errorState = 9;
      PrintError(v9);
      bDisableWarning_MESSAGES = v7;
      return 0;
    }
    if ( rename(OldFilename, String1) )
    {
      v9 = "Unable to complete operation due to failure renaming temp file.\r\nTemp file remains.";
      goto LABEL_18;
    }
    bDisableWarning_MESSAGES = v7;
  }
  return 1;
}
