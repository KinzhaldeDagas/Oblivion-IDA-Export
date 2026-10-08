// Verified (Oblivion): base SaveExtraData receives owner ActiveEffect* and target TESObjectREFR*, writes base elapsedSeconds + finished flag, and writes durationSeconds from version 0x72.
void __thiscall MagicHitEffect_SaveExtraData(
        MagicHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->elapsedSeconds, 4u); /*0x69dbbf*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->bFinished, 1u); /*0x69dbd0*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x72u ) /*0x69dbdf*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &this->super.durationSeconds, 4u); /*0x69dbe7*/
}
