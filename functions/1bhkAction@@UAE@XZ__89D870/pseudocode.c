void __thiscall bhkAction::~bhkAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkAction::`vftable';
  sub_89D700(this);
  --dword_BA7D00;
  bhkSerializable::~bhkSerializable(this);
}
