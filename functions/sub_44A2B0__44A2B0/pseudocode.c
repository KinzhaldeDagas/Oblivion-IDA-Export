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
  unsigned int *v17; // ebp
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

  lstrcpyA(String1, lpString2);
  v3 = this + 0x8C8;
  v32 = (int *)v3;
  while ( v3 )
  {
    v4 = *(Data **)v3;
    if ( *(_DWORD *)v3 )
    {
      if ( TESFile_Open(*(Data **)v3) )
      {
        v5 = *((_DWORD **)v3 + 1);
        if ( v5 )
        {
          *((_DWORD *)v3 + 1) = v5[1];
          *(_DWORD *)v3 = *v5;
          FormHeapFree((unsigned int)v5);
        }
        else
        {
          *(_DWORD *)v3 = 0;
        }
        TESFile_Close(v4);
      }
      else
      {
        v3 = *((char **)v3 + 1);
        TESFile_Close(v4);
      }
    }
    else
    {
      v3 = *((char **)v3 + 1);
    }
  }
  v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
  v7 = 0;
  v34 = 0;
  do
  {
    lstrcpyA(FileName, String1);
    if ( v7 )
      v6(FileName, "*.esp");
    else
      v6(FileName, "*.esm");
    hFindFile = FindFirstFileA(FileName, &FindFileData);
    if ( hFindFile != (HANDLE)0xFFFFFFFF )
    {
      do
      {
        if ( FindFileData.nFileSizeHigh || FindFileData.nFileSizeLow )
        {
          for ( i = v32; i; i = (int *)i[1] )
          {
            v9 = *i;
            if ( !*i )
              break;
            if ( !_strcmp(FindFileData.cFileName, (char *)(v9 + 0x1C)) )
            {
              if ( v9 )
                goto LABEL_43;
              break;
            }
          }
          v10 = (Data *)FormHeapAlloc(0x41Cu);
          v38 = 0;
          if ( v10 )
            v11 = TESFile_constr(v10, lpString2, FindFileData.cFileName, 0);
          else
            v11 = 0;
          v38 = 0xFFFFFFFF;
          TESFile_Close(v11);
          v12 = v32;
          v13 = 0;
          if ( v32 )
          {
            do
            {
              v14 = (Data *)*v12;
              if ( !*v12 )
                break;
              if ( (!TESFile_GetIsMaster((Data *)*v12) || !TESFile_GetIsMaster(v11))
                && (TESFile_GetIsMaster(v14) || TESFile_GetIsMaster(v11)) )
              {
                if ( TESFile_GetIsMaster(v11) )
                {
LABEL_34:
                  if ( !v11 )
                    goto LABEL_43;
                  if ( *v12 )
                  {
                    v15 = (int *)FormHeapAlloc(8u);
                    if ( v15 )
                    {
                      *v15 = *v12;
                      v15[1] = 0;
                      v15[1] = v12[1];
                      v12[1] = (int)v15;
                      *v12 = (int)v11;
                      goto LABEL_43;
                    }
                    *(_DWORD *)4 = v12[1];
                    v12[1] = 0;
                  }
                  *v12 = (int)v11;
                  goto LABEL_43;
                }
              }
              else if ( CompareFileTime(&v14->findData.ftLastWriteTime, &FindFileData.ftLastWriteTime) >= 0 )
              {
                goto LABEL_34;
              }
              v13 = v12;
              v12 = (int *)v12[1];
            }
            while ( v12 );
            if ( v13 )
              goto LABEL_42;
          }
          v13 = v32;
LABEL_42:
          BSSimpleList_PushBack(v13, (int)v11);
        }
LABEL_43:
        ;
      }
      while ( FindNextFileA(hFindFile, &FindFileData) );
      FindClose(hFindFile);
      v6 = (void (__stdcall *)(LPSTR, LPCSTR))lstrcatA;
      v7 = v34;
    }
    v34 = ++v7;
  }
  while ( v7 < 2 );
  v16 = (unsigned int *)v32;
  v17 = 0;
  if ( v32 )
  {
    do
    {
      v18 = *v16;
      if ( !*v16 )
        break;
      lstrcpyA(FileName, (LPCSTR)(v18 + 0x120));
      lstrcatA(FileName, (LPCSTR)(v18 + 0x1C));
      FirstFileA = FindFirstFileA(FileName, &FindFileData);
      if ( FirstFileA == (HANDLE)0xFFFFFFFF )
      {
        v20 = (unsigned int *)v16[1];
        if ( v20 )
        {
          v16[1] = v20[1];
          *v16 = *v20;
          FormHeapFree((unsigned int)v20);
        }
        else if ( v17 )
        {
          BSSimpleList_Remove(v17, v18);
          v16 = (unsigned int *)v17[1];
        }
        else
        {
          *v16 = 0;
        }
        if ( v18 )
        {
          TESFile_destr((CHAR *)v18);
          FormHeapFree(v18);
        }
      }
      else
      {
        v17 = v16;
        v16 = (unsigned int *)v16[1];
        FindClose(FirstFileA);
      }
    }
    while ( v16 );
  }
  v21 = v32;
  while ( v21 )
  {
    if ( !v21[1] && !*v21 )
      break;
    v22 = (Data *)*v21;
    v31 = 0;
    if ( !TESFile_GetIsMaster((Data *)*v21) )
      goto LABEL_78;
    TESFile_BuildLoadedMasterArray(v22, v32, 0);
    v23 = 0;
    if ( !TESFile_GetMasterFileCount(v22) )
      goto LABEL_78;
    do
    {
      v24 = v23 + 1;
      MasterByIndex = TESFile_GetMasterByIndex(v22, v23 + 1);
      if ( MasterByIndex )
      {
        v26 = v21;
        while ( (_DWORD *)*v26 != MasterByIndex )
        {
          v26 = (int *)v26[1];
          if ( !v26 )
            goto LABEL_76;
        }
        BSSimpleList_Remove(v21, (int)MasterByIndex);
        if ( *v21 )
        {
          v27 = (int *)FormHeapAlloc(8u);
          if ( v27 )
          {
            *v27 = *v21;
            v27[1] = 0;
          }
          else
          {
            v27 = 0;
          }
          v27[1] = v21[1];
          v21[1] = (int)v27;
        }
        *v21 = (int)MasterByIndex;
        v31 = 1;
      }
LABEL_76:
      v23 = v24;
    }
    while ( v24 < TESFile_GetMasterFileCount(v22) );
    if ( !v31 )
LABEL_78:
      v21 = (int *)v21[1];
  }
  for ( j = v32; j; j = (int *)j[1] )
  {
    if ( !j[1] && !*j )
      break;
    TESFile_BuildLoadedMasterArray((Data *)*j, v32, 0);
  }
  for ( k = v32; k; k = (int *)k[1] )
  {
    if ( !*k )
      break;
    TESFile_Close((Data *)*k);
  }
  return 1;
}
