// 2026-05-18 73000 consumer decode: constructs bhkMultiSphereShape from packed 16-byte sphere vectors. Rotations are irrelevant for this stock multi-sphere path; multiple non-sphere collision records remain unsupported by stock 0x565510.
bhkRefObject *__thiscall OB_bhkMultiSphereShape_CtorFromSphereVector_010201A0(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this); /*0x563a58*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x563a5f*/
  *((_DWORD *)this + 3) = 0; /*0x563a65*/
  *((_DWORD *)this + 4) = 0; /*0x563a68*/
  ++unk_BA7D70; /*0x563a6b*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x563a72*/
  ++unk_BA7F44; /*0x563a78*/
  this->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable'; /*0x563a8a*/
  sub_8B76E0(this, a2); /*0x563a90*/
  ++unk_BA7FE8; /*0x563a95*/
  return this; /*0x563a9e*/
}
