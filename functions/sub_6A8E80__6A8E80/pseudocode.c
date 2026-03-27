char __stdcall sub_6A8E80(char *lpFileName, __int16 a2)
{
  HANDLE FirstFileA; // eax
  void *v3; // esi
  BOOL (__stdcall *v4)(HANDLE, LPWIN32_FIND_DATAA); // ebp
  int v5; // ebx
  int v6; // ebx
  HANDLE v7; // esi
  struct _WIN32_FIND_DATAA FindFileData; // [esp+10h] [ebp-248h] BYREF
  char v10[260]; // [esp+150h] [ebp-108h] BYREF

  switch ( a2 )
  {
    case 1:
      _sprintf(v10, "Data\\Music\\Public\\");
      break;
    case 2:
      _sprintf(v10, "Data\\Music\\Dungeon\\");
      break;
    case 4:
      _sprintf(v10, "Data\\Music\\Battle\\");
      break;
    default:
      _sprintf(v10, "Data\\Music\\Explore\\");
      break;
  }
  _sprintf(lpFileName, "%s*.mp3", v10);
  FirstFileA = FindFirstFileA(lpFileName, &FindFileData);
  v3 = FirstFileA;
  if ( FirstFileA != (HANDLE)0xFFFFFFFF )
  {
    v4 = FindNextFileA;
    v5 = 1;
    if ( FindNextFileA(FirstFileA, &FindFileData) )
    {
      do
        ++v5;
      while ( v4(v3, &FindFileData) );
    }
    FindClose(v3);
    if ( v5 )
    {
      v6 = GetRandomLargeInteger_(0) % v5;
      v7 = FindFirstFileA(lpFileName, &FindFileData);
      if ( v7 != (HANDLE)0xFFFFFFFF )
      {
        if ( !v6 )
        {
LABEL_14:
          FindClose(v7);
          strcpy(lpFileName, v10);
          strcat(lpFileName, FindFileData.cFileName);
          return 1;
        }
        while ( 1 )
        {
          --v6;
          if ( !v4(v7, &FindFileData) )
            break;
          if ( !v6 )
            goto LABEL_14;
        }
        FindClose(v7);
      }
    }
  }
  return 0;
}
