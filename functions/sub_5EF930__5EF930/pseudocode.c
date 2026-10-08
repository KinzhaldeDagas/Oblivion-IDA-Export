// Stops an Actor's current dialogue/audio/lip playback and associated animation state. Used before starting/replacing dialogue, on menu close, death/paralysis, and DialoguePackage active-speaker cleanup.
void __thiscall Actor::StopDialoguePlayback(Actor *this)
{
  LowProcess *process; // esi
  UInt32 v3; // eax

  process = this->members.super.process; /*0x5ef934*/
  if ( process ) /*0x5ef939*/
  {
    if ( ((int (__thiscall *)(LowProcess *, _DWORD))process->GetUnk220Element)(process, 0) ) /*0x5ef947*/
    {
      ((void (__thiscall *)(LowProcess *, _DWORD))process->StopSoundITMTorchHeldLP)(process, 0); /*0x5ef959*/
      ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_80)(process, 0); /*0x5ef967*/
      sub_65DA10(reference); /*0x5ef96f*/
    }
  }
  if ( this->members.super.process ) /*0x5ef974*/
  {
    v3 = this->members.super.process->Unk_39(this->members.super.process, (UInt32)this); /*0x5ef986*/
    if ( v3 ) /*0x5ef98a*/
      (*(void (__thiscall **)(UInt32, float, _DWORD, int, int, int, _DWORD))(*(_DWORD *)v3 + 0x78))( /*0x5ef9a7*/
        v3,
        flt_A41328,
        0,
        1,
        1,
        1,
        0);
  }
}
