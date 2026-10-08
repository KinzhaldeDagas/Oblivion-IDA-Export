IngredientItem *__thiscall IngredientItem::IngredientItem(IngredientItem *this)
{
  MagicItemObject_constr((TESForm *)this); /*0x41991b*/
  TESModel::TESModel((TESModel *)((char *)this + 0x40)); /*0x41992d*/
  TESTexture_constr((TESTexture *)((char *)this + 0x58)); /*0x41993c*/
  *((_DWORD *)this + 0x16) = &TESIcon::`vftable'; /*0x419941*/
  TESScriptableForm_constr((_DWORD *)this + 0x19); /*0x419951*/
  TESWeightForm_constr((float *)this + 0x1C); /*0x419959*/
  *(_DWORD *)this = &IngredientItem::`vftable'{for `IngredientItem'}; /*0x419965*/
  *((_DWORD *)this + 9) = &IngredientItem::`vftable'{for `MagicItem'}; /*0x41996b*/
  *((_DWORD *)this + 0xC) = &IngredientItem::`vftable'{for `EffectItemList'}; /*0x419972*/
  *((_DWORD *)this + 0x10) = &IngredientItem::`vftable'{for `TESModel'}; /*0x419979*/
  *((_DWORD *)this + 0x16) = &IngredientItem::`vftable'{for `TESIcon'}; /*0x419980*/
  *((_DWORD *)this + 0x19) = &IngredientItem::`vftable'{for `TESScriptableForm'}; /*0x419986*/
  *((_DWORD *)this + 0x1C) = &IngredientItem::`vftable'{for `TESWeightForm'}; /*0x41998c*/
  *((_BYTE *)this + 4) = 0x19; /*0x419993*/
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF; /*0x419997*/
  *((_BYTE *)this + 0x7C) = 0; /*0x41999e*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x4199a2*/
  return this; /*0x4199a9*/
}
