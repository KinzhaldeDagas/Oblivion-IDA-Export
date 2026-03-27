int __cdecl ActiveEffect_Base_Save(int a1, int a2, int a3, int a4, char a5)
{
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Au )
    return ActiveEffect_Base_Save_::SaveMagicItem(a1, a1, a2, a3, a4, a5);
  else
    return ActiveEffect_Base_Save_::SaveRecordSize(a1, a1, a2, a3, a4, a5);
}
