// Verified INI setting registration for fCanopyShadowGrassMult:SpeedTree; adds the float value/name pair to INISettingCollection and registers atexit cleanup.
int INISetting_fCanopyShadowGrassMult_SpeedTree_ctor()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&fCanopyShadowGrassMult_SpeedTree); /*0x9f94c2*/
  return atexit(INISetting_fCanopyShadowGrassMult_SpeedTree_atexit); /*0x9f94d4*/
}
