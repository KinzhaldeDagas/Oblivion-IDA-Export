int GameSettingCollection_Static_Constr()
{
  SettingCollectionMap_constr(GameSettingCollection, 0x191u);
  GameSettingCollection[0] = (int)&GameSettingCollection::`vftable';
  return atexit(GameSettingCollection_Static_Destr);
}
