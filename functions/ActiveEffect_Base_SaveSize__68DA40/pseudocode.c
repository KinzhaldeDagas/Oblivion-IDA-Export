__int16 __thiscall ActiveEffect_Base_SaveSize(void *this, int a2, int a3, int a4)
{
  if ( g_TESSaveLoadGame->currentVersion < 0x2Au ) /*0x68da55*/
    return ActiveEffect_Base_SaveSize_::SkipDataList(a2); /*0x68da55*/
  else
    return ActiveEffect_Base_SaveSize_::ProcessDataList((int)this, a2, a3, a4); /*0x68da56*/
}
