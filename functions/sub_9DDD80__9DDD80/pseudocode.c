// [Verified] Registers bIsHDR in INISettingCollection and schedules its destructor with atexit. The owned setting-name string is "bDoHighDynamicRange:BlurShaderHDR".
int Register_INISetting_bIsHDR()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bIsHDR); /*0x9dddb2*/
  return atexit(Destroy_INISetting_bIsHDR); /*0x9dddc4*/
}
