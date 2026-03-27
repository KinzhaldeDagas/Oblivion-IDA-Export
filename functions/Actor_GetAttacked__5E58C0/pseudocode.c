int __thiscall Actor::GetAttacked(Actor *this)
{
  return ((int (__thiscall *)(LowProcess *))this->members.super.process->GetAttacked)(this->members.super.process);
}
