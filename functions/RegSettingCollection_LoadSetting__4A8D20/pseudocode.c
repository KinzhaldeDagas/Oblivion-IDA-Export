bool __thiscall RegSettingCollection_LoadSetting(HKEY *this, int a2)
{
  CHAR *v2; // esi
  bool v3; // bl
  signed int TypeFromName; // eax
  DWORD v6; // eax
  BYTE *v7; // ecx
  LSTATUS v8; // eax
  int v10; // [esp+0h] [ebp-168h]
  int v11; // [esp+4h] [ebp-164h]
  int v12; // [esp+8h] [ebp-160h]
  bool v13; // [esp+13h] [ebp-155h]
  DWORD Type; // [esp+14h] [ebp-154h] BYREF
  DWORD cbData; // [esp+18h] [ebp-150h] BYREF
  CHAR ValueName[64]; // [esp+1Ch] [ebp-14Ch] BYREF
  BYTE Data[264]; // [esp+5Ch] [ebp-10Ch] BYREF

  v2 = *(CHAR **)(a2 + 4);
  v3 = 0;
  if ( v2 )
  {
    v13 = *(this + 0x42) == 0;
    if ( !*(this + 0x42) )
      (*((void (__thiscall **)(HKEY *, _DWORD))*this + 5))(this, 0);
    if ( *(this + 0x42) )
    {
      cbData = Setting_GetValueSize_(a2);
      TypeFromName = Setting_GetTypeFromName(*(char **)(a2 + 4));
      if ( TypeFromName )
        v6 = TypeFromName != 6 ? 4 : 1;
      else
        v6 = 3;
      Type = v6;
      if ( v6 == 1 )
      {
        strcpy(ValueName, v2);
        Data[0] = 0;
        ValueName[0] = 0x73;
        v2 = ValueName;
        cbData = 0x104;
        v7 = Data;
      }
      else
      {
        v7 = (BYTE *)a2;
      }
      v8 = RegQueryValueExA(*(this + 0x42), v2, 0, &Type, v7, &cbData);
      v3 = v8 == 0;
      if ( !v8 && Type == 1 )
        Setting_SetStringValue((const char **)a2, (int)Data, v10, v11, v12);
    }
    if ( v13 )
      (*((void (__thiscall **)(HKEY *))*this + 6))(this);
  }
  return v3;
}
