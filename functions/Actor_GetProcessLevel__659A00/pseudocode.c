int __thiscall Actor::GetProcessLevel(Actor *this)
{
  if ( this->members.super.process )
    return this->members.super.process->GetProcessLevel(this->members.super.process);
  else
    return 0xFFFFFFFF;
}
