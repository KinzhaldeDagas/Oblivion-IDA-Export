// MiddleHighProcess dialogue-procedure update. It counts down the same DialoguePackage timer but has no audible/lip playback; until procedure completion it advances the conversation through DialoguePackage::Speak(false), then cleans both participants sharing the package.
void __thiscall MiddleHighProcess::UpdateDialogueProcedure(MiddleHighProcess *this, Actor *owner)
{
  DialoguePackageRuntimeView *dialoguePackage; // esi
  Actor *otherParticipant; // ebx
  TESPackage *sharedPackage; // esi
  Actor *target; // [esp+10h] [ebp-4h]

  dialoguePackage = (DialoguePackageRuntimeView *)this->GetCurrentPackage(this); /*0x64ff41*/
  target = DialoguePackage::GetTarget(dialoguePackage); /*0x64ff4c*/
  otherParticipant = DialoguePackage::GetSpeaker(dialoguePackage); /*0x64ff59*/
  if ( owner == otherParticipant ) /*0x64ff5d*/
    otherParticipant = target; /*0x64ff5f*/
  if ( dialoguePackage->responseTimeRemaining <= 0.0 ) /*0x64ff6d*/
  {
    if ( this->Unk_2F(this) ) /*0x64ff8d*/
    {
      owner->vtbl->CleanupCurrentPackage(owner); /*0x64ff9e*/
      sharedPackage = Actor::GetCurrentPackage(otherParticipant); /*0x64ffa9*/
      if ( sharedPackage == Actor::GetCurrentPackage(owner) ) /*0x64ffb2*/
        otherParticipant->vtbl->CleanupCurrentPackage(otherParticipant); /*0x64ffbe*/
      this->Unk_2E(this, 0); /*0x64ffcc*/
    }
    else
    {
      DialoguePackage::Speak(dialoguePackage, 0);// MiddleHigh offscreen advance calls Speak(false). Starting from timer zero, successive updates select then consume responses without audio or text-duration delays and commit deferred item results rapidly. Exception: a package demoted with waitingForLip=true makes no cursor progress until it returns to HighProcess or is destroyed. /*0x64ffda*/
    }
  }
  else
  {
    dialoguePackage->responseTimeRemaining = dialoguePackage->responseTimeRemaining - *(float *)&MEMORY[0xB33E90][0xC]; /*0x64ff79*/
  }
}
