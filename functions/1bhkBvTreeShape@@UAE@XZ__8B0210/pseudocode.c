void __thiscall bhkBvTreeShape::~bhkBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable';
  sub_89D700(this);
  --dword_BA7F98;
  bhkShape::~bhkShape(this);
}
