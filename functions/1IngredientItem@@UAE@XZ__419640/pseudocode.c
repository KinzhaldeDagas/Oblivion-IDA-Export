void __thiscall IngredientItem::~IngredientItem(IngredientItem *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)((char *)this + 0x30); /*0x41966d*/
  *(_DWORD *)this = &IngredientItem::`vftable'{for `IngredientItem'}; /*0x419679*/
  *((_DWORD *)this + 9) = &IngredientItem::`vftable'{for `MagicItem'}; /*0x41967f*/
  *v2 = &IngredientItem::`vftable'{for `EffectItemList'}; /*0x419686*/
  *((_DWORD *)this + 0x10) = &IngredientItem::`vftable'{for `TESModel'}; /*0x41968c*/
  *((_DWORD *)this + 0x16) = &IngredientItem::`vftable'{for `TESIcon'}; /*0x419692*/
  *((_DWORD *)this + 0x19) = &IngredientItem::`vftable'{for `TESScriptableForm'}; /*0x419698*/
  *((_DWORD *)this + 0x1C) = &IngredientItem::`vftable'{for `TESWeightForm'}; /*0x41969f*/
  EffectItemList_Clear(v2); /*0x4196ae*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4196b5*/
  TESWeightForm_destr((_DWORD *)this + 0x1C); /*0x4196c1*/
  TESTexture_destr((_DWORD *)this + 0x16); /*0x4196cd*/
  TESModel::~TESModel((TESModel *)((char *)this + 0x40)); /*0x4196d9*/
  MagicItemObject::~MagicItemObject((TESForm *)this); /*0x4196e8*/
}
