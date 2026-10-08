SpellItem *SpellItem_MakeDefaultPlayerSpell()
{
  SpellItem *v0; // eax
  SpellItem *v1; // edi
  int v2; // eax
  _DWORD *v3; // esi

  v0 = (SpellItem *)FormHeapAlloc(0x44u); /*0x41d4c5*/
  if ( v0 ) /*0x41d4db*/
    v1 = SpellItem::SpellItem(v0); /*0x41d4e4*/
  else
    v1 = 0; /*0x41d4e8*/
  if ( FormHeapAlloc(0x24u) ) /*0x41d4f4*/
  {
    v2 = EffectSettingCollection_LookupByCode(0x45484552); /*0x41d513*/
    v3 = (_DWORD *)EffectItem_constr(v2); /*0x41d523*/
  }
  else
  {
    v3 = 0; /*0x41d527*/
  }
  EffectItem_SetRange((int)v3, 0); /*0x41d535*/
  EffectItem_SetDuration((int)v3, 0); /*0x41d53e*/
  EffectItem_SetMagnitude((int)v3, 5); /*0x41d547*/
  EffectItem_SetArea((int)v3, 0); /*0x41d550*/
  EffectItemList_AddItem((_DWORD *)v1 + 9, v3); /*0x41d559*/
  BSStringT_Set((BSStringT *)((char *)v1 + 0x1C), "Default Player Spell", 0); /*0x41d568*/
  *((_DWORD *)v1 + 0xD) = 0; /*0x41d56d*/
  return v1; /*0x41d576*/
}
