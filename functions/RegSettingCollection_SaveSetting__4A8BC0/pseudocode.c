bool __thiscall RegSettingCollection_SaveSetting(HKEY *this, BYTE *lpData)
{
  char *v2; // esi
  bool result; // al
  DWORD TypeFromName; // eax
  bool v6; // [esp+Eh] [ebp-4Ah]
  bool v7; // [esp+Fh] [ebp-49h]
  unsigned int cbData; // [esp+10h] [ebp-48h]
  char v9[64]; // [esp+14h] [ebp-44h] BYREF

  v2 = *((char **)lpData + 1);
  result = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = *(this + 0x42) == 0;
    if ( !*(this + 0x42) )
      (*((void (__thiscall **)(HKEY *, int))*this + 5))(this, 1);
    if ( *(this + 0x42) )
    {
      cbData = Setting_GetValueSize_((int)lpData);
      TypeFromName = Setting_GetTypeFromName(v2);
      if ( TypeFromName == 1 )
      {
        strcpy(v9, v2);
        v9[0] = 0x73;
        v2 = v9;
      }
      v6 = RegSetValueExA(*(this + 0x42), v2, 0, TypeFromName, lpData, cbData) == 0;
    }
    if ( v7 )
      (*((void (__thiscall **)(HKEY *))*this + 6))(this);
    return v6;
  }
  return result;
}
