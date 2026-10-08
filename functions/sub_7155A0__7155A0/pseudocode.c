// Compute controller time from application-time delta, frequency, phase, cycle mode, and backwards flag. Updates scaledTimeAccumulator +0x24 and last application time +0x20; returns the clamped/looped/reversed time later cached at +0x28 by NiTimeController_IsUpdateUnchanged.
float __thiscall NiTimeController_ComputeScaledTime(NiTimeController *this, float applicationTime)
{
  double v3; // st7
  double v4; // st6
  bool v5; // zf
  int v6; // edi
  double v7; // st7
  double m_fHiKeyTime; // st6
  double v9; // st7
  double m_fLoKeyTime; // st7
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+Ch] [ebp-4h]
  float v15; // [esp+Ch] [ebp-4h]
  float applicationTimeb; // [esp+14h] [ebp+4h]
  float applicationTimea; // [esp+14h] [ebp+4h]
  float applicationTimec; // [esp+14h] [ebp+4h]
  float applicationTimed; // [esp+14h] [ebp+4h]

  v3 = applicationTime; /*0x7155b6*/
  if ( -flt_A7DEB4 == this->members.m_fStartTime ) /*0x7155bd*/
    this->members.m_fStartTime = applicationTime; /*0x7155bf*/
  v4 = 0.0; /*0x7155d1*/
  if ( -flt_A7DEB4 == this->members.m_fLastTime ) /*0x7155d6*/
  {
    v5 = (this->members.flags & 1) == 0; /*0x7155d8*/
    this->members.scaledTimeAccumulator = 0.0; /*0x7155dc*/
    if ( v5 ) /*0x7155df*/
      goto LABEL_8; /*0x7155df*/
  }
  else
  {
    v4 = v3 - this->members.m_fLastTime; /*0x7155ed*/
  }
  applicationTime = v4; /*0x7155f0*/
LABEL_8:
  v6 = (LOBYTE(this->members.flags) >> 1) & 3; /*0x7155f4*/
  applicationTimeb = this->members.m_fFrequency * applicationTime + this->members.scaledTimeAccumulator; /*0x71560e*/
  this->members.scaledTimeAccumulator = applicationTimeb; /*0x715616*/
  applicationTimea = applicationTimeb + this->members.m_fPhase; /*0x71561c*/
  this->members.m_fLastTime = v3; /*0x715620*/
  EnterCriticalSection(&unk_B3FCA0); /*0x715623*/
  v7 = applicationTimea; /*0x715636*/
  if ( this->members.m_fHiKeyTime == unk_B3FC94 /*0x715668*/
    && this->members.m_fLoKeyTime == unk_B3FC90
    && v7 == unk_B3FC8C
    && dword_B27130 == v6 )
  {
    applicationTimea = unk_B3FC88; /*0x715672*/
    goto LABEL_35; /*0x715676*/
  }
  m_fHiKeyTime = this->members.m_fHiKeyTime; /*0x71567b*/
  dword_B27130 = v6; /*0x71567e*/
  unk_B3FC94 = m_fHiKeyTime; /*0x715684*/
  unk_B3FC90 = this->members.m_fLoKeyTime; /*0x71568d*/
  unk_B3FC8C = applicationTimea; /*0x715693*/
  if ( -flt_A7DEB4 != this->members.m_fHiKeyTime && this->members.m_fLoKeyTime != flt_A7DEB4 ) /*0x7156bf*/
  {
    if ( v6 ) /*0x7156ca*/
    {
      if ( v6 != 1 ) /*0x7156d3*/
        goto LABEL_27; /*0x7156d3*/
      v14 = this->members.m_fHiKeyTime - this->members.m_fLoKeyTime; /*0x7156df*/
      if ( v14 != 0.0 ) /*0x7156f2*/
      {
        v13 = v14 + v14; /*0x7156f6*/
        unknown_libname_14(v13, v7); /*0x7156fe*/
        v9 = applicationTimea; /*0x715719*/
        if ( applicationTimea < 0.0 ) /*0x71571e*/
        {
          applicationTimec = v9 + v13; /*0x715724*/
          v9 = applicationTimec; /*0x715728*/
        }
        if ( v14 < v9 ) /*0x715737*/
          v9 = v13 - v9; /*0x715739*/
        applicationTimea = v9 + this->members.m_fLoKeyTime; /*0x715740*/
        goto LABEL_27; /*0x715744*/
      }
LABEL_23:
      applicationTimea = this->members.m_fLoKeyTime; /*0x715746*/
      goto LABEL_27; /*0x715751*/
    }
    v15 = this->members.m_fHiKeyTime - this->members.m_fLoKeyTime; /*0x715759*/
    if ( v15 == 0.0 ) /*0x71576c*/
      goto LABEL_23; /*0x71576c*/
    applicationTimed = v7 - this->members.m_fLoKeyTime; /*0x715775*/
    unknown_libname_14(v15, applicationTimed); /*0x71577f*/
    applicationTimea = applicationTimed + this->members.m_fLoKeyTime; /*0x71578f*/
    if ( this->members.m_fLoKeyTime > (double)applicationTimea ) /*0x7157a1*/
      applicationTimea = applicationTimea + v15; /*0x7157a7*/
  }
LABEL_27:
  if ( this->members.m_fHiKeyTime < (double)applicationTimea ) /*0x7157bf*/
  {
    m_fLoKeyTime = this->members.m_fHiKeyTime; /*0x7157c3*/
LABEL_31:
    applicationTimea = m_fLoKeyTime; /*0x7157d7*/
    goto LABEL_32; /*0x7157d7*/
  }
  if ( this->members.m_fLoKeyTime > (double)applicationTimea ) /*0x7157d2*/
  {
    m_fLoKeyTime = this->members.m_fLoKeyTime; /*0x7157d4*/
    goto LABEL_31; /*0x7157d4*/
  }
LABEL_32:
  if ( (this->members.flags & 0x10) != 0 ) /*0x7157e4*/
    applicationTimea = this->members.m_fHiKeyTime - (applicationTimea - this->members.m_fLoKeyTime); /*0x7157f2*/
  unk_B3FC88 = applicationTimea; /*0x7157fa*/
LABEL_35:
  LeaveCriticalSection(&unk_B3FCA0); /*0x715800*/
  return applicationTimea; /*0x71580f*/
}
