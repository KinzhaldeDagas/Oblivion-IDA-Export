SpellItem *SpellItem_MakeDefaultMarksmanSpell()
{
  SpellItem *v0; // eax
  SpellItem *v1; // esi
  int v2; // eax
  _DWORD *v3; // edi
  void (__thiscall *v4)(char *, _DWORD); // edx

  v0 = (SpellItem *)FormHeapAlloc(0x44u);
  if ( v0 )
    v1 = SpellItem::SpellItem(v0);
  else
    v1 = 0;
  if ( FormHeapAlloc(0x24u) )
  {
    v2 = EffectSettingCollection_LookupByCode(0x41524150);
    v3 = (_DWORD *)EffectItem_constr(v2);
  }
  else
  {
    v3 = 0;
  }
  EffectItem_SetRange((int)v3, 0);
  EffectItem_SetDuration((int)v3, 0xA);
  EffectItem_SetMagnitude((int)v3, 0);
  EffectItem_SetArea((int)v3, 0);
  EffectItemList_AddItem((_DWORD *)v1 + 9, v3);
  BSStringT_Set((BSStringT *)((char *)v1 + 0x1C), "Master Marksman Paralysis", 0);
  v4 = *(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)v1 + 6) + 0x14);
  *((_DWORD *)v1 + 0xD) = 0;
  *((_DWORD *)v1 + 0xE) = 0;
  v4((char *)v1 + 0x18, 0);
  return v1;
}
