int __thiscall InputGlobals::LoadControlSettingsFromINI(InputGlobal *this)
{
  int v2; // eax
  CHAR v3; // cl
  unsigned int v4; // eax
  char *v5; // edi
  int v7; // eax
  char v8; // cl
  int result; // eax
  int i; // esi
  int v11; // eax
  char *EndPtr; // [esp+Ch] [ebp-14Ch] BYREF
  CHAR ReturnedString[63]; // [esp+10h] [ebp-148h] BYREF
  char v14; // [esp+4Fh] [ebp-109h] BYREF
  CHAR FileName[260]; // [esp+50h] [ebp-108h] BYREF

  v2 = 0;
  do
  {
    v3 = word_B3F280[v2];
    FileName[v2++] = v3;
  }
  while ( v3 );
  v4 = strlen(OblivionINI[0]) + 1;
  v5 = &v14;
  while ( *++v5 )
    ;
  qmemcpy(v5, OblivionINI[0], v4);
  v7 = 0;
  do
  {
    v8 = FileName[v7];
    byte_B07BF4[v7++] = v8;
  }
  while ( v8 );
  result = ((int (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0);
  if ( (_BYTE)result )
  {
    ((void (__thiscall *)(void ***, float *))INISettingCollection[4])(&INISettingCollection, &flt_B02C4C);
    if ( flt_B02C4C == 1.799999952316284 )
    {
      for ( i = 0; i < 0x1D; ++i )
      {
        if ( GetPrivateProfileStringA("Controls", (&lpKeyName)[i], 0, ReturnedString, 0x40u, FileName) )
        {
          v11 = strtol(ReturnedString, &EndPtr, 0x10);
          this->KeyboardInputControls[i] = BYTE2(v11);
          this->MouseInputControls[i] = BYTE1(v11);
          this->JoystickInputControls[i] = v11;
        }
      }
    }
    return ((int (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection);
  }
  return result;
}
