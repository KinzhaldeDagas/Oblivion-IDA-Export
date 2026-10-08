// Activates controller flag bit 3, invalidates last application time +0x20, and for APP_INIT timing (bit 0) seeds start time +0x1C from the supplied application time.
void __thiscall NiTimeController_Activate(NiTimeController *this, float applicationTime)
{
  UInt16 flags; // ax

  this->members.flags |= 8u; /*0x715540*/
  flags = this->members.flags; /*0x71554b*/
  this->members.m_fLastTime = -flt_A7DEB4; /*0x715553*/
  if ( (flags & 1) != 0 ) /*0x715556*/
    this->members.m_fStartTime = applicationTime; /*0x71555c*/
}
