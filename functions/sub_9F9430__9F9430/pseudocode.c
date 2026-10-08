// Verified INI setting registration for iCanopyShadowScale:SpeedTree; adds the int value/name pair to INISettingCollection and registers atexit cleanup.
int INISetting_iCanopyShadowScale_SpeedTree_ctor()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&iCanopyShadowScale_SpeedTree); /*0x9f9462*/
  return atexit(INISetting_iCanopyShadowScale_SpeedTree_atexit); /*0x9f9474*/
}
