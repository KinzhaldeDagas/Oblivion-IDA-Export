void __thiscall InputGlobals::SaveControlSettingsToINI(DIDEVCAPS *this)
{
  int v2; // eax
  CHAR v3; // cl
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // eax
  char v8; // cl
  void (__thiscall *v9)(void ***, float *); // edx
  char *v10; // esi
  LPCSTR *v11; // edi
  int v12; // ebx
  unsigned __int16 v13; // ax
  CHAR String[63]; // [esp+Ch] [ebp-148h] BYREF
  char v15; // [esp+4Bh] [ebp-109h] BYREF
  CHAR FileName[260]; // [esp+4Ch] [ebp-108h] BYREF

  v2 = 0;
  do
  {
    v3 = word_B3F280[v2];
    FileName[v2++] = v3;
  }
  while ( v3 );
  v4 = strlen(OblivionINI[0]) + 1;
  v5 = &v15;
  while ( *++v5 )
    ;
  qmemcpy(v5, OblivionINI[0], v4);
  v7 = 0;
  do
  {
    v8 = FileName[v7];
    byte_B07BF4[v7++] = v8;
  }
  while ( v8 );
  if ( ((unsigned __int8 (__thiscall *)(void ***, int))INISettingCollection[5])(&INISettingCollection, 1) )
  {
    v9 = (void (__thiscall *)(void ***, float *))INISettingCollection[3];
    flt_B02C4C = 1.8;
    v9(&INISettingCollection, &flt_B02C4C);
    v10 = (char *)this + 0x1B9B;
    v11 = &lpKeyName;
    v12 = 0x1D;
    do
    {
      HIBYTE(v13) = v10[0xFFFFFFE3];
      LOBYTE(v13) = *v10;
      _sprintf(String, "%08X", (unsigned __int8)v10[0x1D] | (v13 << 8));
      WritePrivateProfileStringA("Controls", *v11, String, FileName);
      ++v10;
      ++v11;
      --v12;
    }
    while ( v12 );
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection);
  }
}
