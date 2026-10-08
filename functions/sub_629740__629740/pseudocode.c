// Returns HighProcess.dialogueActive at +0x228. Social scans reject a candidate while this flag is set.
bool __thiscall HighProcess::HasActiveDialogue(HighProcess *this)
{
  return this->dialogueActive; /*0x629746*/
}
