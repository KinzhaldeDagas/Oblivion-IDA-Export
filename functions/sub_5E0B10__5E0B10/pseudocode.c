void __usercall sub_5E0B10(Actor *this@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>)
{
  UInt32 v5; // eax
  int v6; // [esp+0h] [ebp-4h]

  if ( ((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))this->vtbl->GetCombatController)(this, a4) ) /*0x5e0b1b*/
  {
    sub_618590(a2, a3, a4, this, v6); /*0x5e0b22*/
  }
  else if ( this->members.super.process->GetProcessLevel(this->members.super.process) == 1 ) /*0x5e0b39*/
  {
    this->members.super.process->Unk_16(this->members.super.process, (UInt32)this, 1u); /*0x5e0b45*/
  }
  else
  {
    v5 = this->members.super.process->GetProcessLevel(this->members.super.process); /*0x5e0b51*/
    this->members.super.process->Unk_16(this->members.super.process, (UInt32)this, 2 * (v5 != 2) + 2); /*0x5e0b6b*/
  }
}
