// Verified load callback arguments: ownerActiveEffect is stored at +0x18 and targetReference at +0x1C; it restores elapsedSeconds and bFinished, plus durationSeconds on version 0x72+.
int __thiscall MagicHitEffect_LoadExtraData(
        MagicHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  int result; // eax

  SaveLoad_LoadData(g_TESSaveLoadGame, &this->elapsedSeconds, 4u); /*0x69dbff*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->bFinished, 1u); /*0x69dc10*/
  if ( g_TESSaveLoadGame->currentVersion < 0x72u ) /*0x69dc1f*/
  {
    result = (int)targetReference; /*0x69dc42*/
  }
  else
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &this->super.durationSeconds, 4u); /*0x69dc27*/
    result = (int)ownerActiveEffect; /*0x69dc2c*/
  }
  this->ownerActiveEffect = ownerActiveEffect; /*0x69dc34*/
  this->targetReference = targetReference; /*0x69dc37*/
  return result; /*0x69dc3a*/
}
