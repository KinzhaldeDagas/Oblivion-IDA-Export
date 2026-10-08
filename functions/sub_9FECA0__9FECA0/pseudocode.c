// Verified (Oblivion RTTI): initializes NiRTTI_MagicModelHitEffect with parent NiRTTI_MagicHitEffect.
NiRTTI *NiRTTI_MagicModelHitEffect_Initialize()
{
  return NiRTTI_Constructor( /*0x9fecb4*/
           (NiRTTI *)&NiRTTI_MagicModelHitEffect,
           "MagicModelHitEffect",
           (NiRTTI *)&NiRTTI_MagicHitEffect);
}
