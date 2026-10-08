// Return true only when Actor.process exists and its movement-state flags contain 0x800 (Swimming).
bool __thiscall Actor_IsSwimming(Actor *this)
{
  return this->members.super.process /*0x5e054b*/
      && (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x800) != 0;
}
