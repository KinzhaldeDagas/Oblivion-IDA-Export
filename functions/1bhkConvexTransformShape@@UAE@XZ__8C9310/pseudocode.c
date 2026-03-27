void __thiscall bhkConvexTransformShape::~bhkConvexTransformShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkConvexTransformShape::`vftable';
  sub_89D700(this);
  --dword_BA8158;
  bhkConvexShape::~bhkConvexShape(this);
}
