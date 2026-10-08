// Verified (Oblivion RTTI): initializes NiRTTI_MagicShaderHitEffect with parent NiRTTI_MagicHitEffect.
NiRTTI *NiRTTI_MagicShaderHitEffect_Initialize()
{
  return NiRTTI_Constructor( /*0x9fecd4*/
           (NiRTTI *)&NiRTTI_MagicShaderHitEffect,
           "MagicShaderHitEffect",
           (NiRTTI *)&NiRTTI_MagicHitEffect);
}
