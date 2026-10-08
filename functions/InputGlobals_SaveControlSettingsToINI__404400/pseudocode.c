// [Controller decode 2026-07-09] Saves 29 logical binding rows to Oblivion.ini [Controls] as 8-digit hex strings: keyboard<<16 | mouse<<8 | joystick, with an unused zero high byte. Axis/invert joystick settings are separate INI values.
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

  v2 = 0; /*0x404419*/
  do /*0x40442f*/
  {
    v3 = unk_B3F280[v2]; /*0x404420*/
    FileName[v2++] = v3; /*0x404426*/
  }
  while ( v3 ); /*0x40442f*/
  v4 = strlen(OblivionINI[0]) + 1; /*0x40443f*/
  v5 = &v15; /*0x404447*/
  while ( *++v5 ) /*0x404458*/
    ; /*0x404450*/
  qmemcpy(v5, OblivionINI[0], v4); /*0x404461*/
  v7 = 0; /*0x40446a*/
  do /*0x40447f*/
  {
    v8 = FileName[v7]; /*0x404470*/
    byte_B07BF4[v7++] = v8; /*0x404474*/
  }
  while ( v8 ); /*0x40447f*/
  if ( ((unsigned __int8 (__thiscall *)(void ***, int))INISettingCollection[5])(&INISettingCollection, 1) ) /*0x404490*/
  {
    v9 = (void (__thiscall *)(void ***, float *))INISettingCollection[3]; /*0x4044a5*/
    flt_B02C4C = 1.8; /*0x4044a8*/
    v9(&INISettingCollection, &flt_B02C4C); /*0x4044b9*/
    v10 = (char *)this + 0x1B9B; /*0x4044c1*/
    v11 = &lpKeyName; /*0x4044c7*/
    v12 = 0x1D; /*0x4044cc*/
    do /*0x404511*/
    {
      HIBYTE(v13) = v10[0xFFFFFFE3]; /*0x4044d7*/
      LOBYTE(v13) = *v10; /*0x4044de*/
      _sprintf(String, "%08X", (unsigned __int8)v10[0x1D] | (v13 << 8)); /*0x4044ec*/
      WritePrivateProfileStringA("Controls", *v11, String, FileName); /*0x404506*/
      ++v10; /*0x404508*/
      ++v11; /*0x40450b*/
      --v12; /*0x40450e*/
    }
    while ( v12 ); /*0x404511*/
    ((void (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection); /*0x404520*/
  }
}
