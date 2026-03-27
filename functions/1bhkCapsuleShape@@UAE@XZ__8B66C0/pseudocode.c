void __thiscall bhkCapsuleShape::~bhkCapsuleShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable';
  sub_89D700(this);
  --dword_BA7FD4;
  bhkConvexShape::~bhkConvexShape(this);
}
