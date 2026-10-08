void __thiscall bhkConvexShape::~bhkConvexShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8aea18*/
  sub_89D700(this); /*0x8aea26*/
  --unk_BA7F50; /*0x8aea2b*/
  bhkSphereRepShape::~bhkSphereRepShape(this); /*0x8aea3c*/
}
