// Verified (Oblivion): virtual receives owner ActiveEffect* and target TESObjectREFR*. Writes the base hit-effect payload, elapsedVisualSeconds_38 as a float, and for version >=0x37 the weapon-attachment byte, effectCode_2C, and boundObject_30 FormID.
void __thiscall MagicShaderHitEffect_SaveExtraData(
        MagicShaderHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  TESBoundObject *boundObject_30; // esi

  MagicHitEffect_SaveExtraData(&this->super, ownerActiveEffect, targetReference); /*0x6a043f*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &this->elapsedVisualSeconds_38, 4u); /*0x6a0450*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x37u ) /*0x6a045f*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, &this->bWeaponEnchantment_28, 1u); /*0x6a0467*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &this->effectCode_2C, 4u); /*0x6a0478*/
    boundObject_30 = this->boundObject_30; /*0x6a047d*/
    targetReference = 0; /*0x6a0482*/
    if ( boundObject_30 ) /*0x6a048a*/
      targetReference = (TESObjectREFR *)boundObject_30->member.super.refID; /*0x6a048f*/
    SaveLoad_SaveFormID(g_TESSaveLoadGame, (const unsigned int *)&targetReference, 4u); /*0x6a04a0*/
  }
}
