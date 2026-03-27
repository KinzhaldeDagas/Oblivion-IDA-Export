char __thiscall Actor_IsDead(Actor *this, char a2)
{
  UInt32 DeadState; // eax

  DeadState = this->members.DeadState;
  if ( a2 )
  {
    if ( DeadState == 2 || DeadState == 1 )
      return 1;
  }
  else if ( DeadState == 2 || DeadState == 1 || DeadState == 6 )
  {
    return 1;
  }
  return 0;
}
