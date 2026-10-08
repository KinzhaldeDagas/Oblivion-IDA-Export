// Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
NiTimeController *__thiscall NiTimeController::NiTimeController(NiTimeController *this)
{
  double v2; // st7
  NiObject *next; // edi

  NiObject_constr((NiObject *)this); /*0x7159ba*/
  this->vtbl = (NiTimeControllerVtbl *)&NiTimeController::`vftable'; /*0x7159c1*/
  this->members.next = 0; /*0x7159cb*/
  this->members.m_fFrequency = 1.0; /*0x7159d0*/
  this->members.flags = 0xC; /*0x7159d3*/
  this->members.m_fPhase = 0.0; /*0x7159e0*/
  this->members.m_fLoKeyTime = flt_A7DEB4; /*0x7159e9*/
  this->members.m_fHiKeyTime = -flt_A7DEB4; /*0x7159f4*/
  this->members.m_fStartTime = -flt_A7DEB4; /*0x7159ff*/
  this->members.m_fLastTime = -flt_A7DEB4; /*0x715a0a*/
  this->members.scaledTimeAccumulator = 0.0; /*0x715a0d*/
  v2 = flt_A7DEB4; /*0x715a10*/
  this->members.m_pTarget = 0; /*0x715a16*/
  this->members.cachedScaledTime = -v2; /*0x715a1b*/
  next = this->members.next; /*0x715a1e*/
  if ( next ) /*0x715a23*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&next->members) ) /*0x715a29*/
      next->__vftable->super.Destructor((NiRefObject *)next, 1); /*0x715a3f*/
    this->members.next = 0; /*0x715a41*/
  }
  this->members.computeScaledTimeOnUpdate = 1; /*0x715a44*/
  this->members.forceUpdate = 0; /*0x715a48*/
  return this; /*0x715a4d*/
}
