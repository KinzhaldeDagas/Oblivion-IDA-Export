bool __thiscall RegSettingCollection_SaveSetting(HKEY *this, BYTE *lpData)
{
  char *v2; // esi
  bool result; // al
  DWORD TypeFromName; // eax
  bool v6; // [esp+Eh] [ebp-4Ah]
  bool v7; // [esp+Fh] [ebp-49h]
  unsigned int cbData; // [esp+10h] [ebp-48h]
  char v9[64]; // [esp+14h] [ebp-44h] BYREF

  v2 = *((char **)lpData + 1); /*0x4a8bd4*/
  result = 0; /*0x4a8bd7*/
  v6 = 0; /*0x4a8bde*/
  if ( v2 ) /*0x4a8be2*/
  {
    v7 = *(this + 0x42) == 0; /*0x4a8bf4*/
    if ( !*(this + 0x42) ) /*0x4a8be8*/
      (*((void (__thiscall **)(HKEY *, int))*this + 5))(this, 1); /*0x4a8c01*/
    if ( *(this + 0x42) ) /*0x4a8c03*/
    {
      cbData = Setting_GetValueSize_((int)lpData); /*0x4a8c14*/
      TypeFromName = Setting_GetTypeFromName(v2); /*0x4a8c18*/
      if ( TypeFromName == 1 ) /*0x4a8c23*/
      {
        strcpy(v9, v2); /*0x4a8c2a*/
        v9[0] = 0x73; /*0x4a8c3c*/
        v2 = v9; /*0x4a8c41*/
      }
      v6 = RegSetValueExA(*(this + 0x42), v2, 0, TypeFromName, lpData, cbData) == 0; /*0x4a8c5f*/
    }
    if ( v7 ) /*0x4a8c69*/
      (*((void (__thiscall **)(HKEY *))*this + 6))(this); /*0x4a8c72*/
    return v6; /*0x4a8c74*/
  }
  return result; /*0x4a8c78*/
}
