void __thiscall bhkEntity::~bhkEntity(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable';
  sub_89D700(this);
  --dword_BA7F8C;
  bhkWorldObject::~bhkWorldObject(this);
}
