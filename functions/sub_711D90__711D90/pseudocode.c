NiObject *__thiscall sub_711D90(NiObject *this, NiAVObject *a2)
{
  NiObject_constr(this); /*0x711db8*/
  this->__vftable = (NiObjectVtbl *)&NiCollisionObject::`vftable'; /*0x711dcb*/
  *((_DWORD *)this + 2) = a2; /*0x711dd1*/
  if ( a2 ) /*0x711dd4*/
  {
    if ( a2->members.m_spCollision != this ) /*0x711ddc*/
      sub_435CE0(a2, (volatile LONG *)this); /*0x711ddf*/
  }
  return this; /*0x711de6*/
}
