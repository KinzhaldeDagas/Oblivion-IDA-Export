TESPackage *__thiscall sub_5E0380(Actor *this)
{
  if ( this->members.super.process )
    return this->members.super.process->GetCurrentPackage(this->members.super.process);
  else
    return 0;
}
