// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuStickSpeed()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuStickSpeed); /*0x9fb312*/
  return atexit(INISetting_Destroy_fXenonMenuStickSpeed); /*0x9fb324*/
}
