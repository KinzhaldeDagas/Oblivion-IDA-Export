void __thiscall sub_6ECDE0(NiTimeController *this, NiObjectNET *a2)
{
  int v3; // edi

  v3 = *((_DWORD *)this + 0x11); /*0x6ecde4*/
  if ( v3 ) /*0x6ecde9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6ecdef*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6ece05*/
    *((_DWORD *)this + 0x11) = 0; /*0x6ece07*/
  }
  NiTimeController::SetTarget(this, a2); /*0x6ece15*/
  if ( this->members.m_pTarget ) /*0x6ece1a*/
    sub_6ECCD0((int)this); /*0x6ece22*/
}
