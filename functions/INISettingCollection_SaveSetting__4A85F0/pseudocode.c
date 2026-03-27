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

  v2 = 0;
  if ( a2[1] )
  {
    v7 = *((_DWORD *)this + 0x42) == 0;
    if ( !*((_DWORD *)this + 0x42) )
      (*(void (__thiscall **)(CHAR *, int))(*(_DWORD *)this + 0x14))(this, 1);
    if ( *((_DWORD *)this + 0x42) )
    {
      TypeFromName = Setting_GetTypeFromName(a2[1]);
      INISettingCollection_GetSettingSectionName((int)a2, AppName);
      INISettingCollection_GetSettingKeyName((int)this, (int)a2, KeyName);
      switch ( TypeFromName )
      {
        case 1:
        case 3:
          _sprintf(String, "%d", *a2);
          goto LABEL_13;
        case 5:
          _sprintf(String, "%.4f", *(float *)a2);
          goto LABEL_13;
        case 6:
          v5 = WritePrivateProfileStringA(AppName, KeyName, *a2, this + 4);
          goto LABEL_14;
        case 7:
          INISettingCollection_UnpackRGBAValue((unsigned int)*a2, &v8, &v9, &v10, &v11);
          _sprintf(String, "%u,%u,%u", v8, v9, v10);
          goto LABEL_13;
        case 8:
          INISettingCollection_UnpackRGBAValue((unsigned int)*a2, &v11, &v10, &v9, &v8);
          _sprintf(String, "%u,%u,%u,%u", v11, v10, v9, v8);
          goto LABEL_13;
        default:
          _sprintf(String, "%u", *a2);
LABEL_13:
          v5 = WritePrivateProfileStringA(AppName, KeyName, String, this + 4);
LABEL_14:
          v2 = v5;
          break;
      }
    }
    if ( v7 )
      (*(void (__thiscall **)(CHAR *))(*(_DWORD *)this + 0x18))(this);
  }
  return v2;
}
