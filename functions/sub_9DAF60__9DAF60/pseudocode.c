int sub_9DAF60()
{
  uExteriorCellBuffer = uGridsToLoad * (uGridsToLoad + 2) + 1;
  SettingCollectionList_AddSetting(&INISettingCollection, (int)&uExteriorCellBuffer);
  return atexit(sub_A17D20);
}
