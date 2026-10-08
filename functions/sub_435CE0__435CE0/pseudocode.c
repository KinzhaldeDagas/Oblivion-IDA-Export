void __thiscall sub_435CE0(NiAVObject *this, volatile LONG *a2)
{
  volatile LONG *m_spCollision; // edi
  Atmosphere *v4; // ecx

  m_spCollision = (volatile LONG *)this->members.m_spCollision; /*0x435ce9*/
  if ( m_spCollision != a2 ) /*0x435cf1*/
  {
    if ( m_spCollision ) /*0x435cf5*/
    {
      if ( !InterlockedDecrement(m_spCollision + 1) ) /*0x435cfb*/
        (**(void (__thiscall ***)(volatile LONG *, int))m_spCollision)(m_spCollision, 1); /*0x435d11*/
    }
    this->members.m_spCollision = (void *)a2; /*0x435d15*/
    if ( a2 ) /*0x435d1b*/
      InterlockedIncrement(a2 + 1); /*0x435d21*/
  }
  v4 = (Atmosphere *)this->members.m_spCollision; /*0x435d27*/
  if ( v4 ) /*0x435d2f*/
  {
    if ( Shared_GetPointerAtOffset08(v4) != this ) /*0x435d38*/
      (*(void (__thiscall **)(void *, NiAVObject *))(*(_DWORD *)this->members.m_spCollision + 0x4C))( /*0x435d46*/
        this->members.m_spCollision,
        this);
  }
}
