double __userpurge Player_CalcInventoryEntryRating@<st0>(EntryData *this@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  signed int v6; // esi
  float *v7; // eax
  double FatigueFraction; // st7
  bool v9; // zf
  TESForm *type; // esi
  double v11; // st7
  PlayerCharacterVtbl *vtbl; // ebx
  int WeaponSkillAV; // eax
  int v14; // ebx
  double v15; // st7
  double v16; // st7
  double v17; // st7
  int v18; // eax
  PlayerCharacterVtbl *v20; // ebx
  signed int ArmorSkillAV; // eax
  double v22; // st7
  int v23; // [esp+8h] [ebp-4Ch]
  int v24; // [esp+Ch] [ebp-48h]
  float v25; // [esp+10h] [ebp-44h]
  int v26; // [esp+14h] [ebp-40h]
  float v27; // [esp+18h] [ebp-3Ch]
  float v28; // [esp+1Ch] [ebp-38h]
  float v29; // [esp+20h] [ebp-34h]
  float v30; // [esp+30h] [ebp-24h]
  double Health; // [esp+30h] [ebp-24h]
  float v32; // [esp+30h] [ebp-24h]
  float v33; // [esp+30h] [ebp-24h]
  float v36; // [esp+38h] [ebp-1Ch]
  float v37; // [esp+3Ch] [ebp-18h]
  float v38; // [esp+40h] [ebp-14h]
  float v39; // [esp+44h] [ebp-10h]
  float v40; // [esp+44h] [ebp-10h]
  int HealthForForm; // [esp+48h] [ebp-Ch]
  float v42; // [esp+48h] [ebp-Ch]
  double v43; // [esp+48h] [ebp-Ch]
  float v44; // [esp+48h] [ebp-Ch]
  float v45; // [esp+50h] [ebp-4h]
  int v46; // [esp+50h] [ebp-4h]
  float v47; // [esp+50h] [ebp-4h]

  v30 = kTerrainLODQuadRayDirectionZ; /*0x4891cb*/
  v6 = sub_485150(this); /*0x4891e2*/
  v7 = (float *)OblivionDynamicCast( /*0x4891ea*/
                  this->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESQualityForm `RTTI Type Descriptor',
                  0);
  if ( v7 ) /*0x4891f4*/
  {
    return (float)(unsigned __int8)(int)v7[1]; /*0x4894b9*/
  }
  else
  {
    v36 = reference->vtbl->super.GetAV_F((Actor *)reference, kActorVal_Luck); /*0x48920d*/
    v39 = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Strength); /*0x48923b*/
    v38 = (float)reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Agility); /*0x48924f*/
    FatigueFraction = Actor_GetFatigueFraction((Actor *)reference, a2, (int)this); /*0x489253*/
    v9 = v6 == 1; /*0x489258*/
    v37 = FatigueFraction; /*0x48925b*/
    type = this->type; /*0x48925f*/
    if ( v9 ) /*0x489262*/
    {
      if ( type->member.type == kFormType_Weapon ) /*0x48926c*/
      {
        if ( LOBYTE(type[6].vtbl) == 4 ) /*0x489279*/
        {
          v11 = kTerrainLODQuadRayDirectionZ; /*0x48927b*/
LABEL_14:
          v33 = v11; /*0x489385*/
          return (float)Round_Float(v33, 1.0); /*0x4893af*/
        }
        vtbl = reference->vtbl; /*0x48928c*/
        WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)this->type);// BladeSkillsRestored schema-4 owner decode: this inventory-rating path is player-owned (PlayerCharacter global at 0xB333C4). ECX is TESObjectWEAP. Call returns at 0x489295; paired Calc_WeaponDamage returns at 0x489382. /*0x489290*/
        v45 = vtbl->super.GetAV_F((Actor *)reference, (AVCode)WeaponSkillAV); /*0x4892a4*/
        v14 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList *))type[5].member.modlist.data->bsFile)(&type[5].member.modlist); /*0x4892bd*/
        Health = ContainerEntryExtraData_GetHealth((void **)&this->extendData, 0); /*0x4892c6*/
        HealthForForm = TESHealthForm_GetHealthForForm(type); /*0x4892d4*/
        v15 = (double)HealthForForm; /*0x4892d8*/
        if ( HealthForForm < 0 ) /*0x4892dc*/
          v15 = v15 + flt_A2FC78; /*0x4892de*/
        v42 = Health / v15; /*0x4892ef*/
        if ( LOBYTE(type[6].vtbl) == 5 ) /*0x4892f3*/
          v16 = v38; /*0x4892f5*/
        else
          v16 = v39; /*0x4892fb*/
        v32 = v16; /*0x4892ff*/
        v28 = 1.0; /*0x48930a*/
        v27 = v42; /*0x489312*/
        v26 = v14; /*0x489319*/
        v25 = v37; /*0x48931b*/
        v17 = v32; /*0x48931e*/
      }
      else
      {
        v45 = reference->vtbl->super.GetAV_F((Actor *)reference, kActorVal_Marksman); /*0x489336*/
        v28 = 1.0; /*0x48934c*/
        v27 = 1.0; /*0x489353*/
        v26 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList **))type[4].member.modlist.next[2].data)(&type[4].member.modlist.next); /*0x489356*/
        v25 = v37; /*0x48935c*/
        v17 = v38; /*0x48935f*/
      }
      v24 = Double_To_SInt32(v17); /*0x48936c*/
      v23 = Double_To_SInt32(v36); /*0x489376*/
      v18 = Double_To_SInt32(v45); /*0x489377*/
      v11 = Calc_WeaponDamage(v18, v23, v24, v25, v26, v27, v28, COERCE_FLOAT(1)); /*0x48937d*/
      goto LABEL_14; /*0x48937d*/
    }
    if ( type->member.type != kFormType_Armor ) /*0x4893b6*/
      return v30; /*0x4893b6*/
    v20 = reference->vtbl; /*0x4893bd*/
    ArmorSkillAV = TESObjectARMO_GetArmorSkillAV(this->type);// Paired Medium boundary 2/7: player inventory entry rating classifies the armor, fetches player skill, health and condition, then calls Calc_ArmorRating at 0x489461. /*0x4893c1*/
    v40 = v20->super.GetAV_F((Actor *)reference, (AVCode)ArmorSkillAV); /*0x4893d5*/
    v43 = ContainerEntryExtraData_GetHealth((void **)&this->extendData, 0); /*0x4893e2*/
    v46 = TESHealthForm_GetHealthForForm(type); /*0x4893ee*/
    v22 = (double)v46; /*0x4893f2*/
    if ( v46 < 0 ) /*0x4893f6*/
      v22 = v22 + flt_A2FC78; /*0x4893f8*/
    v44 = v43 / v22; /*0x489410*/
    v47 = (double)LOWORD(type[9].member.refID) / fCostant_100; /*0x48942c*/
    v29 = Calc_ArmorRating((int)v47, v40, v36, v44);// Paired Medium boundary 2/7: player inventory armor-rating consumer. MWMediumArmor may use player sidecar Medium skill here. /*0x489466*/
    return (float)sub_484370(v29); /*0x489476*/
  }
}
