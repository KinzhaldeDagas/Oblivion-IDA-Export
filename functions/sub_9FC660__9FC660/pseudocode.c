// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickMapCursorMinSpeed()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickMapCursorMinSpeed); /*0x9fc692*/
  return atexit(INISetting_Destroy_fXenonMenuStickMapCursorMinSpeed); /*0x9fc6a4*/
}
