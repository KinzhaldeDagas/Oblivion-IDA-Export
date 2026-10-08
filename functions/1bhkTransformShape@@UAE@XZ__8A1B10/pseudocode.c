void __thiscall bhkTransformShape::~bhkTransformShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable'; /*0x8a1b38*/
  sub_89D700(this); /*0x8a1b46*/
  --unk_BA7D64; /*0x8a1b4b*/
  bhkShape::~bhkShape(this); /*0x8a1b5c*/
}
