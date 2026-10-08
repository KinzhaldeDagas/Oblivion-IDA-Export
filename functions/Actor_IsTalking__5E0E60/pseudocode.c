bool __thiscall Actor::IsTalking(Actor *this)
{
  bool result; // al

  this->members.super.process->IsTalkingTo(this->members.super.process, this); /*0x5e0e6e*/
  return result; /*0x5e0e70*/
}
