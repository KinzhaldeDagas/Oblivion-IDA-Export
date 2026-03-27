char sub_513BB0()
{
  const char *v4; // eax
  int v5; // ecx
  char v6; // dl
  const char *v7; // edx
  unsigned int v8; // eax
  char *v9; // edi
  int v11; // eax
  char v12; // cl
  char v15[4]; // [esp+0h] [ebp-108h]

  v4 = OblivionINI[0];
  if ( OblivionINI[0] )
  {
    v5 = 0;
    do
    {
      v6 = word_B3F280[v5];
      v15[v5++] = v6;
    }
    while ( v6 );
    v7 = v4;
    v8 = strlen(v4) + 1;
    v9 = v15 + 0xFFFFFFFF + 8;
    while ( *++v9 )
      ;
    qmemcpy(v9, v7, v8);
    v11 = 0;
    do
    {
      v12 = v15[v11];
      byte_B07BF4[v11++] = v12;
    }
    while ( v12 );
    if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0) )
    {
      ((void (__thiscall *)(void ***))INISettingCollection[8])(&INISettingCollection);
      ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection);
    }
  }
  Interface_ConsolePrint("The in-game settings have been refreshed from the Oblivion.ini file.");
  return 1;
}
