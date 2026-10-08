void __thiscall bhkBinaryAction::~bhkBinaryAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x89fcb8*/
  sub_89D700(this); /*0x89fcc6*/
  --unk_BA7D40; /*0x89fccb*/
  bhkAction::~bhkAction(this); /*0x89fcdc*/
}
