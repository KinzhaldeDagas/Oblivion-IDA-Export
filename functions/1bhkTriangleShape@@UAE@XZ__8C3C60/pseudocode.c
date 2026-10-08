void __thiscall bhkTriangleShape::~bhkTriangleShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTriangleShape::`vftable'; /*0x8c3c88*/
  sub_89D700(this); /*0x8c3c96*/
  --unk_BA8100; /*0x8c3c9b*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8c3cac*/
}
