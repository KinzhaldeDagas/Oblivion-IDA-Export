int __cdecl ActiveEffect_Base_Save(int a1, int a2, int a3, int a4, char a5)
{
  if ( g_TESSaveLoadGame->currentVersion < 0x2Au ) /*0x68dd46*/
    return ActiveEffect_Base_Save_::SaveMagicItem(a1, a1, a2, a3, a4, a5); /*0x68dd46*/
  else
    return ActiveEffect_Base_Save_::SaveRecordSize(a1, a1, a2, a3, a4, a5); /*0x68dd47*/
}
