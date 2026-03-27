int EffectSettingCollection_Reset()
{
  EffectSettingCollection_Clear((NiTMap_TESCELL *)&EffectSettingCollection);
  return EffectSettingCollection_InitAllEffects();
}
