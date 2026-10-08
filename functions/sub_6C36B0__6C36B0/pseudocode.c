// Return true only when an active NiTimeController can reuse its previous interpolation result. Active bit is NiTimeController.flags +0x08 bit 3. On an application-time change, computeScaledTimeOnUpdate +0x2C normally calls virtual ComputeScaledTime and refreshes cachedScaledTime +0x28; forceUpdate +0x38 forces one changed result and is cleared. If +0x2C is zero, report changed without recomputing +0x28.
bool __thiscall NiTimeController_IsUpdateUnchanged(NiTimeController *this, float applicationTime)
{
  float applicationTimea; // [esp+Ch] [ebp+4h]

  if ( (this->members.flags & 8) != 0 && (applicationTime != this->members.m_fLastTime || this->members.forceUpdate) ) /*0x6c36d1*/
  {
    if ( !this->members.computeScaledTimeOnUpdate ) /*0x6c36db*/
    {
      this->members.forceUpdate = 0; /*0x6c3713*/
      return 0; /*0x6c371c*/
    }
    applicationTimea = ((double (__stdcall *)(_DWORD))this->vtbl->ComputeScaledTime)(LODWORD(applicationTime)); /*0x6c36e8*/
    if ( applicationTimea != this->members.cachedScaledTime || this->members.forceUpdate ) /*0x6c3700*/
    {
      this->members.cachedScaledTime = applicationTimea; /*0x6c3706*/
      this->members.forceUpdate = 0; /*0x6c3709*/
      return 0; /*0x6c3710*/
    }
  }
  return 1; /*0x6c370f*/
}
