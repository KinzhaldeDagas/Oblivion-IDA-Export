TESForm *__thiscall sub_4ABB40(TESForm *this)
{
  TESForm_constr(this);
  this->vtbl = (TESFormVtbl *)&TESCombatStyle::`vftable';
  this->member.type = kFormType_CombatStyle;
  sub_4A9A00((int)this);
  return this;
}
