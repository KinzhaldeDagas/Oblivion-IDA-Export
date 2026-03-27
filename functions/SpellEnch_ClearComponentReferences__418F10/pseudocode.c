void __thiscall SpellEnch_ClearComponentReferences(TESForm *this)
{
  EffectItemList_Clear((char *)this + 0x24);
  j_TESForm_ClearComponentReferences(this);
}
