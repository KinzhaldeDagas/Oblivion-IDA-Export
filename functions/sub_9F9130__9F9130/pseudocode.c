// Verified INI setting registration for bForceFullLOD:SpeedTree; adds the value/name pair to INISettingCollection and registers atexit cleanup.
int INISetting_bForceFullLOD_SpeedTree_ctor()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bForceFullLOD_SpeedTree); /*0x9f9162*/
  return atexit(INISetting_bForceFullLOD_SpeedTree_atexit); /*0x9f9174*/
}
