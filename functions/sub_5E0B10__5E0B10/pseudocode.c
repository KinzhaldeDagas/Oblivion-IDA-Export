void __thiscall sub_5E0B10(Actor *this)
{
  UInt32 v2; // eax

  if ( this->vtbl->GetCombatController(this) )
  {
    sub_618590(this);
  }
  else if ( this->members.super.process->GetProcessLevel(this->members.super.process) == 1 )
  {
    this->members.super.process->Unk_16(this->members.super.process, (UInt32)this, 1u);
  }
  else
  {
    v2 = this->members.super.process->GetProcessLevel(this->members.super.process);
    this->members.super.process->Unk_16(this->members.super.process, (UInt32)this, 2 * (v2 != 2) + 2);
  }
}
