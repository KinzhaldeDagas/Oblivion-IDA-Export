// Stops dialogue playback on activeSpeaker when a DialoguePackage is being torn down or replaced.
void __thiscall DialoguePackage::StopActiveSpeakerDialogue(DialoguePackageRuntimeView *this)
{
  Actor *activeSpeaker; // ecx

  activeSpeaker = this->activeSpeaker; /*0x625d70*/
  if ( activeSpeaker ) /*0x625d75*/
    Actor::StopDialoguePlayback(activeSpeaker); /*0x625d77*/
}
