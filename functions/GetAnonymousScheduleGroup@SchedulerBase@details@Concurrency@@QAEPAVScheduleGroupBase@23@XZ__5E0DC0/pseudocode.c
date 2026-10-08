// Exact Actor accessor: returns Actor.members.DeadState at absolute Actor+0xB0. The social-conversation scans reject value 3. This corrects a false Microsoft Concurrency symbol collision.
UInt32 __thiscall Actor::GetDeadState(Actor *this)
{
  return this->members.DeadState; /*0x5e0dc6*/
}
