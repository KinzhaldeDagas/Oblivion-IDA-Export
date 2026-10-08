void __thiscall bhkShapeCollection::~bhkShapeCollection(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable'; /*0x8ce478*/
  sub_89D700(this); /*0x8ce486*/
  --unk_BA816C; /*0x8ce48b*/
  bhkShape::~bhkShape(this); /*0x8ce49c*/
}
