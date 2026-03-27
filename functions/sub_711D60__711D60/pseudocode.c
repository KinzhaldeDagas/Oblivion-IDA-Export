void __thiscall sub_711D60(volatile LONG *this, NiAVObject *a2)
{
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
  {
    if ( a2->members.m_spCollision != this )
      sub_435CE0(a2, this);
  }
}
