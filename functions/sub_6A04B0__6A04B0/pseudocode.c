// Verified (Oblivion): loads base hit-effect payload and elapsedVisualSeconds_38, then for version >=0x37 restores weaponAttachmentFlag_28, effectCode_2C, and a FormID resolved to TESBoundObject* at +0x30.
void __thiscall MagicShaderHitEffect_LoadExtraData(
        MagicShaderHitEffect *this,
        ActiveEffect *ownerActiveEffect,
        TESObjectREFR *targetReference)
{
  TESForm *v4; // eax
  UInt32 retaddr; // [esp+4h] [ebp+0h]

  MagicHitEffect_LoadExtraData(&this->super, ownerActiveEffect, targetReference); /*0x6a04bf*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &this->elapsedVisualSeconds_38, 4u); /*0x6a04d0*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x37u ) /*0x6a04df*/
  {
    SaveLoad_LoadData(g_TESSaveLoadGame, &this->weaponAttachmentFlag_28, 1u); /*0x6a04e7*/
    SaveLoad_LoadData(g_TESSaveLoadGame, &this->effectCode_2C, 4u); /*0x6a04f8*/
    SaveLoad_LoadFormID(g_TESSaveLoadGame, (unsigned int *)&targetReference, 4u); /*0x6a050a*/
    if ( retaddr ) /*0x6a0515*/
    {
      v4 = TESForm_LookupByFormID(retaddr); /*0x6a0526*/
      this->boundObject_30 = (TESBoundObject *)OblivionDynamicCast( /*0x6a0537*/
                                                 v4,
                                                 0,
                                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                 (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                                                 0);
    }
  }
}
