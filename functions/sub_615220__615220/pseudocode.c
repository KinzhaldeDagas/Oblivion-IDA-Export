// Returns true to suppress the ranged attack/cast for ally safety. Optional arg is SelectedSpellInfo*; null selects equipped staff/bow enchantment or ammo effects.
char __thiscall sub_615220(int this, int *a2)
{
  char v3; // bl
  char *Name; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ebx
  TESObjectREFR *v15; // esi
  bool v16; // zf
  TESObjectREFR *v17; // eax
  char *v18; // eax
  char v19; // [esp+0h] [ebp-20h]
  float DistanceBetween; // [esp+10h] [ebp-10h]
  _DWORD *StrongestItem; // [esp+14h] [ebp-Ch]

  if ( a2 ) /*0x615233*/
  {
    v3 = 0; /*0x61523a*/
    if ( !EffectItemList_HasOnTarget(*a2 + 0xC) )// Selected magic must contain an effective Target-range effect (range==2; EffectSetting flag 0x400000 clear) before ally hold-fire logic applies. /*0x615243*/
      return 0; /*0x6153eb*/
  }
  else
  {
    v6 = *(_DWORD *)(this + 0x3C); /*0x615280*/
    if ( !v6 ) /*0x615285*/
      return 0; /*0x615285*/
    v7 = *(_DWORD *)(v6 + 0x58); /*0x61528b*/
    if ( !v7 /*0x6152e4*/
      || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0xEC))(v7, 1)
      || !*(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 0x3C) + 0x58) + 0xEC))(
                        *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58),
                        1)
                    + 8)
      || *(_BYTE *)(CombatController_GetEquippedWeaponForm((_DWORD *)this) + 0x90) != 5
      && *(_BYTE *)(CombatController_GetEquippedWeaponForm((_DWORD *)this) + 0x90) != 4 )
    {
      return 0;                                 // Null selected-spell path applies only to weapon types 4 Staff and 5 Bow. /*0x6152e4*/
    }
    v3 = 1; /*0x6152ea*/
  }
  if ( *(_BYTE *)(this + 0x159) )               // CombatController+0x159 is the precomputed 'ally blocks main target' flag. It immediately suppresses target spells and ranged weapon attacks. /*0x615249*/
  {
    if ( unk_B3B908 ) /*0x615256*/
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C)); /*0x615262*/
      Interface_ConsolePrint("%.20s is holding off attacking because an ally is in the way!", Name); /*0x61526d*/
    }
    return 1; /*0x61527d*/
  }
  if ( a2 ) /*0x6152f3*/
  {
    v8 = *a2; /*0x6152f5*/
    goto LABEL_19; /*0x6152f7*/
  }
  if ( CombatController_GetEquippedWeaponForm((_DWORD *)this) ) /*0x6152fb*/
  {
    v9 = *(_DWORD *)(CombatController_GetEquippedWeaponForm((_DWORD *)this) + 0x64); /*0x61530e*/
    if ( v9 ) /*0x615313*/
    {
      v8 = v9 + 0x18;                           // Weapon fallback effect source is weapon enchantment; if absent on staff/bow path, tries equipped ammo enchantment. /*0x615315*/
LABEL_19:
      if ( v8 ) /*0x61531a*/
        goto LABEL_26; /*0x61531a*/
    }
  }
  if ( !v3 ) /*0x61531e*/
    return 0; /*0x61531e*/
  v10 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(this + 0x3C) + 0x58) + 0xF4))( /*0x615334*/
          *(_DWORD *)(*(_DWORD *)(this + 0x3C) + 0x58),
          1);
  if ( !v10 ) /*0x615338*/
    return 0; /*0x615338*/
  v11 = *(void **)(v10 + 8); /*0x61533e*/
  if ( !v11 ) /*0x615343*/
    return 0; /*0x615343*/
  v12 = OblivionDynamicCast( /*0x615358*/
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESAmmo `RTTI Type Descriptor',
          0);
  if ( !v12 ) /*0x615362*/
    return 0; /*0x615362*/
  v13 = v12[0x16]; /*0x615364*/
  if ( !v13 || v13 == 0xFFFFFFE8 ) /*0x61536e*/
    return 0; /*0x61536e*/
LABEL_26:
  StrongestItem = (_DWORD *)EffectItemList_GetStrongestItem(3, 1);// Resolve effect list from selected spell, weapon enchantment, or ammo enchantment, then choose highest truncated-cost effect with range filter 3 (any) and requireArea=true. /*0x615370*/
  if ( !StrongestItem ) /*0x615382*/
    return 0; /*0x615382*/
  v14 = this + 0x15C;                           // CombatController+0x15C is inline BSSimpleList<Actor*> cached friendly actors. /*0x615384*/
  if ( this == 0xFFFFFEA4 ) /*0x61538c*/
    return 0; /*0x61538c*/
  while ( 1 ) /*0x615390*/
  {
    v15 = *(TESObjectREFR **)v14; /*0x615390*/
    v16 = *(_DWORD *)v14 == 0; /*0x615392*/
    v14 = *(_DWORD *)(v14 + 4); /*0x615394*/
    if ( !v16 && v15 != *(TESObjectREFR **)(this + 0x3C) ) /*0x61539c*/
    {
      v17 = (TESObjectREFR *)CombatController_GetCurrentTarget(this); /*0x6153a2*/
      DistanceBetween = TESObjectREFR_GetSurfaceDistance((int *)this, v15, v17, 0, v19); /*0x6153ae*/
      if ( (double)EffectItem_GetArea(StrongestItem) * kFaceGenVariationScale1_5 >= DistanceBetween ) /*0x6153dd*/
        break;                                  // Area safety threshold: hold fire when SurfaceDistance(ally,currentTarget,false) <= 1.5 * effectiveArea. Pure 3D proximity; no LOS/raycast. /*0x6153dd*/
    }
    if ( !v14 ) /*0x6153e1*/
      return 0; /*0x6153e1*/
  }
  if ( !unk_B3B908 ) /*0x6153f5*/
    return 1; /*0x6153f5*/
  v18 = TESObjectREFR_GetName(*(TESObjectREFR **)(this + 0x3C)); /*0x6153fe*/
  Interface_ConsolePrint("%.20s is holding off using an area spell so that allies don't get hurt!", v18); /*0x615409*/
  return 1; /*0x615277*/
}
