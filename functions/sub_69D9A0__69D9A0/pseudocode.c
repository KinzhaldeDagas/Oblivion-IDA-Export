// Verified MagicHitEffect_Update accumulates elapsedSeconds at +0x20, rejects missing/unloaded/flagged targetReference at +0x1C, and sets bFinished (+0x24) when durationSeconds (+0x08) is exceeded. Model and shader overrides use bFinished to end their visuals; the field's broad role is Probable 'finished/expired' state.
bool __thiscall MagicHitEffect_Update(MagicHitEffect *this, float deltaSeconds)
{
  double v3; // st7
  TESObjectREFR *targetReference; // ecx

  v3 = deltaSeconds + this->elapsedSeconds; /*0x69d9a7*/
  targetReference = this->targetReference; /*0x69d9aa*/
  this->elapsedSeconds = v3; /*0x69d9af*/
  if ( !targetReference /*0x69d9ce*/
    || !targetReference->vtbl->GetNiNode(targetReference)
    || (this->targetReference->member.super.flags & 0x20) != 0 )
  {
    return 0; /*0x69d9e9*/
  }
  if ( this->super.durationSeconds < (double)this->elapsedSeconds ) /*0x69d9dd*/
    this->bFinished = 1; /*0x69d9df*/
  return 1; /*0x69d9e6*/
}
