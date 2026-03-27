void __thiscall bhkBoxShape::~bhkBoxShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBoxShape::`vftable';
  sub_89D700(this);
  --dword_BA7FF4;
  bhkConvexShape::~bhkConvexShape(this);
}
