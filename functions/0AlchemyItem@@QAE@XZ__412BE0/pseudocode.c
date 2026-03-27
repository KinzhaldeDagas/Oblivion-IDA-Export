AlchemyItem *__thiscall AlchemyItem::AlchemyItem(AlchemyItem *this)
{
  MagicItemObject_constr((TESForm *)this);
  TESModel::TESModel((TESModel *)((char *)this + 0x40));
  TESTexture_constr((TESTexture *)((char *)this + 0x58));
  *((_DWORD *)this + 0x16) = &TESIcon::`vftable';
  TESScriptableForm_constr((_DWORD *)this + 0x19);
  TESWeightForm_constr((float *)this + 0x1C);
  *(_DWORD *)this = &AlchemyItem::`vftable'{for `AlchemyItem'};
  *((_DWORD *)this + 9) = &AlchemyItem::`vftable'{for `MagicItem'};
  *((_DWORD *)this + 0xC) = &AlchemyItem::`vftable'{for `EffectItemList'};
  *((_DWORD *)this + 0x10) = &AlchemyItem::`vftable'{for `TESModel'};
  *((_DWORD *)this + 0x16) = &AlchemyItem::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0x19) = &AlchemyItem::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 0x1C) = &AlchemyItem::`vftable'{for `TESWeightForm'};
  *((_BYTE *)this + 4) = 0x28;
  *((_DWORD *)this + 0x1E) = 0xFFFFFFFF;
  *((_BYTE *)this + 0x7C) = 0;
  j_TESForm_InitializeComponents((TESForm *)this);
  return this;
}
