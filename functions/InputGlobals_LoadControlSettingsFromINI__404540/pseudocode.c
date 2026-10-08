// [Controller decode 2026-07-09] Loads [Controls] binding rows after version gate around 1.8, unpacking keyboard=(packed>>16), mouse=(packed>>8), joystick=packed. Joystick axis/invert settings are separate setting objects.
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

  v2 = 0; /*0x404559*/
  do /*0x40456f*/
  {
    v3 = unk_B3F280[v2]; /*0x404560*/
    FileName[v2++] = v3; /*0x404566*/
  }
  while ( v3 ); /*0x40456f*/
  v4 = strlen(OblivionINI[0]) + 1; /*0x40457f*/
  v5 = &v14; /*0x404587*/
  while ( *++v5 ) /*0x404598*/
    ; /*0x404590*/
  qmemcpy(v5, OblivionINI[0], v4); /*0x4045a1*/
  v7 = 0; /*0x4045aa*/
  do /*0x4045bf*/
  {
    v8 = FileName[v7]; /*0x4045b0*/
    byte_B07BF4[v7++] = v8; /*0x4045b4*/
  }
  while ( v8 ); /*0x4045bf*/
  result = ((int (__thiscall *)(void ***, _DWORD))INISettingCollection[5])(&INISettingCollection, 0); /*0x4045d0*/
  if ( (_BYTE)result ) /*0x4045d4*/
  {
    ((void (__thiscall *)(void ***, float *))INISettingCollection[4])(&INISettingCollection, &flt_B02C4C); /*0x4045ec*/
    if ( flt_B02C4C == 1.799999952316284 ) /*0x4045ff*/
    {
      for ( i = 0; i < 0x1D; ++i ) /*0x404607*/
      {
        if ( GetPrivateProfileStringA("Controls", (&lpKeyName)[i], 0, ReturnedString, 0x40u, FileName) ) /*0x40462b*/
        {
          v11 = strtol(ReturnedString, &EndPtr, 0x10); /*0x40463d*/
          this->KeyboardInputControls[i] = BYTE2(v11); /*0x40464f*/
          this->MouseInputControls[i] = BYTE1(v11); /*0x404656*/
          this->JoystickInputControls[i] = v11; /*0x40465d*/
        }
      }
    }
    return ((int (__thiscall *)(void ***))INISettingCollection[6])(&INISettingCollection); /*0x40467a*/
  }
  return result; /*0x40467c*/
}
