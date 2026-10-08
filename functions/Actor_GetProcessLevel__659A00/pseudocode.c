// Return Actor/MobileObject process level through process vslot +0x08; if MobileObject+0x58 is null, return -1. ActorProcessManager_AddMobileObject calls this directly before insertion.
int __thiscall Actor::GetProcessLevel(Actor *this)
{
  if ( this->members.super.process ) /*0x659a00*/
    return this->members.super.process->GetProcessLevel(this->members.super.process); /*0x659a0e*/
  else
    return 0xFFFFFFFF; /*0x659a10*/
}
