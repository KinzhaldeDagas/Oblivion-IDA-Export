bool __thiscall INISettingCollection_SaveSetting(CHAR *this, char **a2)
{
  bool v2; // bl
  signed int TypeFromName; // ebx
  BOOL v5; // eax
  bool v7; // [esp+1Bh] [ebp-195h]
  unsigned int v8; // [esp+1Ch] [ebp-194h] BYREF
  int v9; // [esp+20h] [ebp-190h] BYREF
  int v10; // [esp+24h] [ebp-18Ch] BYREF
  unsigned int v11; // [esp+28h] [ebp-188h] BYREF
  CHAR AppName[64]; // [esp+2Ch] [ebp-184h] BYREF
  CHAR KeyName[64]; // [esp+6Ch] [ebp-144h] BYREF
  CHAR String[256]; // [esp+ACh] [ebp-104h] BYREF

  v2 = 0; /*0x4a860d*/
  if ( a2[1] ) /*0x4a860f*/
  {
    v7 = *((_DWORD *)this + 0x42) == 0; /*0x4a8628*/
    if ( !*((_DWORD *)this + 0x42) ) /*0x4a861c*/
      (*(void (__thiscall **)(CHAR *, int))(*(_DWORD *)this + 0x14))(this, 1); /*0x4a8635*/
    if ( *((_DWORD *)this + 0x42) ) /*0x4a8637*/
    {
      TypeFromName = Setting_GetTypeFromName(a2[1]); /*0x4a8653*/
      INISettingCollection_GetSettingSectionName((int)a2, AppName); /*0x4a8655*/
      INISettingCollection_GetSettingKeyName((int)this, (int)a2, KeyName); /*0x4a8660*/
      switch ( TypeFromName ) /*0x4a8674*/
      {
        case 1: /*0x4a8674*/
        case 3: /*0x4a8674*/
          _sprintf(String, "%d", *a2); /*0x4a86a1*/
          goto LABEL_13; /*0x4a86a1*/
        case 5: /*0x4a8674*/
          _sprintf(String, "%.4f", *(float *)a2); /*0x4a86d9*/
          goto LABEL_13; /*0x4a86e1*/
        case 6: /*0x4a8674*/
          v5 = WritePrivateProfileStringA(AppName, KeyName, *a2, this + 4); /*0x4a868c*/
          goto LABEL_14; /*0x4a868c*/
        case 7: /*0x4a8674*/
          INISettingCollection_UnpackRGBAValue((unsigned int)*a2, &v8, &v9, &v10, &v11); /*0x4a86fd*/
          _sprintf(String, "%u,%u,%u", v8, v9, v10); /*0x4a871e*/
          goto LABEL_13; /*0x4a8726*/
        case 8: /*0x4a8674*/
          INISettingCollection_UnpackRGBAValue((unsigned int)*a2, &v11, &v10, &v9, &v8); /*0x4a873f*/
          _sprintf(String, "%u,%u,%u,%u", v11, v10, v9, v8); /*0x4a8765*/
          goto LABEL_13; /*0x4a876d*/
        default:
          _sprintf(String, "%u", *a2); /*0x4a877f*/
LABEL_13:
          v5 = WritePrivateProfileStringA(AppName, KeyName, String, this + 4); /*0x4a8787*/
LABEL_14:
          v2 = v5; /*0x4a87a3*/
          break; /*0x4a87a5*/
      }
    }
    if ( v7 ) /*0x4a87ad*/
      (*(void (__thiscall **)(CHAR *))(*(_DWORD *)this + 0x18))(this); /*0x4a87b6*/
  }
  return v2; /*0x4a87b8*/
}
