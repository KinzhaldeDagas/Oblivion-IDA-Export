// Stores the 16-bit current action at HighProcess+0x1F4 and its BSAnimGroupSequence pointer at +0x1F8; returns the stored action in AX.
ActorCurrentAction __thiscall HighProcess::SetCurrentAction(
        HighProcess *this,
        ActorCurrentAction action,
        BSAnimGroupSequence *sequence)
{
  this->currentAction = action;                 // HighProcess::SetCurrentAction is a plain store of the signed action ID; it has no timer, sequence-end test, or automatic follow-through clear. /*0x628229*/
  this->animgroupSequence = sequence;           // Store the associated BSAnimGroupSequence pointer unchanged; the post-release 5->3 call passes the current action sequence. /*0x628230*/
  return action; /*0x628236*/
}
