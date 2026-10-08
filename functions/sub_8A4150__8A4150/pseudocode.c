bhkRefObject *__thiscall sub_8A4150(bhkRefObject *this)
{
  _DWORD v3[8]; // [esp-4h] [ebp-20h] BYREF

  v3[3] = this; /*0x8a4176*/
  bhkRefObject::bhkRefObject(this); /*0x8a417a*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x8a417f*/
  *((_DWORD *)this + 3) = 0; /*0x8a4185*/
  ++unk_BA7D34; /*0x8a418c*/
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable'; /*0x8a4193*/
  ++unk_BA7F8C; /*0x8a4199*/
  this->__vftable = (NiObjectVtbl *)&bhkRigidBody::`vftable'; /*0x8a41a3*/
  v3[7] = 0; /*0x8a41ac*/
  v3[4] = v3; /*0x8a41b4*/
  sub_532DF0((_DWORD *)this + 4, 0); /*0x8a41be*/
  *((_DWORD *)this + 6) = 0; /*0x8a41c3*/
  ++unk_BA7D80; /*0x8a41ca*/
  return this; /*0x8a41d3*/
}
