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
  char *v12; // [esp+8h] [ebp-160h]
  bool v13; // [esp+13h] [ebp-155h]
  DWORD Type; // [esp+14h] [ebp-154h] BYREF
  DWORD cbData; // [esp+18h] [ebp-150h] BYREF
  CHAR ValueName[64]; // [esp+1Ch] [ebp-14Ch] BYREF
  BYTE Data[264]; // [esp+5Ch] [ebp-10Ch] BYREF

  v2 = *(CHAR **)(a2 + 4); /*0x4a8d3e*/
  v3 = 0; /*0x4a8d41*/
  if ( v2 )
  {
    v13 = *(this + 0x42) == 0; /*0x4a8d5a*/
    if ( !*(this + 0x42) ) /*0x4a8d4e*/
      (*((void (__thiscall **)(HKEY *, _DWORD))*this + 5))(this, 0); /*0x4a8d67*/
    if ( *(this + 0x42) )
    {
      cbData = Setting_GetValueSize_(a2); /*0x4a8d7d*/
      TypeFromName = Setting_GetTypeFromName(*(char **)(a2 + 4)); /*0x4a8d85*/
      if ( TypeFromName )
        v6 = TypeFromName != 6 ? 4 : 1;
      else
        v6 = 3; /*0x4a8da0*/
      Type = v6; /*0x4a8da8*/
      if ( v6 == 1 ) /*0x4a8dac*/
      {
        strcpy(ValueName, v2); /*0x4a8db2*/
        Data[0] = 0; /*0x4a8dc2*/
        ValueName[0] = 0x73; /*0x4a8dc6*/
        v2 = ValueName; /*0x4a8dcb*/
        cbData = 0x104; /*0x4a8dcf*/
        v7 = Data; /*0x4a8dd7*/
      }
      else
      {
        v7 = (BYTE *)a2; /*0x4a8ddd*/
      }
      v8 = RegQueryValueExA(*(this + 0x42), v2, 0, &Type, v7, &cbData); /*0x4a8df4*/
      v3 = v8 == 0; /*0x4a8dfc*/
      if ( !v8 && Type == 1 ) /*0x4a8e08*/
        Setting_SetStringValue((const char **)a2, (int)Data, v10, v11, v12); /*0x4a8e11*/
    }
    if ( v13 ) /*0x4a8e1b*/
      (*((void (__thiscall **)(HKEY *))*this + 6))(this); /*0x4a8e24*/
  }
  return v3; /*0x4a8e26*/
}
