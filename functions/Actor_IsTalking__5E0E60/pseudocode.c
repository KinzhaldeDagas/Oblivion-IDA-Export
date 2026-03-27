bool __thiscall Actor::IsTalking(Actor *this)
{
  bool result; // al

  this->members.super.process->IsTalkingTo(this->members.super.process, this);
  return result;
}
