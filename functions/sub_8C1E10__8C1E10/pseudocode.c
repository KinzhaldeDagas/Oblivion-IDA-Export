bhkRefObject *__thiscall sub_8C1E10(bhkRefObject *this, int a2)
{
  int *v3; // eax

  bhkRefObject::bhkRefObject(this); /*0x8c1e38*/
  v3 = 0; /*0x8c1e3d*/
  *((_DWORD *)this + 3) = 0; /*0x8c1e3f*/
  this->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c1e42*/
  ++unk_BA7D4C; /*0x8c1e48*/
  this->__vftable = (NiObjectVtbl *)&bhkMalleableConstraint::`vftable'; /*0x8c1e59*/
  if ( a2 ) /*0x8c1e5f*/
    v3 = (int *)(a2 + 4); /*0x8c1e61*/
  sub_8A0610(this, v3); /*0x8c1e67*/
  ++unk_BA8088; /*0x8c1e6c*/
  return this; /*0x8c1e75*/
}
