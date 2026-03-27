void __thiscall bhkNiTriStripsShape::~bhkNiTriStripsShape(bhkNiTriStripsShape *this)
{
  *(_DWORD *)this = &bhkNiTriStripsShape::`vftable';
  sub_89D700(this);
  --dword_BA812C;
  bhkShapeCollection::~bhkShapeCollection(this);
}
