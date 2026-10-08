// Writes LowProcess.procedureCompleted through the process vtable, then requests process reevaluation. DialoguePackage construction passes false; exhaustion passes true for both participants.
void __thiscall Actor::SetProcedureCompleted(Actor *this, bool completed)
{
  if ( this->members.super.process ) /*0x5e0273*/
  {
    this->members.super.process->Unk_2E(this->members.super.process, completed); /*0x5e0289*/
    this->members.super.process->Unk_1A(this->members.super.process, 1); /*0x5e0295*/
    this->members.super.process->SetUnk278To0(this->members.super.process); /*0x5e02a2*/
  }
}
