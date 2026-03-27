void __thiscall bhkMotorAction::~bhkMotorAction(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMotorAction::`vftable';
  sub_89D700(this);
  --dword_BA807C;
  bhkUnaryAction::~bhkUnaryAction(this);
}
