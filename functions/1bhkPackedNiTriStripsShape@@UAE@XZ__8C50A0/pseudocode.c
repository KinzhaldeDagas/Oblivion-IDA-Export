void __thiscall bhkPackedNiTriStripsShape::~bhkPackedNiTriStripsShape(bhkPackedNiTriStripsShape *this)
{
  *(_DWORD *)this = &bhkPackedNiTriStripsShape::`vftable';
  sub_89D700(this);
  --dword_BA8120;
  bhkShapeCollection::~bhkShapeCollection(this);
}
