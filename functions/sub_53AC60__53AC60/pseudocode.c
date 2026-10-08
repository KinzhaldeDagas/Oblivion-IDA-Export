void sub_53AC60()
{
  int v0; // eax
  char v1; // cl
  unsigned int v2; // eax
  char *v3; // edi
  int v5; // eax
  char v6; // cl
  char v7; // [esp-1h] [ebp-109h] BYREF
  char v8[260]; // [esp+0h] [ebp-108h]

  if ( GetPrivateProfileIntA("DEFAULT", "VERSION", 0, lpFileName) >= 0xE ) /*0x53ac8f*/
  {
    v0 = 0; /*0x53ac95*/
    do /*0x53acae*/
    {
      v1 = unk_B3F280[v0]; /*0x53aca0*/
      v8[v0++] = v1; /*0x53aca6*/
    }
    while ( v1 ); /*0x53acae*/
    v2 = &lpFileName[strlen(lpFileName) + 1] - lpFileName; /*0x53acc6*/
    v3 = &v7; /*0x53acc8*/
    while ( *++v3 ) /*0x53acd8*/
      ; /*0x53acd0*/
    qmemcpy(v3, lpFileName, v2); /*0x53ace1*/
    v5 = 0; /*0x53aceb*/
    do /*0x53acfe*/
    {
      v6 = v8[v5]; /*0x53acf0*/
      byte_B11C44[v5++] = v6; /*0x53acf3*/
    }
    while ( v6 ); /*0x53acfe*/
    if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))BlendSettingCollection[5])(&BlendSettingCollection, 0) ) /*0x53ad10*/
    {
      ((void (__thiscall *)(void ***))BlendSettingCollection[8])(&BlendSettingCollection); /*0x53ad24*/
      ((void (__thiscall *)(void ***))BlendSettingCollection[6])(&BlendSettingCollection); /*0x53ad34*/
    }
  }
  sub_53A1B0(); /*0x53ad36*/
  sub_53A460(); /*0x53ad3b*/
  sub_53A720(); /*0x53ad40*/
}
