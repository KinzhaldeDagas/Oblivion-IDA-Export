void __thiscall sub_5E8E60(Actor *this, char a2)
{
  if ( a2 )
  {
    Actor_HandleDeathSTate____(this, 5u);
    if ( this->members.super.process )
      ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_B1)(this->members.super.process, 0);
  }
  else if ( this->members.DeadState == 5 )
  {
    Actor_HandleDeathSTate____(this, 0);
  }
}
