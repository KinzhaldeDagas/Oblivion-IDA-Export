int bDisplayLODLand_RegisterSetting()
{
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&byte_B02D70); /*0x9d8d42*/
  return atexit(sub_A16C40); /*0x9d8d54*/
}
