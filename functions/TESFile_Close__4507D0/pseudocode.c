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

  if ( g_TESDataHandler && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4507f3*/
    return 1; /*0x450814*/
  TESFile_CloseAllOpenGroups(&this->errorState); /*0x450815*/
  bsFile = this->bsFile; /*0x45081a*/
  if ( bsFile ) /*0x45081f*/
  {
    (**(void (__thiscall ***)(BSFile *, int))bsFile)(bsFile, 1); /*0x450827*/
    this->bsFile = 0; /*0x450829*/
  }
  if ( this->currentRecordDCBuffer ) /*0x45082c*/
  {
    MemoryHeap_Free_checked(this->currentRecordDCBuffer); /*0x45083c*/
    this->currentRecordDCBuffer = 0; /*0x450841*/
    this->currentRecordDCLength = 0; /*0x450847*/
  }
  if ( this->unkFile00C ) /*0x45084d*/
  {
    lstrcpyA(String1, this->filepath); /*0x450867*/
    v4 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x45086d*/
    lstrcatA(String1, this->name); /*0x45087f*/
    lstrcpyA(OldFilename, this->filepath); /*0x450887*/
    v5 = strchr(this->name, 0x2E); /*0x450898*/
    name = this->name; /*0x45089c*/
    if ( v5 ) /*0x45089d*/
    {
      *v5 = 0; /*0x4508a4*/
      v4(OldFilename, name); /*0x4508a8*/
      v4(OldFilename, ".tes"); /*0x4508b4*/
      *v5 = 0x2E; /*0x4508b6*/
    }
    else
    {
      v4(OldFilename, name); /*0x4508c1*/
      v4(OldFilename, ".tes"); /*0x4508cd*/
    }
    unkFile00C = this->unkFile00C; /*0x4508cf*/
    if ( unkFile00C ) /*0x4508d5*/
      (**(void (__thiscall ***)(BSFile *, int))unkFile00C)(unkFile00C, 1); /*0x4508dd*/
    this->unkFile00C = 0; /*0x4508df*/
    v7 = bDisableWarning_MESSAGES; /*0x4508e6*/
    bDisableWarning_MESSAGES = 0; /*0x4508f4*/
    if ( !DeleteFileA(String1) ) /*0x4508fb*/
    {
      v9 = "Unable to complete operation due to failure removing previous file.\r\nTemp file remains."; /*0x450905*/
LABEL_18:
      this->errorState = 9; /*0x45092a*/
      PrintError(v9); /*0x450930*/
      bDisableWarning_MESSAGES = v7; /*0x450938*/
      return 0; /*0x450957*/
    }
    if ( rename(OldFilename, String1) ) /*0x450919*/
    {
      v9 = "Unable to complete operation due to failure renaming temp file.\r\nTemp file remains."; /*0x450925*/
      goto LABEL_18; /*0x450925*/
    }
    bDisableWarning_MESSAGES = v7; /*0x450958*/
  }
  return 1; /*0x4507fc*/
}
