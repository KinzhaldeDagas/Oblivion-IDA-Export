// Return the base actor's floating equipment desirability/rating for the supplied item. Native return type is float, not double. External ThrowingWeapon damage-doubling/ranged-multiplier and mode 1->2 conversion remain plugin policy; they are not behavior performed by this native evaluator.
float __thiscall TESActorBase_GetEquippableItemRating(TESActorBase *this, TESForm *item)
{
  _DWORD *v3; // eax
  unsigned __int16 v4; // ax
  double v5; // st7
  char *v6; // eax
  char *v7; // edi
  TESActorBaseVtbl *v8; // ebx
  int WeaponSkillAV; // eax
  int v10; // eax
  _DWORD *v11; // eax
  unsigned __int16 *v12; // eax
  unsigned __int16 *v13; // edi
  double v14; // st7
  TESActorBaseVtbl *vtbl; // ebx
  int v17; // [esp+8h] [ebp-34h]
  int v18; // [esp+Ch] [ebp-30h]
  int v19; // [esp+14h] [ebp-28h]
  float v20; // [esp+18h] [ebp-24h]
  float v21; // [esp+1Ch] [ebp-20h]
  float v22; // [esp+20h] [ebp-1Ch]
  float v23; // [esp+30h] [ebp-Ch]
  float v24; // [esp+30h] [ebp-Ch]
  float v25; // [esp+30h] [ebp-Ch]
  float v26; // [esp+30h] [ebp-Ch]
  float v27; // [esp+30h] [ebp-Ch]
  float v28; // [esp+30h] [ebp-Ch]
  float v29; // [esp+34h] [ebp-8h]
  float v30; // [esp+38h] [ebp-4h]
  int ArmorRating; // [esp+38h] [ebp-4h]
  float itema; // [esp+40h] [ebp+4h]

  v23 = 0.0; /*0x51a12b*/
  if ( item ) /*0x51a133*/
  {
    switch ( item->member.type ) /*0x51a150*/
    {
      case kFormType_Armor: /*0x51a150*/
        v12 = (unsigned __int16 *)OblivionDynamicCast( /*0x51a2d0*/
                                    item,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESObjectARMO `RTTI Type Descriptor',
                                    0);
        v13 = v12; /*0x51a2d5*/
        if ( !v12 || !TESHealthForm_GetHealthForForm(v12) ) /*0x51a2e3*/
          return v23; /*0x51a2ed*/
        v14 = ((double (__thiscall *)(TESActorBase *, int, _DWORD))this->vtbl[1].super.super.super.Unk_0C)(this, 7, 1.0); /*0x51a301*/
        vtbl = this->vtbl; /*0x51a303*/
        v22 = v14; /*0x51a308*/
        v21 = COERCE_FLOAT(TESObjectARMO_GetArmorSkillAV(v13));// Paired Medium boundary 7/7: TESActorBase armor-item evaluation selects the armor skill AV; consumer is Calc_ArmorRating at 0x51A34A. The receiver supplies the base-NPC context for authored NPC sidecar values. /*0x51a310*/
        v20 = ((double (__thiscall *)(TESActorBase *))vtbl[1].super.super.super.Unk_0C)(this); /*0x51a31e*/
        ArmorRating = (int)TESObjectARMO_GetArmorRating(v13); /*0x51a33c*/
        v28 = Calc_ArmorRating(ArmorRating, v20, v21, v22);// Paired Medium boundary 7/7: TESActorBase_GetEquippableItemRating armor consumer. Use an authored NPC Medium sidecar level only when the receiver resolves to a TESNPC; otherwise preserve the engine-supplied fallback skill. /*0x51a34f*/
        v5 = v28; /*0x51a353*/
        break; /*0x51a360*/
      case kFormType_Clothing: /*0x51a150*/
        v11 = OblivionDynamicCast( /*0x51a294*/
                item,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESObjectCLOT `RTTI Type Descriptor',
                0);
        if ( !v11 ) /*0x51a29e*/
          return v23; /*0x51a29e*/
        v27 = Calc_ClothingRatingFromValue_(v11[0x14]); /*0x51a2ad*/
        v5 = v27; /*0x51a2b1*/
        break; /*0x51a2be*/
      case kFormType_Light: /*0x51a150*/
        return flt_A2FE7C; /*0x51a369*/
      case kFormType_Weapon: /*0x51a150*/
        v6 = (char *)OblivionDynamicCast( /*0x51a1aa*/
                       item,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESObjectWEAP `RTTI Type Descriptor',
                       0);
        v7 = v6; /*0x51a1af*/
        if ( !v6 || !TESHealthForm_GetHealthForForm(v6) ) /*0x51a1bd*/
          return v23; /*0x51a1c7*/
        v8 = this->vtbl; /*0x51a1cd*/
        WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV(v7);// BladeSkillsRestored schema-4 owner decode: ECX is TESObjectWEAP and ESI is TESActorBase. Call returns at 0x51A1D6; paired Calc_WeaponDamage returns at 0x51A271. Patch resolves ESI as TESNPC and uses its carrier/co-save sidecar level; non-NPC or missing rows remain native. /*0x51a1d1*/
        v30 = ((double (__thiscall *)(TESActorBase *, int))v8[1].super.super.super.Unk_0C)(this, WeaponSkillAV); /*0x51a1e1*/
        v29 = ((double (__thiscall *)(TESActorBase *, int))this->vtbl[1].super.super.super.Unk_0C)(this, 7); /*0x51a1f3*/
        v25 = (float)((int (__thiscall *)(TESActorBase *, _DWORD))this->vtbl[1].super.super.super.Unk_0B)(this, 0); /*0x51a219*/
        itema = ((double (__thiscall *)(TESActorBase *, int))this->vtbl[1].super.super.super.Unk_0C)(this, 0xA); /*0x51a21f*/
        v19 = (*(unsigned __int16 (__thiscall **)(char *))(*((_DWORD *)v7 + 0x22) + 0x10))(v7 + 0x88); /*0x51a245*/
        v18 = Double_To_SInt32(v25); /*0x51a25b*/
        v17 = Double_To_SInt32(v29); /*0x51a265*/
        v10 = Double_To_SInt32(v30); /*0x51a266*/
        v26 = Calc_WeaponDamage(v10, v17, v18, itema, v19, 1.0, 1.0, 0.0); /*0x51a271*/
        v5 = v26; /*0x51a275*/
        break; /*0x51a282*/
      case kFormType_Ammo: /*0x51a150*/
        v3 = OblivionDynamicCast( /*0x51a166*/
               item,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESAmmo `RTTI Type Descriptor',
               0);
        if ( !v3 ) /*0x51a170*/
          return v23; /*0x51a170*/
        v4 = (*(int (__thiscall **)(_DWORD *))(v3[0x1D] + 0x10))(v3 + 0x1D); /*0x51a17f*/
        v24 = Calc_AmmoRatingFromDamage_(v4); /*0x51a187*/
        v5 = v24; /*0x51a18b*/
        break; /*0x51a198*/
      default:
        return v23;
    }
  }
  else
  {
    return v23; /*0x51a36d*/
  }
  return v5; /*0x51a195*/
}
