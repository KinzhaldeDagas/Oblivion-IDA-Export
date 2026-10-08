bool __userpurge INISettingCollection_LoadSetting@<al>(CHAR *a1@<ecx>, int a2@<ebp>, int a3)
{
  bool v3; // bl
  signed int TypeFromName; // ebp
  float *v6; // eax
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

  v3 = 0; /*0x4a881d*/
  if ( *(_DWORD *)(a3 + 4) ) /*0x4a881f*/
  {
    v15 = *((_DWORD *)a1 + 0x42) == 0; /*0x4a8838*/
    if ( !*((_DWORD *)a1 + 0x42) ) /*0x4a882c*/
      (*(void (__thiscall **)(CHAR *, int))(*(_DWORD *)a1 + 0x14))(a1, 1); /*0x4a8845*/
    if ( *((_DWORD *)a1 + 0x42) ) /*0x4a8847*/
    {
      TypeFromName = Setting_GetTypeFromName(*(char **)(a3 + 4)); /*0x4a8864*/
      INISettingCollection_GetSettingSectionName(a3, AppName); /*0x4a8866*/
      INISettingCollection_GetSettingKeyName((int)a1, a3, KeyName); /*0x4a8871*/
      switch ( TypeFromName ) /*0x4a8882*/
      {
        case 0: /*0x4a8882*/
          v9 = sub_404DF0((int *)a3); /*0x4a8a70*/
          *(_BYTE *)a3 = GetPrivateProfileIntA(AppName, KeyName, *(_BYTE *)v9 != 0, a1 + 4) != 0; /*0x4a8a98*/
          goto LABEL_18; /*0x4a8a9a*/
        case 1: /*0x4a8882*/
          v6 = sub_403BE0((float *)a3); /*0x4a88c3*/
          *(_BYTE *)a3 = GetPrivateProfileIntA(AppName, KeyName, *(_DWORD *)v6, a1 + 4); /*0x4a88df*/
          goto LABEL_18; /*0x4a88e1*/
        case 3: /*0x4a8882*/
          v11 = *(_DWORD *)sub_403BE0((float *)a3); /*0x4a88f3*/
          PrivateProfileIntA = GetPrivateProfileIntA(AppName, KeyName, v11, a1 + 4); /*0x4a88fe*/
          break; /*0x4a88fe*/
        case 5: /*0x4a8882*/
          v8 = *(float *)GameSetting_GetSafeFloatPointer((int *)a3); /*0x4a890a*/
          _sprintf(Default, "%f", v8); /*0x4a891f*/
          if ( GetPrivateProfileStringA(AppName, KeyName, Default, Src, 0x100, a1 + 4) ) /*0x4a894a*/
            v3 = sscanf(Src, "%f", a3) == 1; /*0x4a8971*/
          goto LABEL_18; /*0x4a8974*/
        case 6: /*0x4a8882*/
          GetPrivateProfileStringA(AppName, KeyName, *(LPCSTR *)a3, ReturnedString, 0x100, a1 + 4);// Performance audit resolution: Oblivion loads string INI settings, including sArchiveList:Archive, through GetPrivateProfileStringA with nSize=0x100. The later 0x8000 archive-list initial copy is therefore bounded by this authoritative producer; no extra copy hook required. /*0x4a88a7*/
          Setting_SetStringValue((const char **)a3, (int)ReturnedString, a2, v13, v14); /*0x4a88b7*/
          goto LABEL_18; /*0x4a88bc*/
        case 7: /*0x4a8882*/
          if ( !GetPrivateProfileStringA(AppName, KeyName, EmptyString, Src, 0x100, a1 + 4) ) /*0x4a89a1*/
            goto LABEL_18; /*0x4a89a1*/
          v3 = sscanf(Src, "%u,%u,%u", &v17, &v16, &v18) == 3; /*0x4a89dc*/
          PrivateProfileIntA = (((unsigned __int8)v18 | (((v17 << 8) | (unsigned __int8)v16) << 8)) << 8) | 0xFF; /*0x4a89ec*/
          break; /*0x4a89f1*/
        case 8: /*0x4a8882*/
          if ( !GetPrivateProfileStringA(AppName, KeyName, EmptyString, Src, 0x100, a1 + 4) ) /*0x4a8a1e*/
            goto LABEL_18; /*0x4a8a1e*/
          v3 = sscanf(Src, "%u,%u,%u,%u", &v19, &v16, &v17, &v18) == 4; /*0x4a8a61*/
          PrivateProfileIntA = INISettingCollection_PackRGBAValue(v19, v16, v17, v18); /*0x4a8a64*/
          break; /*0x4a8a6c*/
        default:
          PrivateProfileIntA = GetPrivateProfileIntA(AppName, KeyName, *(_DWORD *)a3, a1 + 4); /*0x4a8aad*/
          break; /*0x4a8aad*/
      }
      *(_DWORD *)a3 = PrivateProfileIntA; /*0x4a8ab3*/
    }
LABEL_18:
    if ( v15 ) /*0x4a8abb*/
      (*(void (__thiscall **)(CHAR *))(*(_DWORD *)a1 + 0x18))(a1); /*0x4a8ac4*/
  }
  return v3; /*0x4a8ac6*/
}
