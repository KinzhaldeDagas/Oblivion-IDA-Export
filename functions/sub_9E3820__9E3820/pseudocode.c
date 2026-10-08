int bForceHideLODLand_RegisterSetting()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&byte_B09B48); /*0x9e3852*/
  return atexit(sub_A1BFA0); /*0x9e3864*/
}
