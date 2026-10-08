// Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
GameSettingString *__thiscall GameSetting_ConstrAndReg(
        GameSettingString *self,
        const char *name,
        const char *defaultValue)
{
  const char *v4; // eax
  const char *v5; // ecx

  v4 = name; /*0x419a98*/
  v5 = defaultValue; /*0x419a9c*/
  self->name = name; /*0x419aa0*/
  self->value = v5; /*0x419aa3*/
  if ( v4 ) /*0x419aaf*/
  {
    if ( NiTMap_GetAt(&g_GameSettingsByName, (int)v4, &name) ) /*0x419abc*/
    {
      PrintError("Setting key '%s' already used in map.\nSetting keys must be unique.\n", self->name); /*0x419ace*/
      return self; /*0x419ae8*/
    }
    sub_412D30(&g_GameSettingsByName, (int)self->name, (TESForm *)self); /*0x419af5*/
  }
  return self; /*0x419ad8*/
}
