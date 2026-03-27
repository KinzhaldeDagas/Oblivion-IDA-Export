void __thiscall bhkTransformShape::~bhkTransformShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable';
  sub_89D700(this);
  --dword_BA7D64;
  bhkShape::~bhkShape(this);
}
