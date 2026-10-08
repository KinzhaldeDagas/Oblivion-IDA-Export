int __thiscall sub_44A2B0(char *this, LPCSTR lpString2)
{
  char *v3; // esi
  Data *v4; // edi
  _DWORD *v5; // eax
  void (__stdcall *v6)(LPSTR, LPCSTR); // edi
  unsigned int v7; // esi
  int *i; // esi
  int v9; // edi
  Data *v10; // eax
  Data *v11; // ebp
  int *v12; // esi
  int *v13; // ecx
  Data *v14; // edi
  int *v15; // eax
  unsigned int *v16; // esi
  int *v17; // ebp
  unsigned int v18; // edi
  HANDLE FirstFileA; // eax
  unsigned int *v20; // eax
  int *v21; // esi
  Data *v22; // ebp
  unsigned int v23; // edi
  unsigned int v24; // ebx
  _DWORD *MasterByIndex; // edi
  int *v26; // eax
  int *v27; // eax
  int *j; // esi
  int *k; // esi
  char v31; // [esp+17h] [ebp-36Dh]
  int *v32; // [esp+18h] [ebp-36Ch]
  HANDLE hFindFile; // [esp+1Ch] [ebp-368h]
  unsigned int v34; // [esp+20h] [ebp-364h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+2Ch] [ebp-358h] BYREF
  CHAR FileName[260]; // [esp+16Ch] [ebp-218h] BYREF
  CHAR String1[260]; // [esp+270h] [ebp-114h] BYREF
  unsigned int v38; // [esp+380h] [ebp-4h]

  lstrcpyA(String1, lpString2); /*0x44a301*/
  v3 = this + 0x8C8; /*0x44a307*/
  v32 = (int *)v3; /*0x44a311*/
  while ( v3 ) /*0x44a315*/
  {
    v4 = *(Data **)v3; /*0x44a317*/
    if ( *(_DWORD *)v3 ) /*0x44a317*/
    {
      if ( TESFile_Open(*(Data **)v3) ) /*0x44a31f*/
      {
        v5 = *((_DWORD **)v3 + 1); /*0x44a328*/
        if ( v5 ) /*0x44a32d*/
        {
          *((_DWORD *)v3 + 1) = v5[1]; /*0x44a332*/
          *(_DWORD *)v3 = *v5; /*0x44a338*/
          FormHeapFree((unsigned int)v5); /*0x44a33a*/
        }
        else
        {
          *(_DWORD *)v3 = 0; /*0x44a34d*/
        }
        TESFile_Close(v4); /*0x44a344*/
      }
      else
      {
        v3 = *((char **)v3 + 1); /*0x44a356*/
        TESFile_Close(v4); /*0x44a35b*/
      }
    }
    else
    {
      v3 = *((char **)v3 + 1); /*0x44a362*/
    }
  }
  v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x44a369*/
  v7 = 0; /*0x44a36f*/
  v34 = 0; /*0x44a371*/
  do /*0x44a54b*/
  {
    lstrcpyA(FileName, String1); /*0x44a385*/
    if ( v7 ) /*0x44a38f*/
      v6(FileName, "*.esp"); /*0x44a3a3*/
    else
      v6(FileName, "*.esm"); /*0x44a3b2*/
    hFindFile = FindFirstFileA(FileName, &FindFileData); /*0x44a3ca*/
    if ( hFindFile != (HANDLE)0xFFFFFFFF ) /*0x44a3ce*/
    {
      do /*0x44a51e*/
      {
        if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow ) /*0x44a3de*/
        {
          for ( i = v32; i; i = (int *)i[1] ) /*0x44a3ea*/
          {
            v9 = *i; /*0x44a3f0*/
            if ( !*i ) /*0x44a3f0*/
              break; /*0x44a3f0*/
            if ( !CRT_StricmpLocaleDispatch(FindFileData.cFileName, (const char *)(v9 + 0x1C)) ) /*0x44a409*/
            {
              if ( v9 ) /*0x44a416*/
                goto LABEL_43; /*0x44a416*/
              break; /*0x44a416*/
            }
          }
          v10 = (Data *)FormHeapAlloc(0x41Cu); /*0x44a41c*/
          v38 = 0; /*0x44a42f*/
          if ( v10 ) /*0x44a436*/
            v11 = TESFile_constr(v10, lpString2, FindFileData.cFileName, 0); /*0x44a44a*/
          else
            v11 = 0; /*0x44a44e*/
          v38 = 0xFFFFFFFF; /*0x44a452*/
          TESFile_Close(v11); /*0x44a45d*/
          v12 = v32; /*0x44a462*/
          v13 = 0; /*0x44a466*/
          if ( v32 ) /*0x44a46a*/
          {
            do /*0x44a500*/
            {
              v14 = (Data *)*v12; /*0x44a470*/
              if ( !*v12 ) /*0x44a470*/
                break; /*0x44a474*/
              if ( (!TESFile_GetIsMaster((Data *)*v12) || !TESFile_GetIsMaster(v11)) /*0x44a49d*/
                && (TESFile_GetIsMaster(v14) || TESFile_GetIsMaster(v11)) )
              {
                if ( TESFile_GetIsMaster(v11) ) /*0x44a4f0*/
                {
LABEL_34:
                  if ( !v11 ) /*0x44a4be*/
                    goto LABEL_43; /*0x44a4be*/
                  if ( *v12 ) /*0x44a4c0*/
                  {
                    v15 = (int *)FormHeapAlloc(8u); /*0x44a4ca*/
                    if ( v15 ) /*0x44a4d4*/
                    {
                      *v15 = *v12; /*0x44a4dc*/
                      v15[1] = 0; /*0x44a4de*/
                      v15[1] = v12[1]; /*0x44a4e4*/
                      v12[1] = (int)v15; /*0x44a4e7*/
                      *v12 = (int)v11; /*0x44a4ea*/
                      goto LABEL_43; /*0x44a4ec*/
                    }
                    *(_DWORD *)4 = v12[1]; /*0x44a5c5*/
                    v12[1] = 0; /*0x44a5c8*/
                  }
                  *v12 = (int)v11; /*0x44a5cb*/
                  goto LABEL_43; /*0x44a5cd*/
                }
              }
              else if ( CompareFileTime(&v14->findData.ftLastWriteTime, &FindFileData.ftLastWriteTime) >= 0 ) /*0x44a4ba*/
              {
                goto LABEL_34; /*0x44a4ba*/
              }
              v13 = v12; /*0x44a4f9*/
              v12 = (int *)v12[1]; /*0x44a4fb*/
            }
            while ( v12 ); /*0x44a500*/
            if ( v13 ) /*0x44a508*/
              goto LABEL_42; /*0x44a508*/
          }
          v13 = v32; /*0x44a50a*/
LABEL_42:
          BSSimpleList_PushBack(v13, (int)v11); /*0x44a50e*/
        }
LABEL_43:
        ; /*0x44a514*/
      }
      while ( FindNextFileA(hFindFile, &FindFileData) ); /*0x44a51e*/
      FindClose(hFindFile); /*0x44a531*/
      v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA; /*0x44a537*/
      v7 = v34; /*0x44a53d*/
    }
    v34 = ++v7; /*0x44a547*/
  }
  while ( v7 < 2 ); /*0x44a54b*/
  v16 = (unsigned int *)v32; /*0x44a551*/
  v17 = 0; /*0x44a555*/
  if ( v32 ) /*0x44a559*/
  {
    do /*0x44a611*/
    {
      v18 = *v16; /*0x44a55f*/
      if ( !*v16 ) /*0x44a55f*/
        break; /*0x44a563*/
      lstrcpyA(FileName, (LPCSTR)(v18 + 0x120)); /*0x44a578*/
      lstrcatA(FileName, (LPCSTR)(v18 + 0x1C)); /*0x44a58a*/
      FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x44a59d*/
      if ( FirstFileA == (HANDLE)0xFFFFFFFF ) /*0x44a5a6*/
      {
        v20 = (unsigned int *)v16[1]; /*0x44a5a8*/
        if ( v20 ) /*0x44a5ad*/
        {
          v16[1] = v20[1]; /*0x44a5d9*/
          *v16 = *v20; /*0x44a5df*/
          FormHeapFree((unsigned int)v20); /*0x44a5e1*/
        }
        else if ( v17 ) /*0x44a5b1*/
        {
          BSSimpleList_Remove(v17, v18); /*0x44a5b6*/
          v16 = (unsigned int *)v17[1]; /*0x44a5bb*/
        }
        else
        {
          *v16 = 0; /*0x44a5eb*/
        }
        if ( v18 ) /*0x44a5ef*/
        {
          TESFile_destr((CHAR *)v18); /*0x44a5f3*/
          FormHeapFree(v18); /*0x44a5f9*/
        }
      }
      else
      {
        v17 = (int *)v16; /*0x44a603*/
        v16 = (unsigned int *)v16[1]; /*0x44a605*/
        FindClose(FirstFileA); /*0x44a609*/
      }
    }
    while ( v16 ); /*0x44a611*/
  }
  v21 = v32; /*0x44a617*/
  while ( v21 ) /*0x44a61d*/
  {
    if ( !v21[1] && !*v21 ) /*0x44a628*/
      break; /*0x44a62a*/
    v22 = (Data *)*v21; /*0x44a630*/
    v31 = 0; /*0x44a634*/
    if ( !TESFile_GetIsMaster((Data *)*v21) ) /*0x44a639*/
      goto LABEL_78; /*0x44a639*/
    TESFile_BuildLoadedMasterArray(v22, v32, 0); /*0x44a64e*/
    v23 = 0; /*0x44a655*/
    if ( !TESFile_GetMasterFileCount(v22) ) /*0x44a657*/
      goto LABEL_78; /*0x44a657*/
    do /*0x44a6c5*/
    {
      v24 = v23 + 1; /*0x44a660*/
      MasterByIndex = TESFile_GetMasterByIndex(v22, v23 + 1); /*0x44a66b*/
      if ( MasterByIndex ) /*0x44a66f*/
      {
        v26 = v21; /*0x44a671*/
        while ( (_DWORD *)*v26 != MasterByIndex ) /*0x44a675*/
        {
          v26 = (int *)v26[1]; /*0x44a677*/
          if ( !v26 ) /*0x44a67c*/
            goto LABEL_76; /*0x44a67c*/
        }
        BSSimpleList_Remove(v21, (int)MasterByIndex); /*0x44a683*/
        if ( *v21 ) /*0x44a688*/
        {
          v27 = (int *)FormHeapAlloc(8u); /*0x44a68f*/
          if ( v27 ) /*0x44a699*/
          {
            *v27 = *v21; /*0x44a69d*/
            v27[1] = 0; /*0x44a69f*/
          }
          else
          {
            v27 = 0; /*0x44a6a8*/
          }
          v27[1] = v21[1]; /*0x44a6ad*/
          v21[1] = (int)v27; /*0x44a6b0*/
        }
        *v21 = (int)MasterByIndex; /*0x44a6b3*/
        v31 = 1; /*0x44a6b5*/
      }
LABEL_76:
      v23 = v24; /*0x44a6ba*/
    }
    while ( v24 < TESFile_GetMasterFileCount(v22) ); /*0x44a6c5*/
    if ( !v31 ) /*0x44a6cc*/
LABEL_78:
      v21 = (int *)v21[1]; /*0x44a6ce*/
  }
  for ( j = v32; j; j = (int *)j[1] ) /*0x44a6e3*/
  {
    if ( !j[1] && !*j ) /*0x44a6ea*/
      break; /*0x44a6ec*/
    TESFile_BuildLoadedMasterArray((Data *)*j, v32, 0); /*0x44a6f2*/
  }
  for ( k = v32; k; k = (int *)k[1] ) /*0x44a702*/
  {
    if ( !*k ) /*0x44a704*/
      break; /*0x44a708*/
    TESFile_Close((Data *)*k); /*0x44a70a*/
  }
  return 1; /*0x44a71b*/
}
