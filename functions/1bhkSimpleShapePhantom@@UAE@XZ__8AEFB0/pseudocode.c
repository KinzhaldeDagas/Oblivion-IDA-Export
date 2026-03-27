void __thiscall bhkSimpleShapePhantom::~bhkSimpleShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkSimpleShapePhantom::`vftable';
  sub_89D700(this);
  --dword_BA7F74;
  bhkShapePhantom::~bhkShapePhantom(this);
}
