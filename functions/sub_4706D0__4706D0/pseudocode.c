// Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
char __thiscall ActorAnimData_SetUpdateState(ActorAnimData *this, char state)
{
  this->unk90 = state; /*0x4706d4*/
  return state; /*0x4706da*/
}
