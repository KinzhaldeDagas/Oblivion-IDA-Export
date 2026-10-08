// Verified per-effect load version dispatch: before save version 0x2A reads the legacy MagicItem/index header; version 0x2A and later reads a record-size field before the same source lookup and effect-item selection.
int __cdecl ActiveEffect_Base_Load(int a1, char a2)
{
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x2Au ) /*0x68edb4*/
    return ActiveEffect_Base_Load_::LoadMagicItem(a1, a2); /*0x68edb4*/
  else
    return ActiveEffect_Base_Load_::LoadRecordSize(); /*0x68edb5*/
}
