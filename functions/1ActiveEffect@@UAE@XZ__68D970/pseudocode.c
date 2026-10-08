// Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
void __thiscall ActiveEffect::~ActiveEffect(ActiveEffect *this)
{
  HitEffectNode *hitEffectList; // eax

  hitEffectList = this->members.hitEffectList; /*0x68d973*/
  this->vtbl = &ActiveEffect::`vftable'; /*0x68d978*/
  if ( hitEffectList ) /*0x68d97e*/
    ActiveEffect::~ActiveEffect((int)this, hitEffectList); /*0x68d981*/
  else
    ActiveEffect::~ActiveEffect((int)this); /*0x68d97e*/
}
