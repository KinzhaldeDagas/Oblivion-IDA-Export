char sub_513BB0()
{
  const char *v0; // eax
  int v1; // ecx
  char v2; // dl
  const char *v3; // edx
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // eax
  char v8; // cl
  char v11[4]; // [esp+0h] [ebp-108h]

  v0 = OblivionINI[0]; /*0x513bc4*/
  if ( OblivionINI[0] ) /*0x513bc4*/
  {
    v1 = 0; /*0x513bd1*/
    do /*0x513be1*/
    {
      v2 = unk_B3F280[v1]; /*0x513bd3*/
      v11[v1++] = v2; /*0x513bd9*/
    }
    while ( v2 ); /*0x513be1*/
    v3 = v0; /*0x513be3*/
    v4 = strlen(v0) + 1; /*0x513bf4*/
    v5 = v11 + 0xFFFFFFFF + 8; /*0x513bf6*/
    while ( *++v5 ) /*0x513c08*/
      ; /*0x513c00*/
    qmemcpy(v5, v3, v4); /*0x513c11*/
    v7 = 0; /*0x513c1b*/
    do /*0x513c2e*/
    {
      v8 = v11[v7]; /*0x513c20*/
      byte_B07BF4[v7++] = v8; /*0x513c23*/
    }
    while ( v8 ); /*0x513c2e*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0) ) /*0x513c3f*/
    {
      ((void (__thiscall *)(void ***))INISettingCollection[8])(&INISettingCollection); /*0x513c52*/
      ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection); /*0x513c61*/
    }
  }
  Interface_ConsolePrint("The in-game settings have been refreshed from the Oblivion.ini file."); /*0x513c68*/
  return 1; /*0x513c77*/
}
