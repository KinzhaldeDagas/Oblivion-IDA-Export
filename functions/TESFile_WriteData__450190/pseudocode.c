UInt32 __thiscall TESFile_WriteData(Data *this, int a2, unsigned int a3)
{
  unsigned int v4; // edi
  int (__cdecl *v5)(BSFile *, int, unsigned int, int *, int); // eax
  BSFile *bsFile; // [esp-18h] [ebp-1Ch]
  int v8; // [esp-14h] [ebp-18h]

  if ( a2
    && (v4 = a3,
        v8 = a2,
        bsFile = this->bsFile,
        v5 = *((int (__cdecl **)(BSFile *, int, unsigned int, int *, int))bsFile + 2),
        a2 = 1,
        v5(bsFile, v8, a3, &a2, 1) < v4) )
  {
    _errno();
    this->errorState = 0xA;
    PrintError("Write Error in TES file");
    return this->errorState;
  }
  else
  {
    this->errorState = 0;
    return 0;
  }
}
