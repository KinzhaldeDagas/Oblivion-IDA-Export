void __thiscall bhkAction::~bhkAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x89d898*/
  sub_89D700(this); /*0x89d8a6*/
  --unk_BA7D00; /*0x89d8ab*/
  bhkSerializable::~bhkSerializable(this); /*0x89d8bc*/
}
