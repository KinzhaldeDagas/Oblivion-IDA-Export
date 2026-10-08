// [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
int INISetting_Init_fXenonMenuDpadRepeatSpeed()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fXenonMenuDpadRepeatSpeed); /*0x9fb372*/
  return atexit(INISetting_Destroy_fXenonMenuDpadRepeatSpeed); /*0x9fb384*/
}
