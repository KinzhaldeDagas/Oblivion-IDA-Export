void __thiscall bhkBoxShape::~bhkBoxShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBoxShape::`vftable'; /*0x8b7dc8*/
  sub_89D700(this); /*0x8b7dd6*/
  --unk_BA7FF4; /*0x8b7ddb*/
  bhkConvexShape::~bhkConvexShape(this); /*0x8b7dec*/
}
