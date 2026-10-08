// Verified (Oblivion): base GetExtraSaveSize receives owner ActiveEffect* and target TESObjectREFR*; it returns 5 bytes before version 0x72 and 9 bytes from version 0x72.
unsigned __int16 __thiscall MagicHitEffect_GetExtraSaveSize(
        MagicHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  unsigned __int16 result; // ax

  result = 5; /*0x69db9a*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x72u ) /*0x69db9f*/
    return 9; /*0x69dba1*/
  return result; /*0x69dba6*/
}
