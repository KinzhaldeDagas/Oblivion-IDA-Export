bool __userpurge INISettingCollection_LoadSetting@<al>(CHAR *a1@<ecx>, int a2@<ebp>, int a3)
{
  bool v3; // bl
  signed int TypeFromName; // ebp
  int *v6; // eax
  UINT PrivateProfileIntA; // eax
  double v8; // st7
  int *v9; // eax
  INT v11; // [esp+4h] [ebp-6B0h]
  int v13; // [esp+10h] [ebp-6A4h]
  int v14; // [esp+14h] [ebp-6A0h]
  bool v15; // [esp+1Fh] [ebp-695h]
  int v16; // [esp+20h] [ebp-694h] BYREF
  int v17; // [esp+24h] [ebp-690h] BYREF
  int v18; // [esp+28h] [ebp-68Ch] BYREF
  int v19; // [esp+2Ch] [ebp-688h] BYREF
  CHAR KeyName[64]; // [esp+30h] [ebp-684h] BYREF
  CHAR AppName[64]; // [esp+70h] [ebp-644h] BYREF
  CHAR Src[256]; // [esp+B0h] [ebp-604h] BYREF
  CHAR Default[256]; // [esp+1B0h] [ebp-504h] BYREF
  CHAR ReturnedString[1024]; // [esp+2B0h] [ebp-404h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a3 + 4) )
  {
    v15 = *((_DWORD *)a1 + 0x42) == 0;
    if ( !*((_DWORD *)a1 + 0x42) )
      (*(void (__thiscall **)(CHAR *, int))(*(_DWORD *)a1 + 0x14))(a1, 1);
    if ( *((_DWORD *)a1 + 0x42) )
    {
      TypeFromName = Setting_GetTypeFromName(*(char **)(a3 + 4));
      INISettingCollection_GetSettingSectionName(a3, AppName);
      INISettingCollection_GetSettingKeyName((int)a1, a3, KeyName);
      switch ( TypeFromName )
      {
        case 0:
          v9 = sub_404DF0((int *)a3);
          *(_BYTE *)a3 = GetPrivateProfileIntA(AppName, KeyName, *(_BYTE *)v9 != 0, a1 + 4) != 0;
          goto LABEL_18;
        case 1:
          v6 = sub_403BE0((int *)a3);
          *(_BYTE *)a3 = GetPrivateProfileIntA(AppName, KeyName, *v6, a1 + 4);
          goto LABEL_18;
        case 3:
          v11 = *sub_403BE0((int *)a3);
          PrivateProfileIntA = GetPrivateProfileIntA(AppName, KeyName, v11, a1 + 4);
          break;
        case 5:
          v8 = *(float *)GameSetting_GetSafeFloatPointer((int *)a3);
          _sprintf(Default, "%f", v8);
          if ( GetPrivateProfileStringA(AppName, KeyName, Default, Src, 0x100, a1 + 4) )
            v3 = sscanf(Src, "%f", a3) == 1;
          goto LABEL_18;
        case 6:
          GetPrivateProfileStringA(AppName, KeyName, *(LPCSTR *)a3, ReturnedString, 0x100, a1 + 4);
          Setting_SetStringValue((const char **)a3, (int)ReturnedString, a2, v13, v14);
          goto LABEL_18;
        case 7:
          if ( !GetPrivateProfileStringA(AppName, KeyName, EmptyString, Src, 0x100, a1 + 4) )
            goto LABEL_18;
          v3 = sscanf(Src, "%u,%u,%u", &v17, &v16, &v18) == 3;
          PrivateProfileIntA = (((unsigned __int8)v18 | (((v17 << 8) | (unsigned __int8)v16) << 8)) << 8) | 0xFF;
          break;
        case 8:
          if ( !GetPrivateProfileStringA(AppName, KeyName, EmptyString, Src, 0x100, a1 + 4) )
            goto LABEL_18;
          v3 = sscanf(Src, "%u,%u,%u,%u", &v19, &v16, &v17, &v18) == 4;
          PrivateProfileIntA = INISettingCollection_PackRGBAValue(v19, v16, v17, v18);
          break;
        default:
          PrivateProfileIntA = GetPrivateProfileIntA(AppName, KeyName, *(_DWORD *)a3, a1 + 4);
          break;
      }
      *(_DWORD *)a3 = PrivateProfileIntA;
    }
LABEL_18:
    if ( v15 )
      (*(void (__thiscall **)(CHAR *))(*(_DWORD *)a1 + 0x18))(a1);
  }
  return v3;
}
