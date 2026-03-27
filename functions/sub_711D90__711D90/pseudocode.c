NiObject *__thiscall sub_711D90(NiObject *this, NiAVObject *a2)
{
  NiObject_constr(this);
  this->__vftable = (NiObjectVtbl *)&NiCollisionObject::`vftable';
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
  {
    if ( a2->members.m_spCollision != this )
      sub_435CE0(a2, (volatile LONG *)this);
  }
  return this;
}
