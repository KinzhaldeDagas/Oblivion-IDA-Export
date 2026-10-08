void __thiscall AlchemyItem::~AlchemyItem(AlchemyItem *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)((char *)this + 0x30); /*0x4128ad*/
  *(_DWORD *)this = &AlchemyItem::`vftable'{for `AlchemyItem'}; /*0x4128b9*/
  *((_DWORD *)this + 9) = &AlchemyItem::`vftable'{for `MagicItem'}; /*0x4128bf*/
  *v2 = &AlchemyItem::`vftable'{for `EffectItemList'}; /*0x4128c6*/
  *((_DWORD *)this + 0x10) = &AlchemyItem::`vftable'{for `TESModel'}; /*0x4128cc*/
  *((_DWORD *)this + 0x16) = &AlchemyItem::`vftable'{for `TESIcon'}; /*0x4128d2*/
  *((_DWORD *)this + 0x19) = &AlchemyItem::`vftable'{for `TESScriptableForm'}; /*0x4128d8*/
  *((_DWORD *)this + 0x1C) = &AlchemyItem::`vftable'{for `TESWeightForm'}; /*0x4128df*/
  EffectItemList_Clear(v2); /*0x4128ee*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4128f5*/
  TESWeightForm_destr((_DWORD *)this + 0x1C); /*0x412901*/
  TESTexture_destr((_DWORD *)this + 0x16); /*0x41290d*/
  TESModel::~TESModel((TESModel *)((char *)this + 0x40)); /*0x412919*/
  MagicItemObject::~MagicItemObject((TESForm *)this); /*0x412928*/
}
