// Sets and returns HighProcess.dialogueActive. Dialogue producers set it when a DialogueItem is installed and clear it when the response finishes or is cancelled.
bool __thiscall HighProcess::SetActiveDialogue(HighProcess *this, bool active)
{
  this->dialogueActive = active; /*0x629754*/
  return active; /*0x62975a*/
}
