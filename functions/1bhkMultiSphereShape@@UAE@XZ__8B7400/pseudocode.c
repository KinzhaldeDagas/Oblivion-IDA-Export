void __thiscall bhkMultiSphereShape::~bhkMultiSphereShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable';
  sub_89D700(this);
  --dword_BA7FE8;
  bhkSphereRepShape::~bhkSphereRepShape(this);
}
