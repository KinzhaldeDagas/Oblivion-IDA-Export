void __thiscall sub_5E8E60(Actor *this, char a2)
{
  if ( a2 ) /*0x5e8e68*/
  {
    Actor_HandleDeathState(this, 5u); /*0x5e8e6c*/
    if ( this->members.super.process ) /*0x5e8e71*/
      ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->Unk_B1)(this->members.super.process, 0); /*0x5e8e8b*/
  }
  else if ( this->members.DeadState == 5 ) /*0x5e8e94*/
  {
    Actor_HandleDeathState(this, 0); /*0x5e8e98*/
  }
}
