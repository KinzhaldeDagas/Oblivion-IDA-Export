int __thiscall sub_715570(NiTimeController *this)
{
  int result; // eax

  this->members.flags &= ~8u;
  result = this->members.flags;
  this->members.m_fLastTime = -flt_A7DEB4;
  if ( (result & 1) != 0 )
    this->members.m_fStartTime = -flt_A7DEB4;
  return result;
}
