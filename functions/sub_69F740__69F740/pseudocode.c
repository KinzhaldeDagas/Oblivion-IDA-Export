int __thiscall sub_69F740(TESObjectREFR *this, int a2)
{
  __int16 v3; // ax
  unsigned __int8 currentVersion; // cl
  int result; // eax

  v3 = MobileObject_ModifiedFormSize(this, a2); /*0x69f745*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x69f750*/
  result = (unsigned __int16)(v3 + 0xC); /*0x69f75a*/
  if ( currentVersion >= 0x48u ) /*0x69f75d*/
    result += 4; /*0x69f75f*/
  if ( currentVersion >= 0x64u ) /*0x69f765*/
    result += 4; /*0x69f767*/
  return result; /*0x69f76a*/
}
