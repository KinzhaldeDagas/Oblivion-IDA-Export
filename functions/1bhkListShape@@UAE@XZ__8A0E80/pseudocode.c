void __thiscall bhkListShape::~bhkListShape(bhkListShape *this)
{
  *(_DWORD *)this = &bhkListShape::`vftable';
  sub_89D700(this);
  --dword_BA7D58;
  bhkShapeCollection::~bhkShapeCollection(this);
}
