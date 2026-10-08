void __thiscall TESFile_UpdateOpenGroups(Data *this, int a2)
{
  int v3; // ecx
  UInt32 *openGroups; // ebx
  UInt32 *v5; // esi
  UInt32 v6; // ebp
  char v7; // al
  UInt32 v8; // esi
  UInt32 v9; // esi
  _DWORD *v10; // esi
  BSFile *bsFile; // ecx
  int v12; // esi
  BSFile *v13; // eax
  int v14; // eax
  const char *v15; // esi
  const char *v16; // eax
  int v17; // [esp+Ch] [ebp-28h]
  UInt32 v18; // [esp+1Ch] [ebp-18h]
  _DWORD v19[5]; // [esp+20h] [ebp-14h] BYREF

  v3 = a2; /*0x4502c6*/
  if ( a2 && *(_BYTE *)(a2 + 4) != 1 ) /*0x4502d6*/
  {
    openGroups = this->openGroups; /*0x4502dd*/
    v5 = this->openGroups; /*0x4502e4*/
    v18 = 0; /*0x4502e8*/
    if ( this == (Data *)0xFFFFFD7C ) /*0x4502f0*/
      goto LABEL_13; /*0x4502f0*/
    do /*0x450319*/
    {
      v6 = *v5; /*0x4502f3*/
      if ( *v5 ) /*0x4502f3*/
      {
        v7 = (*(int (__thiscall **)(int, UInt32, int, int))(*(_DWORD *)v3 + 0xBC))(v3, v6, 1, 1); /*0x450306*/
        v3 = a2; /*0x45030a*/
        if ( !v7 ) /*0x45030e*/
          v18 = v6; /*0x450310*/
      }
      v5 = (UInt32 *)v5[1]; /*0x450314*/
    }
    while ( v5 ); /*0x450319*/
    if ( !v18 ) /*0x450320*/
      goto LABEL_13; /*0x450320*/
    v8 = *openGroups; /*0x450322*/
    if ( !*openGroups ) /*0x450322*/
      goto LABEL_13; /*0x450326*/
    do /*0x450335*/
    {
      TESFile_CloseGroupRecord((int)this); /*0x45032a*/
      if ( v8 == v18 ) /*0x450333*/
        break; /*0x450333*/
      v8 = *openGroups; /*0x450335*/
    }
    while ( *openGroups ); /*0x450335*/
    while ( 1 ) /*0x45033b*/
    {
      v3 = a2; /*0x45033b*/
LABEL_13:
      v9 = *openGroups; /*0x45033f*/
      if ( *openGroups ) /*0x45033f*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, UInt32, _DWORD, int))(*(_DWORD *)v3 + 0xBC))(v3, v9, 0, 1) ) /*0x450352*/
          return; /*0x450356*/
        v3 = a2; /*0x45035c*/
      }
      (*(void (__thiscall **)(int, _DWORD *, UInt32))(*(_DWORD *)v3 + 0xC0))(v3, v19, v9); /*0x45036e*/
      if ( v19[0] != dword_B05E20 ) /*0x45037a*/
        break; /*0x45037a*/
      v10 = (_DWORD *)FormHeapAlloc(0x18u);     // MEF v51 bridge-stack audit confirms v44 guard: replacement CALL entry has injected return at [ESP] and pending size at [ESP+4]. Failure retargets [ESP] to the void epilogue 0x450427 and retn 4 removes size. /*0x450386*/
      BSSimpleList_PushFront(this->openGroups, (int)v10); /*0x45038b*/
      *v10 = v19[0]; /*0x450394*/
      v10[1] = v19[1]; /*0x45039a*/
      v10[2] = v19[2]; /*0x4503a1*/
      v10[3] = v19[3]; /*0x4503a8*/
      v10[4] = v19[4]; /*0x4503af*/
      bsFile = this->bsFile; /*0x4503b2*/
      if ( bsFile ) /*0x4503b7*/
      {
        v12 = *openGroups; /*0x4503c3*/
        (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End); /*0x4503c8*/
        v13 = this->bsFile; /*0x4503ca*/
        if ( *((_DWORD *)v13 + 0xC) == 0xFFFFFFFF ) /*0x4503d3*/
          v14 = *((_DWORD *)v13 + 0x52); /*0x4503d9*/
        else
          v14 = *((_DWORD *)v13 + 0xC); /*0x4503d5*/
        *(_DWORD *)(v12 + 0x14) = v14; /*0x4503e4*/
        TESFile_WriteData(this, v12, 0x14u); /*0x4503e7*/
        ++this->formCount; /*0x4503ec*/
      }
    }
    v15 = *(const char **)(0xC * *(unsigned __int8 *)(a2 + 4) + 0xB05E04); /*0x450406*/
    v16 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xD4))(a2, *(_DWORD *)(a2 + 0xC)); /*0x450416*/
    PrintError("Failed to CreateGroupData for %s form '%s' (%08X)", v15, v16, v17); /*0x45041f*/
  }
}
