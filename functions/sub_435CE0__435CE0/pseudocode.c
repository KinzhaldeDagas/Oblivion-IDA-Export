void __thiscall sub_435CE0(NiAVObject *this, volatile LONG *a2)
{
  volatile LONG *m_spCollision; // edi
  Atmosphere *v4; // ecx

  m_spCollision = (volatile LONG *)this->members.m_spCollision;
  if ( m_spCollision != a2 )
  {
    if ( m_spCollision )
    {
      if ( !InterlockedDecrement(m_spCollision + 1) )
        (**(void (__thiscall ***)(void *, int))m_spCollision)((void *)m_spCollision, 1);
    }
    this->members.m_spCollision = (void *)a2;
    if ( a2 )
      InterlockedIncrement(a2 + 1);
  }
  v4 = (Atmosphere *)this->members.m_spCollision;
  if ( v4 )
  {
    if ( sub_452A60(v4) != this )
      (*(void (__thiscall **)(void *, NiAVObject *))(*(_DWORD *)this->members.m_spCollision + 0x4C))(
        this->members.m_spCollision,
        this);
  }
}
