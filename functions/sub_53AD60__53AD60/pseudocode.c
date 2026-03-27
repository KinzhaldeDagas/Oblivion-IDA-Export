int sub_53AD60()
{
  int v0; // eax
  char v1; // cl
  unsigned int v2; // eax
  char *v3; // edi
  int v5; // eax
  char v6; // cl
  int result; // eax
  CHAR String[63]; // [esp+0h] [ebp-148h] BYREF
  char v9; // [esp+3Fh] [ebp-109h] BYREF
  char v10[260]; // [esp+40h] [ebp-108h]

  _sprintf(String, "%d", 0xE);
  WritePrivateProfileStringA("DEFAULT", "VERSION", String, lpFileName);
  v0 = 0;
  do
  {
    v1 = word_B3F280[v0];
    v10[v0++] = v1;
  }
  while ( v1 );
  v2 = &lpFileName[strlen(lpFileName) + 1] - lpFileName;
  v3 = &v9;
  while ( *++v3 )
    ;
  qmemcpy(v3, lpFileName, v2);
  v5 = 0;
  do
  {
    v6 = v10[v5];
    byte_B11C44[v5++] = v6;
  }
  while ( v6 );
  result = ((int (__thiscall *)(void ***, int))BlendSettingCollection[5])(&BlendSettingCollection, 1);
  if ( (_BYTE)result )
  {
    ((void (__thiscall *)(void ***))BlendSettingCollection[7])(&BlendSettingCollection);
    return ((int (__thiscall *)(void ***))BlendSettingCollection[6])(&BlendSettingCollection);
  }
  return result;
}
