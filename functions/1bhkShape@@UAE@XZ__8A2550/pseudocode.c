void __thiscall bhkShape::~bhkShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  sub_89D700(this);
  --dword_BA7D70;
  bhkSerializable::~bhkSerializable(this);
}
