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

  _sprintf(String, "%d", 0xE); /*0x53ad80*/
  WritePrivateProfileStringA("DEFAULT", "VERSION", String, lpFileName); /*0x53ad9e*/
  v0 = 0; /*0x53ada4*/
  do /*0x53adbf*/
  {
    v1 = unk_B3F280[v0]; /*0x53adb0*/
    v10[v0++] = v1; /*0x53adb6*/
  }
  while ( v1 ); /*0x53adbf*/
  v2 = &lpFileName[strlen(lpFileName) + 1] - lpFileName; /*0x53add7*/
  v3 = &v9; /*0x53add9*/
  while ( *++v3 ) /*0x53ade8*/
    ; /*0x53ade0*/
  qmemcpy(v3, lpFileName, v2); /*0x53adf1*/
  v5 = 0; /*0x53adfb*/
  do /*0x53ae0f*/
  {
    v6 = v10[v5]; /*0x53ae00*/
    byte_B11C44[v5++] = v6; /*0x53ae04*/
  }
  while ( v6 ); /*0x53ae0f*/
  result = ((int (__thiscall *)(void ***, int))BlendSettingCollection[5])(&BlendSettingCollection, 1); /*0x53ae20*/
  if ( (_BYTE)result ) /*0x53ae24*/
  {
    ((void (__thiscall *)(void ***))BlendSettingCollection[7])(&BlendSettingCollection); /*0x53ae33*/
    return ((int (__thiscall *)(void ***))BlendSettingCollection[6])(&BlendSettingCollection); /*0x53ae42*/
  }
  return result; /*0x53ae44*/
}
