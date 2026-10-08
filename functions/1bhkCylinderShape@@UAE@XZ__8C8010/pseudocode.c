void __thiscall bhkCylinderShape::~bhkCylinderShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCylinderShape::`vftable'; /*0x8c8038*/
  sub_89D700(this); /*0x8c8046*/
  --unk_BA8140; /*0x8c804b*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8c805c*/
}
