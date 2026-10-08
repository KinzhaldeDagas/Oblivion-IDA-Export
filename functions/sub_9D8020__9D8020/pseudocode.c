// [Controller decode 2026-07-09] Registers bUseJoystick:Controls with the INI setting collection.
int INISetting_Init_bUseJoystick()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bUseJoystick); /*0x9d8052*/
  return atexit(INISetting_Destroy_bUseJoystick); /*0x9d8064*/
}
