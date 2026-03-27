void __thiscall IngredientItem::~IngredientItem(IngredientItem *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)((char *)this + 0x30);
  *(_DWORD *)this = &IngredientItem::`vftable'{for `IngredientItem'};
  *((_DWORD *)this + 9) = &IngredientItem::`vftable'{for `MagicItem'};
  *v2 = &IngredientItem::`vftable'{for `EffectItemList'};
  *((_DWORD *)this + 0x10) = &IngredientItem::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x16) = &IngredientItem::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x19) = &IngredientItem::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x1C) = &IngredientItem::`vftable'{for `TESWeightForm'};
  EffectItemList_Clear(v2);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESWeightForm_destr((_DWORD *)this + 0x1C);
  TESTexture_destr((char *)this + 0x58);
  TESModel::~TESModel((TESModel *)((char *)this + 0x40));
  MagicItemObject::~MagicItemObject((TESForm *)this);
}
