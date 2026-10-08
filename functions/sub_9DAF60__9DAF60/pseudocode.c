int sub_9DAF60()
{
  uExteriorCellBuffer = uGridsToLoad * (uGridsToLoad + 2) + 1; /*0x9daf8f*/
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&uExteriorCellBuffer); /*0x9dafa6*/
  return atexit(sub_A17D20); /*0x9dafb8*/
}
