void __thiscall TESFile_UpdateOpenGroups(Data *this, int a2)
{
  int v4; // ecx
  int *openGroups; // ebx
  int *v6; // esi
  int v7; // ebp
  char v8; // al
  int v9; // esi
  int v10; // esi
  _DWORD *v11; // esi
  BSFile *bsFile; // ecx
  int v13; // esi
  BSFile *v14; // eax
  int v15; // eax
  const char *v16; // esi
  const char *v17; // eax
  int v18; // [esp+Ch] [ebp-28h]
  int v19; // [esp+1Ch] [ebp-18h]
  _DWORD v20[5]; // [esp+20h] [ebp-14h] BYREF

  v4 = a2;
  if ( a2 && *(_BYTE *)(a2 + 4) != 1 )
  {
    openGroups = (int *)this->openGroups;
    v6 = (int *)this->openGroups;
    v19 = 0;
    if ( this == (Data *)0xFFFFFD7C )
      goto LABEL_13;
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v4 + 0xBC))(v4, v7, 1, 1);
        v4 = a2;
        if ( !v8 )
          v19 = v7;
      }
      v6 = (int *)v6[1];
    }
    while ( v6 );
    if ( !v19 )
      goto LABEL_13;
    v9 = *openGroups;
    if ( !*openGroups )
      goto LABEL_13;
    do
    {
      TESFile_CloseGroupRecord((int)this);
      if ( v9 == v19 )
        break;
      v9 = *openGroups;
    }
    while ( *openGroups );
    while ( 1 )
    {
      v4 = a2;
LABEL_13:
      v10 = *openGroups;
      if ( *openGroups )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v4 + 0xBC))(v4, v10, 0, 1) )
          return;
        v4 = a2;
      }
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 0xC0))(v4, v20, v10);
      if ( v20[0] != dword_B05E20 )
        break;
      v11 = (_DWORD *)FormHeapAlloc(0x18u);
      BSSimpleList_PushFront(this->openGroups, (int)v11);
      *v11 = v20[0];
      v11[1] = v20[1];
      v11[2] = v20[2];
      v11[3] = v20[3];
      v11[4] = v20[4];
      bsFile = this->bsFile;
      if ( bsFile )
      {
        v13 = *openGroups;
        (*(void (__thiscall **)(BSFile *, _DWORD, int))(*(_DWORD *)bsFile + 0xC))(bsFile, 0, BSFile_FilePos_End);
        v14 = this->bsFile;
        if ( *((_DWORD *)v14 + 0xC) == 0xFFFFFFFF )
          v15 = *((_DWORD *)v14 + 0x52);
        else
          v15 = *((_DWORD *)v14 + 0xC);
        *(_DWORD *)(v13 + 0x14) = v15;
        TESFile_WriteData(this, v13, 0x14u);
        ++this->formCount;
      }
    }
    v16 = *(const char **)(0xC * *(unsigned __int8 *)(a2 + 4) + 0xB05E04);
    v17 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xD4))(a2, *(_DWORD *)(a2 + 0xC));
    PrintError("Failed to CreateGroupData for %s form '%s' (%08X)", v16, v17, v18);
  }
}
