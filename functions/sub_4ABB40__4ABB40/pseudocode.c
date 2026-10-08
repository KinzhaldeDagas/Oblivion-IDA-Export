TESForm *__thiscall sub_4ABB40(TESForm *this)
{
  TESForm_constr(this); /*0x4abb68*/
  this->vtbl = (TESFormVtbl *)&TESCombatStyle::`vftable'; /*0x4abb77*/
  this->member.type = kFormType_CombatStyle; /*0x4abb7d*/
  sub_4A9A00((int)this); /*0x4abb81*/
  return this; /*0x4abb88*/
}
