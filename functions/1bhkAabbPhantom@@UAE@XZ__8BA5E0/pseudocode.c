void __thiscall bhkAabbPhantom::~bhkAabbPhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable';
  sub_89D700(this);
  --dword_BA802C;
  bhkPhantom::~bhkPhantom(this);
}
