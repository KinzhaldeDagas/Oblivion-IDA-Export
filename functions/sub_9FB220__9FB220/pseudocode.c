// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuMouseXYMult()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuMouseXYMult); /*0x9fb252*/
  return atexit(INISetting_Destroy_fXenonMenuMouseXYMult); /*0x9fb264*/
}
