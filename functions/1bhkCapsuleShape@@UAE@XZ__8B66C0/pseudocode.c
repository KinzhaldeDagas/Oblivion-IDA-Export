void __thiscall bhkCapsuleShape::~bhkCapsuleShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable'; /*0x8b66e8*/
  sub_89D700(this); /*0x8b66f6*/
  --unk_BA7FD4; /*0x8b66fb*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8b670c*/
}
