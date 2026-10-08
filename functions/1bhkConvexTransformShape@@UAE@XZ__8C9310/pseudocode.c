void __thiscall bhkConvexTransformShape::~bhkConvexTransformShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexTransformShape::`vftable'; /*0x8c9338*/
  sub_89D700(this); /*0x8c9346*/
  --unk_BA8158; /*0x8c934b*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8c935c*/
}
