SpellItem *SpellItem_MakeDefaultMarksmanSpell()
{
  SpellItem *v0; // eax
  SpellItem *v1; // esi
  int v2; // eax
  _DWORD *v3; // edi
  void (__thiscall *v4)(char *, _DWORD); // edx

  v0 = (SpellItem *)FormHeapAlloc(0x44u); /*0x41d5b5*/
  if ( v0 ) /*0x41d5cb*/
    v1 = SpellItem::SpellItem(v0); /*0x41d5d4*/
  else
    v1 = 0; /*0x41d5d8*/
  if ( FormHeapAlloc(0x24u) ) /*0x41d5e4*/
  {
    v2 = EffectSettingCollection_LookupByCode(0x41524150); /*0x41d603*/
    v3 = (_DWORD *)EffectItem_constr(v2); /*0x41d613*/
  }
  else
  {
    v3 = 0; /*0x41d617*/
  }
  EffectItem_SetRange((int)v3, 0); /*0x41d625*/
  EffectItem_SetDuration((int)v3, 0xA); /*0x41d62e*/
  EffectItem_SetMagnitude((int)v3, 0); /*0x41d637*/
  EffectItem_SetArea((int)v3, 0); /*0x41d640*/
  EffectItemList_AddItem((_DWORD *)v1 + 9, v3); /*0x41d649*/
  BSStringT_Set((BSStringT *)((char *)v1 + 0x1C), "Master Marksman Paralysis", 0); /*0x41d658*/
  v4 = *(void (__thiscall **)(char *, _DWORD))(*((_DWORD *)v1 + 6) + 0x14); /*0x41d660*/
  *((_DWORD *)v1 + 0xD) = 0; /*0x41d668*/
  *((_DWORD *)v1 + 0xE) = 0; /*0x41d66f*/
  v4((char *)v1 + 0x18, 0); /*0x41d676*/
  return v1; /*0x41d67a*/
}
