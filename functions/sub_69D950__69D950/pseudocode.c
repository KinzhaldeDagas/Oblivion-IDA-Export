// Verified base MagicHitEffect detach clears its targetReference pointer at +0x1C. ActiveEffect::~ActiveEffect also clears ownerActiveEffect (+0x18) and sets bFinished (+0x24) before freeing its association-list nodes.
void __thiscall MagicHitEffect_Detach(MagicHitEffect *this)
{
  this->targetReference = 0; /*0x69d950*/
}
