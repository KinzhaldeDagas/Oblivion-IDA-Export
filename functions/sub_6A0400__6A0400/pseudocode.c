// Verified (Oblivion): virtual receives owner ActiveEffect* and target TESObjectREFR*. Returns base payload size +4, plus 9 bytes for save version >=0x37.
unsigned __int16 __thiscall MagicShaderHitEffect_GetExtraSaveSize(
        MagicShaderHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  unsigned __int16 result; // ax

  result = MagicHitEffect_GetExtraSaveSize((int)ownerActiveEffect, (int)targetReference) + 4; /*0x6a041d*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x37u ) /*0x6a0420*/
    result += 9; /*0x6a0422*/
  return result; /*0x6a0425*/
}
