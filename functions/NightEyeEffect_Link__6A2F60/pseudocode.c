// Verified NightEyeEffect_Link takes PlayerCharacter* linkContext, calls ActiveEffect_Base_Link, then compares the context with the player reference before restoring the player shader. Supports the Probable TESObjectREFR/Actor context type used by the common link dispatcher.
void __thiscall NightEyeEffect_Link(ActiveEffect *this, PlayerCharacter *linkContext)
{
  ActiveEffect_Base_Link(this, (int)linkContext); /*0x6a2f66*/
  if ( linkContext == reference ) /*0x6a2f72*/
    NightEyeEffect_SetPlayerShader_(); /*0x6a2f74*/
}
