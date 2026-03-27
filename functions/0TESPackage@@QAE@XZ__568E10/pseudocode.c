TESPackage *__thiscall TESPackage::TESPackage(TESPackage *this)
{
  TESForm_constr((TESForm *)this);
  this->__vftable = (TESPackageVtbl *)&TESPackage::`vftable';
  sub_569D60(&this->members.time);
  DNameNode::DNameNode((DNameNode *)&this->members.conditionList);
  this->members.super.type = kFormType_Package;
  sub_568730(this);
  return this;
}
