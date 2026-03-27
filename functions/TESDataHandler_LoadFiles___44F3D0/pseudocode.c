signed int __userpurge TESDataHandler_LoadFiles_@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        char a5,
        char a6)
{
  int v6; // esi
  Data *v7; // ebx
  int v8; // esi
  unsigned int v9; // ebp
  Data *MasterByIndex; // eax
  Data *v11; // edi
  int v12; // ebp
  char v13; // bl
  Data *v14; // edi
  unsigned int v15; // esi
  const char *MasterNameByIndex; // eax
  UInt8 v18; // al
  int v19; // eax
  UInt8 v20; // al
  Data *v21; // ecx
  unsigned int v22; // ebp
  int *v23; // edi
  unsigned int v24; // edi
  bool v25; // zf
  char *v26; // eax
  _DWORD *v27; // edi
  _DWORD *v28; // edi
  _DWORD *v29; // edi
  _DWORD *v30; // edi
  _DWORD *v31; // edi
  _DWORD *v32; // edi
  _DWORD *v33; // edi
  _DWORD *v34; // edi
  _DWORD *v35; // edi
  _DWORD *v36; // edi
  int v37; // edi
  char v38; // bl
  int v39; // ebp
  _DWORD *v40; // edi
  NiNode *i; // edi
  int j; // edi
  int v43; // edi
  int *v44; // edi
  int v45; // ebp
  int k; // edi
  int v47; // ecx
  _DWORD *v48; // edi
  _DWORD *v49; // edi
  int v51; // [esp+14h] [ebp-8h]
  unsigned int MasterFileCount; // [esp+18h] [ebp-4h]
  int v53; // [esp+24h] [ebp+8h]
  char v54; // [esp+24h] [ebp+8h]
  char v55; // [esp+24h] [ebp+8h]

  v6 = a1;
  v51 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(_BYTE *)(v51 + 0x184) = 1;
  if ( a5 || a6 )
    *(_DWORD *)(a1 + 0x8D0) = 0;
  sub_442630(TES, 0, 0);
  if ( !a5 && !a6 )
    TES->currentWorldSpace = 0;
  TES->currentInteriorCell = 0;
  sub_43F220(TES);
  v53 = v6 + 0x8C8;
  if ( *(_BYTE *)(v6 + 0xCD1) )
  {
    TESFile_Open(*(Data **)(v6 + 0x8C4));
    TESFile_BuildLoadedMasterArray(*(Data **)(v6 + 0x8C4), (int *)(v6 + 0x8C8), 1);
  }
  if ( v6 == 0xFFFFF738 )
  {
LABEL_21:
    v12 = v6 + 0x8C8;
    v13 = 0;
    v54 = bDisableWarning_MESSAGES;
    bDisableWarning_MESSAGES = 1;
    if ( v6 != 0xFFFFF738 )
    {
      do
      {
        v14 = *(Data **)v12;
        if ( !*(_DWORD *)v12 )
          break;
        if ( TESFile_IsLoaded(*(Data **)v12) )
        {
          if ( !TESFile_GetIsMaster(v14) && !*(_BYTE *)(v6 + 0xCD0) )
          {
            if ( TESFile_HaveMastersChanged(v14) )
            {
              v13 = 1;
              PrintError(off_B05574, v14->name);
            }
          }
          if ( TESFile_IsActive(v14) )
          {
            *(_DWORD *)(v6 + 0x8C4) = v14;
          }
          else
          {
            *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 0x8D0) + 0x8D4) = v14;
            v18 = *(_BYTE *)(v6 + 0x8D0);
            ++*(_DWORD *)(v6 + 0x8D0);
            TESFile_SetFileIndex(v14, v18);
            if ( *(_DWORD *)(v6 + 0x8D0) >= 0xFFu )
              sub_404EC0("Too many selected files to compile!");
          }
        }
        v12 = *(_DWORD *)(v12 + 4);
      }
      while ( v12 );
    }
    *(_DWORD *)(v6 + 0x8C0) = 0xFF000800;
    if ( v13 )
      PrintError(off_B0557C);
    bDisableWarning_MESSAGES = v54;
    v19 = *(_DWORD *)(v6 + 0x8C4);
    if ( v19 )
    {
      *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 0x8D0) + 0x8D4) = v19;
      v20 = *(_BYTE *)(v6 + 0x8D0);
      v21 = *(Data **)(v6 + 0x8C4);
      ++*(_DWORD *)(v6 + 0x8D0);
      TESFile_SetFileIndex(v21, v20);
      if ( *(_DWORD *)(v6 + 0x8D0) >= 0xFFu )
        sub_404EC0("Too many selected files to compile!");
    }
    TESDataHandler_CreateBuiltinObjects((_DWORD **)v6);
    v22 = 0;
    if ( *(_DWORD *)(v6 + 0x8D0) )
    {
      v23 = (int *)(v6 + 0x8D4);
      do
      {
        if ( TESFile_OpenBSFileWrapper__(*v23, 0, 0) )
          dword_B33A90 += *(_DWORD *)(*v23 + 0x3D4);
        else
          PrintError("DataHandler: internal error");
        ++v22;
        ++v23;
      }
      while ( v22 < *(_DWORD *)(v6 + 0x8D0) );
    }
    v24 = 0;
    v25 = *(_DWORD *)(v6 + 0x8D0) == 0;
    dword_B33A94 = 0;
    *(_BYTE *)(v6 + 0xCD7) = 1;
    if ( !v25 )
    {
      do
      {
        v55 = 0;
        if ( !v24 )
          v55 = a5 == 0;
        if ( !TESDataHandler_LoadFile(a2, a3, (TESWorldSpace **)v6, a4, *(Data **)(v6 + 4 * v24 + 0x8D4), v55) )
        {
          v26 = sub_494480();
          PrintError("DataHandler: unrecognized form\r\nLook in the %s file for more info.\r\n", v26);
        }
        ++v24;
      }
      while ( v24 < *(_DWORD *)(v6 + 0x8D0) );
    }
    v27 = (_DWORD *)(v6 + 0x44);
    *(_BYTE *)(v6 + 0xCD7) = 0;
    if ( v6 != 0xFFFFFFBC )
    {
      do
      {
        if ( !*v27 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v27 + 0x6C))(*v27);
        v27 = (_DWORD *)v27[1];
      }
      while ( v27 );
    }
    v28 = (_DWORD *)(v6 + 0x5C);
    if ( v6 != 0xFFFFFFA4 )
    {
      do
      {
        if ( !*v28 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v28 + 0x6C))(*v28);
        v28 = (_DWORD *)v28[1];
      }
      while ( v28 );
    }
    v29 = (_DWORD *)(v6 + 0x84);
    if ( v6 != 0xFFFFFF7C )
    {
      do
      {
        if ( !*v29 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v29 + 0x6C))(*v29);
        v29 = (_DWORD *)v29[1];
      }
      while ( v29 );
    }
    v30 = (_DWORD *)(v6 + 0x8C);
    if ( v6 != 0xFFFFFF74 )
    {
      do
      {
        if ( !*v30 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v30 + 0x6C))(*v30);
        v30 = (_DWORD *)v30[1];
      }
      while ( v30 );
    }
    v31 = (_DWORD *)(v6 + 0x94);
    if ( v6 != 0xFFFFFF6C )
    {
      do
      {
        if ( !*v31 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v31 + 0x6C))(*v31);
        v31 = (_DWORD *)v31[1];
      }
      while ( v31 );
    }
    v32 = (_DWORD *)(v6 + 0xAC);
    if ( v6 != 0xFFFFFF54 )
    {
      do
      {
        if ( !*v32 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v32 + 0x6C))(*v32);
        v32 = (_DWORD *)v32[1];
      }
      while ( v32 );
    }
    v33 = (_DWORD *)(v6 + 0x9C);
    if ( v6 != 0xFFFFFF64 )
    {
      do
      {
        if ( !*v33 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v33 + 0x6C))(*v33);
        v33 = (_DWORD *)v33[1];
      }
      while ( v33 );
    }
    v34 = (_DWORD *)(v6 + 0xB4);
    if ( v6 != 0xFFFFFF4C )
    {
      do
      {
        if ( !*v34 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v34 + 0x6C))(*v34);
        v34 = (_DWORD *)v34[1];
      }
      while ( v34 );
    }
    v35 = (_DWORD *)(v6 + 0xA4);
    if ( v6 != 0xFFFFFF5C )
    {
      do
      {
        if ( !*v35 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v35 + 0x6C))(*v35);
        v35 = (_DWORD *)v35[1];
      }
      while ( v35 );
    }
    v36 = (_DWORD *)(v6 + 0x4C);
    if ( v6 != 0xFFFFFFB4 )
    {
      do
      {
        if ( !*v36 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v36 + 0x6C))(*v36);
        v36 = (_DWORD *)v36[1];
      }
      while ( v36 );
    }
    v37 = v6 + 0x8C8;
    v38 = 0;
    v39 = 0;
    if ( v6 == 0xFFFFF738 )
      goto LABEL_91;
    do
    {
      if ( !*(_DWORD *)v37 )
        break;
      if ( TESFile_IsLoaded(*(Data **)v37) )
        ++v39;
      v37 = *(_DWORD *)(v37 + 4);
    }
    while ( v37 );
    if ( v39 != 1 )
LABEL_91:
      sub_52F6D0(0);
    else
      v38 = 1;
    sub_402860((TESForm **)&TimeGlobals);
    v40 = (_DWORD *)(v6 + 0x7C);
    if ( v6 != 0xFFFFFF84 )
    {
      do
      {
        if ( !*v40 )
          break;
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v40 + 0x6C))(*v40);
        v40 = (_DWORD *)v40[1];
      }
      while ( v40 );
    }
    if ( !v38 )
      sub_52FAE0(0);
    for ( i = TESHealthForm_GetHealth(*(Sky **)v6); i; i = (NiNode *)TESObject_GetNextObject(i) )
      ((void (__thiscall *)(NiNode *))i->vtbl->super.UpdatePropertiesDownward)(i);
    *(_BYTE *)(v51 + 0x184) = 0;
    for ( j = *(_DWORD *)(v6 + 0xBC); j; j = v43 - 4 )
    {
      if ( !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 4) )
        break;
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(j + 4) + 0x6C))(*(_DWORD *)(j + 4));
      v43 = *(_DWORD *)(j + 8);
      if ( !v43 )
        break;
    }
    v44 = (int *)(v6 + 0xC);
    if ( v6 != 0xFFFFFFF4 )
    {
      do
      {
        if ( *v44 )
          sub_4EF290(*v44, a4);
        v44 = (int *)v44[1];
      }
      while ( v44 );
    }
    v45 = *(_DWORD *)(v6 + 0xCC);
    for ( k = 0; k < v45; ++k )
    {
      v47 = *(_DWORD *)(*(_DWORD *)(v6 + 0xC4) + 4 * k);
      if ( v47 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 0x6C))(v47);
    }
    v48 = (_DWORD *)(v6 + 0xC);
    if ( v6 != 0xFFFFFFF4 )
    {
      do
      {
        if ( *v48 )
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v48 + 0x6C))(*v48);
        v48 = (_DWORD *)v48[1];
      }
      while ( v48 );
    }
    sub_520FA0((_DWORD *)g_idleAnimationMap);
    sub_416900();
    v49 = (_DWORD *)(v6 + 4);
    if ( v6 != 0xFFFFFFFC )
    {
      do
      {
        if ( *v49 )
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v49 + 0x6C))(*v49);
        v49 = (_DWORD *)v49[1];
      }
      while ( v49 );
    }
    sub_44D610((char *)v6);
    dword_B33A9C = 0;
    return 1;
  }
  while ( 1 )
  {
    v7 = *(Data **)v53;
    if ( !*(_DWORD *)v53 )
    {
LABEL_20:
      v6 = a1;
      goto LABEL_21;
    }
    if ( TESFile_IsLoaded(*(Data **)v53) )
    {
      TESFile_Open(v7);
      TESFile_BuildLoadedMasterArray(v7, (int *)(a1 + 0x8C8), 1);
      if ( TESFile::IsFileVersionTooHigh(v7) )
      {
        TESFile_SetIsLoaded(v7, 0);
        goto LABEL_19;
      }
      v8 = 0;
      MasterFileCount = TESFile_GetMasterFileCount(v7);
      if ( MasterFileCount )
        break;
    }
LABEL_19:
    v53 = *(_DWORD *)(v53 + 4);
    if ( !v53 )
      goto LABEL_20;
  }
  while ( 1 )
  {
    v9 = v8 + 1;
    MasterByIndex = (Data *)TESFile_GetMasterByIndex(v7, v8 + 1);
    v11 = MasterByIndex;
    if ( !MasterByIndex || TESFile::IsFileVersionTooHigh(MasterByIndex) )
      break;
    TESFile_SetIsLoaded(v11, 1);
    ++v8;
    if ( v9 >= MasterFileCount )
      goto LABEL_19;
  }
  v15 = v8 + 1;
  if ( TESFile_GetMasterNameByIndex(v7, v15) )
  {
    MasterNameByIndex = (const char *)TESFile_GetMasterNameByIndex(v7, v15);
    sub_404EC0("Unable to find masterfile: %s", MasterNameByIndex);
  }
  else
  {
    sub_404EC0("Unable to find masterfile: <unknown>");
  }
  *(_BYTE *)(v51 + 0x184) = 0;
  return 0;
}
