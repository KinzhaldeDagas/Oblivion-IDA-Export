// Register bDoStaticAndArchShadows:Display setting at 0x00B06CF4.
int sub_9DD240()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&g_bDoStaticAndArchShadowsSetting); /*0x9dd272*/
  return atexit(sub_A18ED0); /*0x9dd284*/
}
