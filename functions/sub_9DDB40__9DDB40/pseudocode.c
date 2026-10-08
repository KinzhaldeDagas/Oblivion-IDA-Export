// [Verified] Registers bForce1XShaders in INISettingCollection and schedules its destructor with atexit. Its setting-name pointer resolves to "bForce1XShaders:Display".
int Register_INISetting_bForce1XShaders()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bForce1XShaders); /*0x9ddb72*/
  return atexit(Destroy_INISetting_bForce1XShaders); /*0x9ddb84*/
}
