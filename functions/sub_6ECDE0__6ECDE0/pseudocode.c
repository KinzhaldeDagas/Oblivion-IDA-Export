void __thiscall sub_6ECDE0(NiTimeController *this, NiObjectNET *a2)
{
  int v3; // edi

  v3 = *((_DWORD *)this + 0x11);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x11) = 0;
  }
  NiTimeController::SetTarget(this, a2);
  if ( this->members.m_pTarget )
    sub_6ECCD0((int)this);
}
