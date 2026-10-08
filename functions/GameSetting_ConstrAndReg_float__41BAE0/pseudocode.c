float *__thiscall GameSetting_ConstrAndReg_float(float *this, int a2, float a3)
{
  int v4; // eax

  v4 = a2; /*0x41bb08*/
  *this = a3; /*0x41bb10*/
  *((_DWORD *)this + 1) = v4; /*0x41bb12*/
  if ( v4 ) /*0x41bb1f*/
  {
    if ( NiTMap_GetAt(&g_GameSettingsByName, v4, &a2) ) /*0x41bb2c*/
    {
      PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", *((const char **)this + 1)); /*0x41bb3e*/
      return this; /*0x41bb58*/
    }
    sub_412D30(&g_GameSettingsByName, *((_DWORD *)this + 1), (TESForm *)this); /*0x41bb65*/
  }
  return this; /*0x41bb48*/
}
