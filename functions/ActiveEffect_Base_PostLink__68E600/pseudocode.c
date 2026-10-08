// Verified ActiveEffect::PostLink takes a TESObjectREFR linkContext and, for save version >=0x2A, walks this->members.hitEffectList and dispatches each hit effect's +0x84 postLink callback. The callback creates/restores visual state; ActiveEffect_Base_PostLink then registers each object with ActorProcessManager.
int __thiscall ActiveEffect_Base_PostLink(ActiveEffect *this, TESObjectREFR *linkContext)
{
  volatile LONG **hitEffectList; // esi

  if ( g_TESSaveLoadGame->currentVersion < 0x2Au ) /*0x68e60c*/
    return ActiveEffect_Base_PostLink_::PersistentSound_((int)linkContext); /*0x68e60c*/
  hitEffectList = (volatile LONG **)this->members.hitEffectList; /*0x68e60f*/
  if ( hitEffectList ) /*0x68e614*/
    return ActiveEffect_Base_PostLink_::LoopTest((int)this, (int)linkContext, hitEffectList); /*0x68e61d*/
  else
    return ActiveEffect_Base_PostLink_::PersistentSound__((int)linkContext); /*0x68e614*/
}
