void __thiscall AlchemyItem::~AlchemyItem(AlchemyItem *this)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)((char *)this + 0x30);
  *(_DWORD *)this = &AlchemyItem::`vftable'{for `AlchemyItem'};
  *((_DWORD *)this + 9) = &AlchemyItem::`vftable'{for `MagicItem'};
  *v2 = &AlchemyItem::`vftable'{for `EffectItemList'};
  *((_DWORD *)this + 0x10) = &AlchemyItem::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x16) = &AlchemyItem::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x19) = &AlchemyItem::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x1C) = &AlchemyItem::`vftable'{for `TESWeightForm'};
  EffectItemList_Clear(v2);
  j_TESForm_ClearComponentReferences((TESForm *)this);
  TESWeightForm_destr((_DWORD *)this + 0x1C);
  TESTexture_destr((char *)this + 0x58);
  TESModel::~TESModel((TESModel *)((char *)this + 0x40));
  MagicItemObject::~MagicItemObject((TESForm *)this);
}
