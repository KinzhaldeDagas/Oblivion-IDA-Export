// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_iXenonMenuStickDeadZone()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&iXenonMenuStickDeadZone); /*0x9fb2b2*/
  return atexit(INISetting_Destroy_iXenonMenuStickDeadZone); /*0x9fb2c4*/
}
