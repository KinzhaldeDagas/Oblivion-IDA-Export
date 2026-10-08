// Returns true exactly when Actor.process exists and GetSleepState() == kSitSleep_Sleeping (9). This is a SitSleep-state test, not a combat/procedure test.
bool __thiscall Actor::IsSleeping(Actor *this)
{
  return this->members.super.process /*0x5e0f46*/
      && ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) == 9;
}
