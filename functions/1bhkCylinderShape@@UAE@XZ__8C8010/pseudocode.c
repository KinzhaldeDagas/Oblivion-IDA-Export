void __thiscall bhkCylinderShape::~bhkCylinderShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCylinderShape::`vftable';
  sub_89D700(this);
  --dword_BA8140;
  bhkConvexShape::~bhkConvexShape(this);
}
