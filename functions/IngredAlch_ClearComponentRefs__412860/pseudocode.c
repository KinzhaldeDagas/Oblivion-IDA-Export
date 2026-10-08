void __thiscall IngredAlch_ClearComponentRefs(TESForm *this)
{
  EffectItemList_Clear(this + 2); /*0x412866*/
  j_TESForm_ClearComponentReferences(this); /*0x41286e*/
}
