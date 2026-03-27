void __thiscall bhkTriangleShape::~bhkTriangleShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTriangleShape::`vftable';
  sub_89D700(this);
  --dword_BA8100;
  bhkConvexShape::~bhkConvexShape(this);
}
