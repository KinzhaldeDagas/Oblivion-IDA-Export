// NoCombatMusic research: music type 4 selects Data\Music\Battle\*.mp3.
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

  switch ( a2 ) /*0x6a8eac*/
  {
    case 1: /*0x6a8eac*/
      _sprintf(v10, "Data\\Music\\Public\\"); /*0x6a8ec7*/
      break; /*0x6a8ec7*/
    case 2: /*0x6a8eac*/
      _sprintf(v10, "Data\\Music\\Dungeon\\"); /*0x6a8ed6*/
      break; /*0x6a8ed6*/
    case 4: /*0x6a8eac*/
      _sprintf(v10, "Data\\Music\\Battle\\"); /*0x6a8ee5*/
      break; /*0x6a8ee5*/
    default:
      _sprintf(v10, "Data\\Music\\Explore\\"); /*0x6a8ef4*/
      break; /*0x6a8ef4*/
  }
  _sprintf(lpFileName, "%s*.mp3", v10); /*0x6a8f0a*/
  FirstFileA = FindFirstFileA(lpFileName, &FindFileData); /*0x6a8f18*/
  v3 = FirstFileA; /*0x6a8f1e*/
  if ( FirstFileA != (HANDLE)0xFFFFFFFF ) /*0x6a8f23*/
  {
    v4 = FindNextFileA; /*0x6a8f29*/
    v5 = 1; /*0x6a8f35*/
    if ( FindNextFileA(FirstFileA, &FindFileData) ) /*0x6a8f3a*/
    {
      do /*0x6a8f49*/
        ++v5; /*0x6a8f46*/
      while ( v4(v3, &FindFileData) ); /*0x6a8f49*/
    }
    FindClose(v3); /*0x6a8f50*/
    if ( v5 ) /*0x6a8f58*/
    {
      v6 = Game_RandomLargeInteger(0) % v5; /*0x6a8f71*/
      v7 = FindFirstFileA(lpFileName, &FindFileData); /*0x6a8f79*/
      if ( v7 != (HANDLE)0xFFFFFFFF ) /*0x6a8f7e*/
      {
        if ( !v6 ) /*0x6a8f82*/
        {
LABEL_14:
          FindClose(v7); /*0x6a8f97*/
          strcpy(lpFileName, v10); /*0x6a8f9e*/
          strcat(lpFileName, FindFileData.cFileName); /*0x6a8fe1*/
          return 1; /*0x6a8fec*/
        }
        while ( 1 ) /*0x6a8f8a*/
        {
          --v6; /*0x6a8f8a*/
          if ( !v4(v7, &FindFileData) ) /*0x6a8f8d*/
            break; /*0x6a8f8d*/
          if ( !v6 ) /*0x6a8f95*/
            goto LABEL_14; /*0x6a8f95*/
        }
        FindClose(v7); /*0x6a8fef*/
      }
    }
  }
  return 0; /*0x6a8ff7*/
}
