// Verified INI setting registration for bEnableTrees:SpeedTree; calls SettingCollectionList_AddSetting on the 8-byte value/name pair and registers atexit cleanup.
int INISetting_bEnableTrees_SpeedTree_ctor()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bEnableTrees_SpeedTree); /*0x9f9102*/
  return atexit(INISetting_bEnableTrees_SpeedTree_atexit); /*0x9f9114*/
}
