UInt32 __thiscall Actor::GetSoulLevel(Actor *this)
{
  return this->members.super.process->GetSoulLevelAndCache(this->members.super.process, this);
}
