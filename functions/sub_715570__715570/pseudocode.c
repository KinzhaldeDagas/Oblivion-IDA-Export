// Clears active flag bit 3, invalidates last application time +0x20, and for APP_INIT timing (bit 0) also invalidates start time +0x1C.
void __thiscall NiTimeController_Deactivate(NiTimeController *this)
{
  UInt16 flags; // ax

  this->members.flags &= ~8u; /*0x715570*/
  flags = this->members.flags; /*0x71557c*/
  this->members.m_fLastTime = -flt_A7DEB4; /*0x715584*/
  if ( (flags & 1) != 0 ) /*0x715587*/
    this->members.m_fStartTime = -flt_A7DEB4; /*0x715591*/
}
