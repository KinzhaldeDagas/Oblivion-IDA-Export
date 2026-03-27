void __thiscall bhkShapeCollection::~bhkShapeCollection(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShapeCollection::`vftable';
  sub_89D700(this);
  --dword_BA816C;
  bhkShape::~bhkShape(this);
}
