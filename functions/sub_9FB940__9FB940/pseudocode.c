// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickSpeedMaxMod()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickSpeedMaxMod); /*0x9fb972*/
  return atexit(INISetting_Destroy_fXenonMenuStickSpeedMaxMod); /*0x9fb984*/
}
