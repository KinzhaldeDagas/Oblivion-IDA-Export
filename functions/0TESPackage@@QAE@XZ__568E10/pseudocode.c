TESPackage *__thiscall TESPackage::TESPackage(TESPackage *this)
{
  TESForm_constr((TESForm *)this); /*0x568e38*/
  this->__vftable = &TESPackage::`vftable'; /*0x568e48*/
  sub_569D60(&this->members.time); /*0x568e4e*/
  DNameNode::DNameNode((DNameNode *)&this->members.conditionList); /*0x568e5b*/
  this->members.super.type = kFormType_Package; /*0x568e67*/
  sub_568730(this); /*0x568e6b*/
  return this; /*0x568e72*/
}
