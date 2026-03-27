int __thiscall ActiveEffect_Base_SaveSize(void *this, int a2, int a3, int a4)
{
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x2Au )
    return ActiveEffect_Base_SaveSize_::SkipDataList(a2);
  else
    return ActiveEffect_Base_SaveSize_::ProcessDataList((int)this, a2, a3, a4);
}
