void __thiscall bhkShapePhantom::~bhkShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShapePhantom::`vftable';
  sub_89D700(this);
  --dword_BA7F68;
  bhkPhantom::~bhkPhantom(this);
}
