// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickSpeedPlayerRotMod()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickSpeedPlayerRotMod); /*0x9fbec2*/
  return atexit(INISetting_Destroy_fXenonMenuStickSpeedPlayerRotMod); /*0x9fbed4*/
}
