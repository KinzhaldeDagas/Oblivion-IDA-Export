void __thiscall IngredAlch_ClearComponentRefs(TESForm *this)
{
  EffectItemList_Clear(this + 2);
  j_TESForm_ClearComponentReferences(this);
}
