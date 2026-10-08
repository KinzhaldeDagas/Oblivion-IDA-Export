void __thiscall bhkShape::~bhkShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8a2578*/
  sub_89D700(this); /*0x8a2586*/
  --unk_BA7D70; /*0x8a258b*/
  bhkSerializable::~bhkSerializable(this); /*0x8a259c*/
}
