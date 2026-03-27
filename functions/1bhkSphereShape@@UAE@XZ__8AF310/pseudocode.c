void __thiscall bhkSphereShape::~bhkSphereShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable';
  sub_89D700(this);
  --dword_BA7F80;
  bhkConvexShape::~bhkConvexShape(this);
}
