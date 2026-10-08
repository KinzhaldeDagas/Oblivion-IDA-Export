void __thiscall bhkCharControllerShape::~bhkCharControllerShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexVerticesShape::`vftable'; /*0x8c88b8*/
  sub_89D700(this); /*0x8c88c6*/
  --unk_BA814C; /*0x8c88cb*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8c88dc*/
}
