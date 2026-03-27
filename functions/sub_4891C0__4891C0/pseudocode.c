double __thiscall sub_4891C0(EntryData *this, int a2, int a3, int a4)
{
  signed int v5; // esi
  float *v6; // eax
  double FatigueFraction; // st7
  bool v8; // zf
  TESForm *type; // esi
  double v10; // st7
  PlayerCharacterVtbl *vtbl; // ebx
  int WeaponSkillAV; // eax
  int v13; // ebx
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int v17; // eax
  PlayerCharacterVtbl *v19; // ebx
  signed int ArmorSkillAV; // eax
  double v21; // st7
  int v22; // [esp+8h] [ebp-4Ch]
  int v23; // [esp+Ch] [ebp-48h]
  float v24; // [esp+10h] [ebp-44h]
  int v25; // [esp+14h] [ebp-40h]
  float v26; // [esp+18h] [ebp-3Ch]
  float v27; // [esp+1Ch] [ebp-38h]
  float v28; // [esp+20h] [ebp-34h]
  float v29; // [esp+30h] [ebp-24h]
  double Health; // [esp+30h] [ebp-24h]
  float v31; // [esp+30h] [ebp-24h]
  float v32; // [esp+30h] [ebp-24h]
  float v35; // [esp+38h] [ebp-1Ch]
  float v36; // [esp+3Ch] [ebp-18h]
  float v37; // [esp+40h] [ebp-14h]
  float v38; // [esp+44h] [ebp-10h]
  float v39; // [esp+44h] [ebp-10h]
  int HealthForForm; // [esp+48h] [ebp-Ch]
  float v41; // [esp+48h] [ebp-Ch]
  double v42; // [esp+48h] [ebp-Ch]
  float v43; // [esp+48h] [ebp-Ch]
  float v44; // [esp+50h] [ebp-4h]
  int v45; // [esp+50h] [ebp-4h]
  float v46; // [esp+50h] [ebp-4h]

  v29 = flt_A30634;
  v5 = sub_485150(this);
  v6 = (float *)OblivionDynamicCast(
                  this->type,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESQualityForm `RTTI Type Descriptor',
                  0);
  if ( v6 )
  {
    return (float)(unsigned __int8)(int)v6[1];
  }
  else
  {
    v35 = TESDataHandler_g_PlayerRef->vtbl->super.GetAV_F((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Luck);
    v38 = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Strength);
    v37 = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Agility);
    FatigueFraction = Actor_GetFatigueFraction((Actor *)TESDataHandler_g_PlayerRef);
    v8 = v5 == 1;
    v36 = FatigueFraction;
    type = this->type;
    if ( v8 )
    {
      if ( type->member.type == kFormType_Weapon )
      {
        if ( LOBYTE(type[6].vtbl) == 4 )
        {
          v10 = flt_A30634;
LABEL_14:
          v32 = v10;
          return (float)Round_Float(v32, 1.0);
        }
        vtbl = TESDataHandler_g_PlayerRef->vtbl;
        WeaponSkillAV = TESObjectWEAP_GetWeaponSkillAV((char *)this->type);
        v44 = vtbl->super.GetAV_F((Actor *)TESDataHandler_g_PlayerRef, (AVCode)WeaponSkillAV);
        v13 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList *))type[5].member.modlist.data->bsFile)(&type[5].member.modlist);
        Health = ContainerEntryExtraData_GetHealth((void **)&this->extendData, 0);
        HealthForForm = TESHealthForm_GetHealthForForm(type);
        v14 = (double)HealthForForm;
        if ( HealthForForm < 0 )
          v14 = v14 + flt_A2FC78;
        v41 = Health / v14;
        if ( LOBYTE(type[6].vtbl) == 5 )
          v15 = v37;
        else
          v15 = v38;
        v31 = v15;
        v27 = 1.0;
        v26 = v41;
        v25 = v13;
        v24 = v36;
        v16 = v31;
      }
      else
      {
        v44 = TESDataHandler_g_PlayerRef->vtbl->super.GetAV_F((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Marksman);
        v27 = 1.0;
        v26 = 1.0;
        v25 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList **))type[4].member.modlist.next[2].data)(&type[4].member.modlist.next);
        v24 = v36;
        v16 = v37;
      }
      v23 = Double_To_SInt32(v16);
      v22 = Double_To_SInt32(v35);
      v17 = Double_To_SInt32(v44);
      v10 = Calc_WeaponDamage(v17, v22, v23, v24, v25, v26, v27, COERCE_FLOAT(1));
      goto LABEL_14;
    }
    if ( type->member.type != kFormType_Armor )
      return v29;
    v19 = TESDataHandler_g_PlayerRef->vtbl;
    ArmorSkillAV = TESObjectARMO_GetArmorSkillAV(this->type);
    v39 = v19->super.GetAV_F((Actor *)TESDataHandler_g_PlayerRef, (AVCode)ArmorSkillAV);
    v42 = ContainerEntryExtraData_GetHealth((void **)&this->extendData, 0);
    v45 = TESHealthForm_GetHealthForForm(type);
    v21 = (double)v45;
    if ( v45 < 0 )
      v21 = v21 + flt_A2FC78;
    v43 = v42 / v21;
    v46 = (double)LOWORD(type[9].member.refID) / fCostant_100;
    v28 = Calc_ArmorRating((unsigned __int16)(int)v46, v39, v35, v43);
    return (float)sub_484370(v28);
  }
}
