// Verified TESDataHandler_LoadFiles behavior: when activeFileState.retainActiveFile is nonzero, reopens the retained TESFile and rebuilds its loaded-master array before completing the file load. The flag's writer remains Unknown.
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
  Data **v23; // edi
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
  _DWORD *i; // edi
  int j; // edi
  int v43; // edi
  int v44; // edi
  int v45; // ebp
  int k; // edi
  int v47; // ecx
  _DWORD *v48; // edi
  _DWORD *v49; // edi
  int v51; // [esp+14h] [ebp-8h]
  unsigned int MasterFileCount; // [esp+18h] [ebp-4h]
  int v53; // [esp+24h] [ebp+8h]
  char v54; // [esp+24h] [ebp+8h]
  bool v55; // [esp+24h] [ebp+8h]

  v6 = a1; /*0x44f3e4*/
  v51 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x44f3f5*/
  *(_BYTE *)(v51 + 0x184) = 1; /*0x44f3f9*/
  if ( a5 || a6 ) /*0x44f404*/
    *(_DWORD *)(a1 + 0x8D0) = 0; /*0x44f408*/
  sub_442630(MEMORY[0xB333A0], 0, 0); /*0x44f41a*/
  if ( !a5 && !a6 ) /*0x44f428*/
    MEMORY[0xB333A0]->currentWorldSpace = 0; /*0x44f430*/
  MEMORY[0xB333A0]->currentInteriorCell = 0; /*0x44f438*/
  sub_43F220(MEMORY[0xB333A0]); /*0x44f441*/
  v53 = v6 + 0x8C8; /*0x44f453*/
  if ( *(_BYTE *)(v6 + 0xCD1) ) /*0x44f446*/
  {
    TESFile_Open(*(Data **)(v6 + 0x8C4)); /*0x44f45f*/
    TESFile_BuildLoadedMasterArray(*(Data **)(v6 + 0x8C4), (int *)(v6 + 0x8C8), 1); /*0x44f46d*/
  }
  if ( v6 == 0xFFFFF738 )
  {
LABEL_21:
    v12 = v6 + 0x8C8; /*0x44f525*/
    v13 = 0; /*0x44f531*/
    v54 = bDisableWarning_MESSAGES; /*0x44f535*/
    bDisableWarning_MESSAGES = 1; /*0x44f539*/
    if ( v6 != 0xFFFFF738 ) /*0x44f540*/
    {
      do /*0x44f653*/
      {
        v14 = *(Data **)v12; /*0x44f550*/
        if ( !*(_DWORD *)v12 ) /*0x44f550*/
          break; /*0x44f555*/
        if ( TESFile_IsLoaded(*(Data **)v12) ) /*0x44f55d*/
        {
          if ( !TESFile_GetIsMaster(v14) && !*(_BYTE *)(v6 + 0xCD0) ) /*0x44f575*/
          {
            if ( TESFile_HaveMastersChanged(v14) ) /*0x44f57f*/
            {
              v13 = 1; /*0x44f592*/
              PrintError(off_B05574, v14->name); /*0x44f594*/
            }
          }
          if ( TESFile_IsActive(v14) ) /*0x44f59e*/
          {
            *(_DWORD *)(v6 + 0x8C4) = v14; /*0x44f5a7*/
          }
          else
          {
            *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 0x8D0) + 0x8D4) = v14; /*0x44f618*/
            v18 = *(_BYTE *)(v6 + 0x8D0); /*0x44f61f*/
            ++*(_DWORD *)(v6 + 0x8D0); /*0x44f626*/
            TESFile_SetFileIndex(v14, v18); /*0x44f630*/
            if ( *(_DWORD *)(v6 + 0x8D0) >= 0xFFu ) /*0x44f63f*/
              sub_404EC0("Too many selected files to compile!"); /*0x44f646*/
          }
        }
        v12 = *(_DWORD *)(v12 + 4); /*0x44f64e*/
      }
      while ( v12 ); /*0x44f653*/
    }
    *(_DWORD *)(v6 + 0x8C0) = 0xFF000800; /*0x44f65b*/
    if ( v13 ) /*0x44f665*/
      PrintError(off_B0557C); /*0x44f66e*/
    bDisableWarning_MESSAGES = v54; /*0x44f67a*/
    v19 = *(_DWORD *)(v6 + 0x8C4); /*0x44f67f*/
    if ( v19 ) /*0x44f687*/
    {
      *(_DWORD *)(v6 + 4 * *(_DWORD *)(v6 + 0x8D0) + 0x8D4) = v19; /*0x44f68f*/
      v20 = *(_BYTE *)(v6 + 0x8D0); /*0x44f696*/
      v21 = *(Data **)(v6 + 0x8C4); /*0x44f69d*/
      ++*(_DWORD *)(v6 + 0x8D0); /*0x44f6a3*/
      TESFile_SetFileIndex(v21, v20); /*0x44f6ab*/
      if ( *(_DWORD *)(v6 + 0x8D0) >= 0xFFu ) /*0x44f6ba*/
        sub_404EC0("Too many selected files to compile!"); /*0x44f6c1*/
    }
    TESDataHandler_CreateBuiltinObjects((int *)v6); /*0x44f6cb*/
    v22 = 0; /*0x44f6d0*/
    if ( *(_DWORD *)(v6 + 0x8D0) )
    {
      v23 = (Data **)(v6 + 0x8D4); /*0x44f6da*/
      do
      {
        if ( TESFile_OpenBSFileWrapper__(*v23, 0, 0) )
          unk_B33A90 += (*v23)->formCount; /*0x44f706*/
        else
          PrintError("DataHandler: internal error");
        ++v22; /*0x44f70c*/
        ++v23; /*0x44f70f*/
      }
      while ( v22 < *(_DWORD *)(v6 + 0x8D0) );
    }
    v24 = 0; /*0x44f71a*/
    v25 = *(_DWORD *)(v6 + 0x8D0) == 0; /*0x44f71c*/
    unk_B33A94 = 0; /*0x44f722*/
    *(_BYTE *)(v6 + 0xCD7) = 1; /*0x44f72c*/
    if ( !v25 )
    {
      do
      {
        v55 = 0; /*0x44f737*/
        if ( !v24 ) /*0x44f73c*/
          v55 = a5 == 0; /*0x44f745*/
        if ( !TESDataHandler_LoadFile(a2, a3, (TESWorldSpace **)v6, *(Data **)(v6 + 4 * v24 + 0x8D4), v55) )
        {
          v26 = sub_494480(); /*0x44f762*/
          PrintError("DataHandler: unrecognized form\r\nLook in the %s file for more info.\r\n", v26);
        }
        ++v24; /*0x44f775*/
      }
      while ( v24 < *(_DWORD *)(v6 + 0x8D0) );
    }
    v27 = (_DWORD *)(v6 + 0x44); /*0x44f780*/
    *(_BYTE *)(v6 + 0xCD7) = 0; /*0x44f785*/
    if ( v6 != 0xFFFFFFBC ) /*0x44f78c*/
    {
      do /*0x44f7a2*/
      {
        if ( !*v27 ) /*0x44f790*/
          break; /*0x44f794*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v27 + 0x6C))(*v27); /*0x44f79b*/
        v27 = (_DWORD *)v27[1]; /*0x44f79d*/
      }
      while ( v27 ); /*0x44f7a2*/
    }
    v28 = (_DWORD *)(v6 + 0x5C); /*0x44f7a4*/
    if ( v6 != 0xFFFFFFA4 ) /*0x44f7a9*/
    {
      do /*0x44f7c2*/
      {
        if ( !*v28 ) /*0x44f7b0*/
          break; /*0x44f7b4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v28 + 0x6C))(*v28); /*0x44f7bb*/
        v28 = (_DWORD *)v28[1]; /*0x44f7bd*/
      }
      while ( v28 ); /*0x44f7c2*/
    }
    v29 = (_DWORD *)(v6 + 0x84); /*0x44f7c4*/
    if ( v6 != 0xFFFFFF7C ) /*0x44f7cc*/
    {
      do /*0x44f7e2*/
      {
        if ( !*v29 ) /*0x44f7d0*/
          break; /*0x44f7d4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v29 + 0x6C))(*v29); /*0x44f7db*/
        v29 = (_DWORD *)v29[1]; /*0x44f7dd*/
      }
      while ( v29 ); /*0x44f7e2*/
    }
    v30 = (_DWORD *)(v6 + 0x8C); /*0x44f7e4*/
    if ( v6 != 0xFFFFFF74 ) /*0x44f7ec*/
    {
      do /*0x44f802*/
      {
        if ( !*v30 ) /*0x44f7f0*/
          break; /*0x44f7f4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v30 + 0x6C))(*v30); /*0x44f7fb*/
        v30 = (_DWORD *)v30[1]; /*0x44f7fd*/
      }
      while ( v30 ); /*0x44f802*/
    }
    v31 = (_DWORD *)(v6 + 0x94); /*0x44f804*/
    if ( v6 != 0xFFFFFF6C ) /*0x44f80c*/
    {
      do /*0x44f822*/
      {
        if ( !*v31 ) /*0x44f810*/
          break; /*0x44f814*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v31 + 0x6C))(*v31); /*0x44f81b*/
        v31 = (_DWORD *)v31[1]; /*0x44f81d*/
      }
      while ( v31 ); /*0x44f822*/
    }
    v32 = (_DWORD *)(v6 + 0xAC); /*0x44f824*/
    if ( v6 != 0xFFFFFF54 ) /*0x44f82c*/
    {
      do /*0x44f842*/
      {
        if ( !*v32 ) /*0x44f830*/
          break; /*0x44f834*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v32 + 0x6C))(*v32); /*0x44f83b*/
        v32 = (_DWORD *)v32[1]; /*0x44f83d*/
      }
      while ( v32 ); /*0x44f842*/
    }
    v33 = (_DWORD *)(v6 + 0x9C); /*0x44f844*/
    if ( v6 != 0xFFFFFF64 ) /*0x44f84c*/
    {
      do /*0x44f862*/
      {
        if ( !*v33 ) /*0x44f850*/
          break; /*0x44f854*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v33 + 0x6C))(*v33); /*0x44f85b*/
        v33 = (_DWORD *)v33[1]; /*0x44f85d*/
      }
      while ( v33 ); /*0x44f862*/
    }
    v34 = (_DWORD *)(v6 + 0xB4); /*0x44f864*/
    if ( v6 != 0xFFFFFF4C ) /*0x44f86c*/
    {
      do /*0x44f882*/
      {
        if ( !*v34 ) /*0x44f870*/
          break; /*0x44f874*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v34 + 0x6C))(*v34); /*0x44f87b*/
        v34 = (_DWORD *)v34[1]; /*0x44f87d*/
      }
      while ( v34 ); /*0x44f882*/
    }
    v35 = (_DWORD *)(v6 + 0xA4); /*0x44f884*/
    if ( v6 != 0xFFFFFF5C ) /*0x44f88c*/
    {
      do /*0x44f8a2*/
      {
        if ( !*v35 ) /*0x44f890*/
          break; /*0x44f894*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v35 + 0x6C))(*v35); /*0x44f89b*/
        v35 = (_DWORD *)v35[1]; /*0x44f89d*/
      }
      while ( v35 ); /*0x44f8a2*/
    }
    v36 = (_DWORD *)(v6 + 0x4C); /*0x44f8a4*/
    if ( v6 != 0xFFFFFFB4 ) /*0x44f8a9*/
    {
      do /*0x44f8c2*/
      {
        if ( !*v36 ) /*0x44f8b0*/
          break; /*0x44f8b4*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v36 + 0x6C))(*v36); /*0x44f8bb*/
        v36 = (_DWORD *)v36[1]; /*0x44f8bd*/
      }
      while ( v36 ); /*0x44f8c2*/
    }
    v37 = v6 + 0x8C8; /*0x44f8c4*/
    v38 = 0; /*0x44f8ca*/
    v39 = 0; /*0x44f8cc*/
    if ( v6 == 0xFFFFF738 ) /*0x44f8d0*/
      goto LABEL_91; /*0x44f8d0*/
    do /*0x44f8e9*/
    {
      if ( !*(_DWORD *)v37 ) /*0x44f8d2*/
        break; /*0x44f8d6*/
      if ( TESFile_IsLoaded(*(Data **)v37) ) /*0x44f8d8*/
        ++v39; /*0x44f8e1*/
      v37 = *(_DWORD *)(v37 + 4); /*0x44f8e4*/
    }
    while ( v37 ); /*0x44f8e9*/
    if ( v39 != 1 ) /*0x44f8ee*/
LABEL_91:
      SortTopicListByDisplayName(0); /*0x44f8f6*/
    else
      v38 = 1; /*0x44f8f0*/
    sub_402860((TESForm **)&MEMORY[0xB332E0]); /*0x44f903*/
    v40 = (_DWORD *)(v6 + 0x7C); /*0x44f908*/
    if ( v6 != 0xFFFFFF84 ) /*0x44f90d*/
    {
      do /*0x44f922*/
      {
        if ( !*v40 ) /*0x44f910*/
          break; /*0x44f914*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v40 + 0x6C))(*v40); /*0x44f91b*/
        v40 = (_DWORD *)v40[1]; /*0x44f91d*/
      }
      while ( v40 ); /*0x44f922*/
    }
    if ( !v38 ) /*0x44f926*/
      SortTopicQuestInfoEntriesForQuest(0);     // After form loading, sorts TESTopic quest-entry buckets by QUST priority before dialogue selection begins. /*0x44f92a*/
    for ( i = (_DWORD *)TESHealthForm_GetHealth(*(TESHealthForm **)v6); i; i = (_DWORD *)TESObject_GetNextObject(i) ) /*0x44f93d*/
      (*(void (__thiscall **)(_DWORD *))(*i + 0x6C))(i); /*0x44f947*/
    *(_BYTE *)(v51 + 0x184) = 0; /*0x44f95a*/
    for ( j = *(_DWORD *)(v6 + 0xBC); j; j = v43 - 4 ) /*0x44f969*/
    {
      if ( !*(_DWORD *)(j + 8) && !*(_DWORD *)(j + 4) ) /*0x44f976*/
        break; /*0x44f97a*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(j + 4) + 0x6C))(*(_DWORD *)(j + 4)); /*0x44f984*/
      v43 = *(_DWORD *)(j + 8); /*0x44f986*/
      if ( !v43 ) /*0x44f98b*/
        break; /*0x44f98b*/
    }
    v44 = v6 + 0xC; /*0x44f995*/
    if ( v6 != 0xFFFFFFF4 ) /*0x44f999*/
    {
      do /*0x44f9b0*/
      {
        if ( *(_DWORD *)v44 ) /*0x44f9a0*/
          a4 = TESWorldSpace_IndexPersistentCellSubSpaces((TESWorldSpace *)*(_DWORD *)v44, a4);// Verified SubSpace index build pass: during TESDataHandler_LoadFiles, after form loading and prior to returning to the initialization caller, iterates worldspaceList and builds each +0x60 index from its persistent cell. This is the observed full-load reconstruction path; no post-CreateDuplicateForm rebuild call is established. /*0x44f9a6*/
        v44 = *(_DWORD *)(v44 + 4); /*0x44f9ab*/
      }
      while ( v44 ); /*0x44f9b0*/
    }
    v45 = *(_DWORD *)(v6 + 0xCC); /*0x44f9b2*/
    for ( k = 0; k < v45; ++k ) /*0x44f9bc*/
    {
      v47 = *(_DWORD *)(*(_DWORD *)(v6 + 0xC4) + 4 * k); /*0x44f9c6*/
      if ( v47 ) /*0x44f9cb*/
        (*(void (__thiscall **)(int))(*(_DWORD *)v47 + 0x6C))(v47); /*0x44f9d2*/
    }
    v48 = (_DWORD *)(v6 + 0xC); /*0x44f9db*/
    if ( v6 != 0xFFFFFFF4 ) /*0x44f9df*/
    {
      do /*0x44f9f3*/
      {
        if ( *v48 ) /*0x44f9e1*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v48 + 0x6C))(*v48); /*0x44f9ec*/
        v48 = (_DWORD *)v48[1]; /*0x44f9ee*/
      }
      while ( v48 ); /*0x44f9f3*/
    }
    sub_520FA0((NiTMap_TESCELL *)dword_B361CC[0x3D]); /*0x44f9fb*/
    sub_416900(); /*0x44fa00*/
    v49 = (_DWORD *)(v6 + 4); /*0x44fa05*/
    if ( v6 != 0xFFFFFFFC ) /*0x44fa0a*/
    {
      do /*0x44fa22*/
      {
        if ( *v49 ) /*0x44fa10*/
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*v49 + 0x6C))(*v49); /*0x44fa1b*/
        v49 = (_DWORD *)v49[1]; /*0x44fa1d*/
      }
      while ( v49 ); /*0x44fa22*/
    }
    sub_44D610((char *)v6); /*0x44fa26*/
    unk_B33A9C = 0; /*0x44fa2e*/
    return 1; /*0x44fa38*/
  }
  while ( 1 ) /*0x44f484*/
  {
    v7 = *(Data **)v53; /*0x44f484*/
    if ( !*(_DWORD *)v53 ) /*0x44f488*/
    {
LABEL_20:
      v6 = a1; /*0x44f521*/
      goto LABEL_21; /*0x44f521*/
    }
    if ( TESFile_IsLoaded(*(Data **)v53) ) /*0x44f490*/
    {
      TESFile_Open(v7); /*0x44f49b*/
      TESFile_BuildLoadedMasterArray(v7, (int *)(a1 + 0x8C8), 1); /*0x44f4ae*/
      if ( TESFile::IsFileVersionTooHigh(v7) ) /*0x44f4b5*/
      {
        TESFile_SetIsLoaded(v7, 0); /*0x44f509*/
        goto LABEL_19; /*0x44f509*/
      }
      v8 = 0; /*0x44f4c5*/
      MasterFileCount = TESFile_GetMasterFileCount(v7); /*0x44f4c9*/
      if ( MasterFileCount ) /*0x44f4cd*/
        break; /*0x44f4cd*/
    }
LABEL_19:
    v53 = *(_DWORD *)(v53 + 4); /*0x44f50e*/
    if ( !v53 ) /*0x44f51b*/
      goto LABEL_20; /*0x44f51b*/
  }
  while ( 1 ) /*0x44f4d0*/
  {
    v9 = v8 + 1; /*0x44f4d0*/
    MasterByIndex = (Data *)TESFile_GetMasterByIndex(v7, v8 + 1); /*0x44f4d6*/
    v11 = MasterByIndex; /*0x44f4db*/
    if ( !MasterByIndex || TESFile::IsFileVersionTooHigh(MasterByIndex) ) /*0x44f4e7*/
      break; /*0x44f4e7*/
    TESFile_SetIsLoaded(v11, 1); /*0x44f4f8*/
    ++v8; /*0x44f4fd*/
    if ( v9 >= MasterFileCount ) /*0x44f503*/
      goto LABEL_19; /*0x44f503*/
  }
  v15 = v8 + 1; /*0x44f5b2*/
  if ( TESFile_GetMasterNameByIndex(v7, v15) )
  {
    MasterNameByIndex = (const char *)TESFile_GetMasterNameByIndex(v7, v15); /*0x44f5c4*/
    sub_404EC0("Unable to find masterfile: %s", MasterNameByIndex);
  }
  else
  {
    sub_404EC0("Unable to find masterfile: <unknown>");
  }
  *(_BYTE *)(v51 + 0x184) = 0; /*0x44f5de*/
  return 0; /*0x44f5db*/
}
