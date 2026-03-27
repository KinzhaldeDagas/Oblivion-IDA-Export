void __thiscall bhkCachingShapePhantom::~bhkCachingShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCachingShapePhantom::`vftable';
  sub_89D700(this);
  --dword_BA804C;
  bhkShapePhantom::~bhkShapePhantom(this);
}
