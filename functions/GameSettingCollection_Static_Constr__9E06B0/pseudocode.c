int GameSettingCollection_Static_Constr()
{
  SettingCollectionMap_constr(&flt_B35464[1], 0x191u); /*0x9e06ba*/
  LODWORD(flt_B35464[1]) = &GameSettingCollection::`vftable'; /*0x9e06c4*/
  return atexit(GameSettingCollection_Static_Destr); /*0x9e06d4*/
}
