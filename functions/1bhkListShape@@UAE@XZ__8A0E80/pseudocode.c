void __thiscall bhkListShape::~bhkListShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkListShape::`vftable'; /*0x8a0ea8*/
  sub_89D700(this); /*0x8a0eb6*/
  --unk_BA7D58; /*0x8a0ebb*/
  bhkShapeCollection::~bhkShapeCollection(this); /*0x8a0ecc*/
}
