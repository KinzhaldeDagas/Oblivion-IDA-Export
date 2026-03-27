void __thiscall bhkConvexShape::~bhkConvexShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable';
  sub_89D700(this);
  --dword_BA7F50;
  bhkSphereRepShape::~bhkSphereRepShape(this);
}
