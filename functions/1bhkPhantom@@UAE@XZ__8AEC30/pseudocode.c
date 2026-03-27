void __thiscall bhkPhantom::~bhkPhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable';
  sub_89D700(this);
  --dword_BA7F5C;
  bhkWorldObject::~bhkWorldObject(this);
}
