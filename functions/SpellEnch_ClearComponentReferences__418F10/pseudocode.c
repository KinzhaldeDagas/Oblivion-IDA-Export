void __thiscall SpellEnch_ClearComponentReferences(TESForm *this)
{
  EffectItemList_Clear((char *)this + 0x24); /*0x418f16*/
  j_TESForm_ClearComponentReferences(this); /*0x418f1e*/
}
