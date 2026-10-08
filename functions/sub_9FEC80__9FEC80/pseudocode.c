// Verified (Oblivion RTTI): initializes NiRTTI_MagicHitEffect with parent NiRTTI_BSTempEffect.
NiRTTI *NiRTTI_MagicHitEffect_Initialize()
{
  return NiRTTI_Constructor((NiRTTI *)&NiRTTI_MagicHitEffect, "MagicHitEffect", &NiRTTI_BSTempEffect); /*0x9fec94*/
}
