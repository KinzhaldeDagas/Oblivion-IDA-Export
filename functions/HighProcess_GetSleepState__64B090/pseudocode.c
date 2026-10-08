// Returns HighProcess.sleepState at +0x11D as the Oblivion SitSleep enum: None=0, SittingIn/Sitting/SittingOut=3/4/5, SleepingIn/Sleeping/SleepingOut=8/9/10.
SitSleep __thiscall HighProcess::GetSleepState(HighProcess *this)
{
  return this->sleepState; /*0x64b097*/
}
