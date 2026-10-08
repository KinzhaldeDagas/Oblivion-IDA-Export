// [Verified] Registers bUseBlurShader in INISettingCollection and schedules its destructor with atexit. Its setting-name string is "bUseBlurShader:BlurShader".
int Register_INISetting_bUseBlurShader()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&bUseBlurShader); /*0x9dd572*/
  return atexit(Destroy_INISetting_bUseBlurShader); /*0x9dd584*/
}
