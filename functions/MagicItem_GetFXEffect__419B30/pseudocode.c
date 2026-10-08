// Verified (Oblivion): MagicItem_GetFXEffect returns the effect's EffectSetting pointer; MagicShaderHitEffect constructors/PostLink dereference its +0x78 EffectSetting::effectShader field.
EffectSetting *__thiscall MagicItem_GetFXEffect(void *magicItem, unsigned int effectIndex)
{
  int v3; // [esp+10h] [ebp+8h]
  int v4; // [esp+14h] [ebp+Ch]
  int v5; // [esp+18h] [ebp+10h]

  return (EffectSetting *)MagicItem_GetFXEffect_::CheckPOSN(magicItem, effectIndex, v3, v4, v5);
}
