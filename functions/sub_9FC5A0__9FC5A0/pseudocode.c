// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickMapCursorGamma()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickMapCursorGamma); /*0x9fc5d2*/
  return atexit(INISetting_Destroy_fXenonMenuStickMapCursorGamma); /*0x9fc5e4*/
}
