void __thiscall bhkSphereShape::~bhkSphereShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable'; /*0x8af338*/
  sub_89D700(this); /*0x8af346*/
  --unk_BA7F80; /*0x8af34b*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8af35c*/
}
