SpellItem *SpellItem_MakeDefaultPlayerSpell()
{
  SpellItem *v0; // eax
  SpellItem *v1; // edi
  int v2; // eax
  _DWORD *v3; // esi

  v0 = (SpellItem *)FormHeapAlloc(0x44u);
  if ( v0 )
    v1 = SpellItem::SpellItem(v0);
  else
    v1 = 0;
  if ( FormHeapAlloc(0x24u) )
  {
    v2 = EffectSettingCollection_LookupByCode(0x45484552);
    v3 = (_DWORD *)EffectItem_constr(v2);
  }
  else
  {
    v3 = 0;
  }
  EffectItem_SetRange((int)v3, 0);
  EffectItem_SetDuration((int)v3, 0);
  EffectItem_SetMagnitude((int)v3, 5);
  EffectItem_SetArea((int)v3, 0);
  EffectItemList_AddItem((_DWORD *)v1 + 9, v3);
  BSStringT_Set((BSStringT *)((char *)v1 + 0x1C), "Default Player Spell", 0);
  *((_DWORD *)v1 + 0xD) = 0;
  return v1;
}
