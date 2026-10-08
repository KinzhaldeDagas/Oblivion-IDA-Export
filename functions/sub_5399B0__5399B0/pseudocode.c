bhkRefObject *__thiscall sub_5399B0(bhkRefObject *this, int a2)
{
  int *v3; // eax

  bhkRefObject::bhkRefObject(this); /*0x5399d8*/
  v3 = 0; /*0x5399dd*/
  *((_DWORD *)this + 3) = 0; /*0x5399df*/
  this->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x5399e2*/
  ++unk_BA7D4C; /*0x5399e8*/
  this->__vftable = (NiObjectVtbl *)&bhkLimitedHingeConstraint::`vftable'; /*0x5399f9*/
  if ( a2 ) /*0x5399ff*/
    v3 = (int *)(a2 + 4); /*0x539a01*/
  sub_8A0610(this, v3); /*0x539a07*/
  ++unk_BA7FC8; /*0x539a0c*/
  return this; /*0x539a15*/
}
