void __thiscall bhkUnaryAction::~bhkUnaryAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x89e018*/
  sub_89D700(this); /*0x89e026*/
  --unk_BA7D0C; /*0x89e02b*/
  bhkAction::~bhkAction(this); /*0x89e03c*/
}
