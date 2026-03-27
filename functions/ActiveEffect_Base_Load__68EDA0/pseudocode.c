int __cdecl ActiveEffect_Base_Load(int a1, char a2)
{
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Au )
    return ActiveEffect_Base_Load_::LoadMagicItem(a1, a2);
  else
    return ActiveEffect_Base_Load_::LoadRecordSize();
}
