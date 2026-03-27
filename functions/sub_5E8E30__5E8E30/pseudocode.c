void __thiscall sub_5E8E30(Actor *this, char a2)
{
  if ( a2 )
  {
    Actor_HandleDeathSTate____(this, 3u);
  }
  else if ( this->members.DeadState == 3 )
  {
    Actor_HandleDeathSTate____(this, 0);
  }
}
