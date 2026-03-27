void __thiscall bhkCharControllerShape::~bhkCharControllerShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexVerticesShape::`vftable';
  sub_89D700(this);
  --dword_BA814C;
  bhkConvexShape::~bhkConvexShape(this);
}
