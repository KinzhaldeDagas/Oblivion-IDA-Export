// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickMapCursorMaxSpeed()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickMapCursorMaxSpeed); /*0x9fc632*/
  return atexit(INISetting_Destroy_fXenonMenuStickMapCursorMaxSpeed); /*0x9fc644*/
}
