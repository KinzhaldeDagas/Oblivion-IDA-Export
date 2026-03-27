IngredientItem *__thiscall IngredientItem::IngredientItem(IngredientItem *this)
{
  MagicItemObject_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)((char *)this + 0x40));
  TESTexture_constr((TESTexture *)((char *)this + 0x58));
  *((_DWORD *)this + 0x16) = &TESIcon::`vftable';
  TESScriptableForm_constr((_DWORD *)this + 0x19);
  TESWeightForm_constr((float *)this + 0x1C);
  *(_DWORD *)this = &IngredientItem::`vftable'{for `IngredientItem'};
  *((_DWORD *)this + 9) = &IngredientItem::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 0xC) = &IngredientItem::`vftable'{for `EffectItemList'};
  *((_DWORD *)this + 0x10) = &IngredientItem::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x16) = &IngredientItem::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x19) = &IngredientItem::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x1C) = &IngredientItem::`vftable'{for `TESWeightForm'};
  *((_BYTE *)this + 4) = 0x19;
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF;
  *((_BYTE *)this + 0x7C) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
