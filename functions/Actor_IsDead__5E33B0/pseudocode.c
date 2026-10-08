// ODismemberment: Actor_IsDead vtable +0x198. Arg 0 treats dead states 1, 2, and essential protected state 6 as dead; arg 1 only treats 1/2 as dead.
char __thiscall Actor_IsDead(Actor *this, char a2)
{
  UInt32 DeadState; // eax

  DeadState = this->members.DeadState; /*0x5e33b5*/
  if ( a2 ) /*0x5e33bb*/
  {
    if ( DeadState == 2 || DeadState == 1 ) /*0x5e33c5*/
      return 1; /*0x5e33c9*/
  }
  else if ( DeadState == 2 || DeadState == 1 || DeadState == 6 ) /*0x5e33d9*/
  {
    return 1; /*0x5e33d9*/
  }
  return 0; /*0x5e33c9*/
}
