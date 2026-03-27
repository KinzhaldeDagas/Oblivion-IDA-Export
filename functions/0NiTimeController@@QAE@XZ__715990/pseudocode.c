NiTimeController *__thiscall NiTimeController::NiTimeController(NiTimeController *this)
{
  double v2; // st7
  NiObject *next; // edi

  NiObject_constr((NiObject *)this);
  this->vtbl = (NiTimeControllerVtbl *)&NiTimeController::`vftable';
  this->members.next = 0;
  this->members.m_fFrequency = 1.0;
  this->members.flags = 0xC;
  this->members.m_fPhase = 0.0;
  this->members.m_fLoKeyTime = flt_A7DEB4;
  this->members.m_fHiKeyTime = -flt_A7DEB4;
  this->members.m_fStartTime = -flt_A7DEB4;
  this->members.m_fLastTime = -flt_A7DEB4;
  this->members.unk024 = 0.0;
  v2 = flt_A7DEB4;
  this->members.m_pTarget = 0;
  this->members.unk028 = -v2;
  next = this->members.next;
  if ( next )
  {
    if ( !InterlockedDecrement((volatile LONG *)&next->members) )
      next->__vftable->super.Destructor((NiRefObject *)next, 1);
    this->members.next = 0;
  }
  this->members.unk02C = 1;
  this->members.unk038 = 0;
  return this;
}
