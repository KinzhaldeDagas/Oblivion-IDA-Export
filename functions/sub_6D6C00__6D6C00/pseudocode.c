void __thiscall sub_6D6C00(NiTimeController *this, NiObjectNET *a2)
{
  if ( (NiObjectNET *)this->members.m_pTarget != a2 )
    *((_DWORD *)this + 0x11) = 0;
  NiTimeController::SetTarget(this, a2);
}
