void __thiscall sub_5E8E30(Actor *this, char a2)
{
  if ( a2 ) /*0x5e8e35*/
  {
    Actor_HandleDeathState(this, 3u); /*0x5e8e3f*/
  }
  else if ( this->members.DeadState == 3 ) /*0x5e8e4b*/
  {
    Actor_HandleDeathState(this, 0); /*0x5e8e55*/
  }
}
