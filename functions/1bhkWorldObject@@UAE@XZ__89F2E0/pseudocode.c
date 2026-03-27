void __thiscall bhkWorldObject::~bhkWorldObject(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  sub_89D700(this);
  --dword_BA7D34;
  bhkSerializable::~bhkSerializable(this);
}
