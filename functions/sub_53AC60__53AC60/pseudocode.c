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

  if ( GetPrivateProfileIntA("DEFAULT", "VERSION", 0, lpFileName) >= 0xE )
  {
    v0 = 0;
    do
    {
      v1 = word_B3F280[v0];
      v8[v0++] = v1;
    }
    while ( v1 );
    v2 = &lpFileName[strlen(lpFileName) + 1] - lpFileName;
    v3 = &v7;
    while ( *++v3 )
      ;
    qmemcpy(v3, lpFileName, v2);
    v5 = 0;
    do
    {
      v6 = v8[v5];
      byte_B11C44[v5++] = v6;
    }
    while ( v6 );
    if ( ((unsigned __int8 (__thiscall *)(void ***, _DWORD))BlendSettingCollection[5])(&BlendSettingCollection, 0) )
    {
      ((void (__thiscall *)(void ***))BlendSettingCollection[8])(&BlendSettingCollection);
      ((void (__thiscall *)(void ***))BlendSettingCollection[6])(&BlendSettingCollection);
    }
  }
  sub_53A1B0();
  sub_53A460();
  sub_53A720();
}
