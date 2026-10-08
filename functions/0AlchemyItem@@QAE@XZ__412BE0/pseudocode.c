AlchemyItem *__thiscall AlchemyItem::AlchemyItem(AlchemyItem *this)
{
  MagicItemObject_constr((TESForm *)this); /*0x412c0b*/
  TESModel::TESModel((TESModel *)((char *)this + 0x40)); /*0x412c1d*/
  TESTexture_constr((TESTexture *)((char *)this + 0x58)); /*0x412c2c*/
  *((_DWORD *)this + 0x16) = &TESIcon::`vftable'; /*0x412c31*/
  TESScriptableForm_constr((_DWORD *)this + 0x19); /*0x412c41*/
  TESWeightForm_constr((float *)this + 0x1C); /*0x412c49*/
  *(_DWORD *)this = &AlchemyItem::`vftable'{for `AlchemyItem'}; /*0x412c55*/
  *((_DWORD *)this + 9) = &AlchemyItem::`vftable'{for `MagicItem'}; /*0x412c5b*/
  *((_DWORD *)this + 0xC) = &AlchemyItem::`vftable'{for `EffectItemList'}; /*0x412c62*/
  *((_DWORD *)this + 0x10) = &AlchemyItem::`vftable'{for `TESModel'}; /*0x412c69*/
  *((_DWORD *)this + 0x16) = &AlchemyItem::`vftable'{for `TESIcon'}; /*0x412c70*/
  *((_DWORD *)this + 0x19) = &AlchemyItem::`vftable'{for `TESScriptableForm'}; /*0x412c76*/
  *((_DWORD *)this + 0x1C) = &AlchemyItem::`vftable'{for `TESWeightForm'}; /*0x412c7c*/
  *((_BYTE *)this + 4) = 0x28; /*0x412c83*/
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF; /*0x412c87*/
  *((_BYTE *)this + 0x7C) = 0; /*0x412c8e*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x412c92*/
  return this; /*0x412c99*/
}
