void __thiscall bhkMotorAction::~bhkMotorAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMotorAction::`vftable'; /*0x8be818*/
  sub_89D700(this); /*0x8be826*/
  --unk_BA807C; /*0x8be82b*/
  bhkUnaryAction::~bhkUnaryAction(this); /*0x8be83c*/
}
