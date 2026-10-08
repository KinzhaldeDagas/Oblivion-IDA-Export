// Actor vtable +0x2C4 durability mutation. Applies positive damage to EntryData health, with optional Heavy/Light armor skill modifiers unless suppressed; updates container extras and handles break/unequip at zero. Returns false while item remains usable and true on terminal/break handling paths.
bool __thiscall Actor_DamageEquippedItem(Actor *this, EntryData *entry, float damage, bool suppressArmorSkillModifiers)
{
  int v4; // edx
  int v5; // ebx
  int v6; // ebp
  double v7; // st5
  TESForm *type; // eax
  TESForm *v11; // ebp
  float *v12; // ecx
  const char *data; // ebx
  char *Name; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  TESForm *v16; // eax
  LowProcess_vtbl *v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // ebx
  float *v21; // eax
  TESChildCELL *v22; // eax
  double Health; // [esp+10h] [ebp-30h]
  ExtraDataList *v25; // [esp+10h] [ebp-30h]
  int v26; // [esp+18h] [ebp-28h]
  int v27; // [esp+1Ch] [ebp-24h]
  int v28; // [esp+30h] [ebp-10h] BYREF
  int v29; // [esp+34h] [ebp-Ch] BYREF
  float v30[2]; // [esp+38h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+40h] [ebp+0h]
  float entrya; // [esp+44h] [ebp+4h]
  float suppressArmorSkillModifiersa; // [esp+4Ch] [ebp+Ch]

  if ( !entry ) /*0x5f387f*/
    return Actor_DamageEquippedItem__::Done(0, v4, 0, SLODWORD(damage), suppressArmorSkillModifiers); /*0x5f387f*/
  if ( damage <= 0.0 ) /*0x5f3894*/
    return Actor_DamageEquippedItem__::Done_((int)entry, SLODWORD(damage), suppressArmorSkillModifiers); /*0x5f3894*/
  type = entry->type; /*0x5f389a*/
  entrya = damage; /*0x5f389d*/
  v27 = v6; /*0x5f38a1*/
  v11 = 0; /*0x5f38a2*/
  if ( type ) /*0x5f38a6*/
  {
    if ( type->member.type == kFormType_Armor ) /*0x5f38b0*/
    {
      v11 = type; /*0x5f38b6*/
      if ( !suppressArmorSkillModifiers ) /*0x5f38b8*/
      {
        if ( TESObjectARMO_ISHeavyArmor(type) == 1 ) /*0x5f38c3*/
        {
          if ( Actor_GetSkillMasteryLevel(this, kSkillAV_HeavyArmor) < kSkillMastery_Journeyman ) /*0x5f38d1*/
          {
            if ( Actor_GetSkillMasteryLevel(this, kSkillAV_HeavyArmor) ) /*0x5f38de*/
              goto LABEL_17; /*0x5f38e5*/
            v12 = MEMORY[0xB374F8]; /*0x5f38e7*/
          }
          else
          {
            v12 = MEMORY[0xB37500]; /*0x5f38d3*/
          }
        }
        else
        {
          if ( TESObjectARMO_ISHeavyArmor(v11) ) /*0x5f38f0*/
            goto LABEL_17; /*0x5f38f7*/
          if ( Actor_GetSkillMasteryLevel(this, kSkillAV_LightArmor) < kSkillMastery_Journeyman ) /*0x5f3905*/
          {
            if ( Actor_GetSkillMasteryLevel(this, kSkillAV_LightArmor) ) /*0x5f3912*/
              goto LABEL_17; /*0x5f3919*/
            v12 = MEMORY[0xB374F0]; /*0x5f391b*/
          }
          else
          {
            v12 = MEMORY[0xB37508]; /*0x5f3907*/
          }
        }
        entrya = *GameSetting_GetSafeFloatPointer(v12) * damage; /*0x5f392b*/
      }
    }
  }
LABEL_17:
  suppressArmorSkillModifiersa = ContainerEntryExtraData_GetHealth((void **)&entry->extendData, 0) - entrya; /*0x5f392f*/
  if ( suppressArmorSkillModifiersa < 1.0 ) /*0x5f394b*/
    suppressArmorSkillModifiersa = 0.0; /*0x5f394f*/
  v26 = v5; /*0x5f395a*/
  if ( unk_B3B908 ) /*0x5f3953*/
  {
    if ( v11 ) /*0x5f395f*/
    {
      data = (const char *)v11[1].member.modlist.data; /*0x5f3966*/
      if ( !data ) /*0x5f3968*/
        data = EmptyString; /*0x5f396a*/
      Health = ContainerEntryExtraData_GetHealth((void **)&entry->extendData, 0); /*0x5f397b*/
      Name = TESObjectREFR_GetName((TESObjectREFR *)this); /*0x5f3991*/
      Interface_ConsolePrint( /*0x5f399c*/
        "%.20s's %s takes %.2f points of damage (%.2f/%.2f)!",
        Name,
        data,
        entrya,
        suppressArmorSkillModifiersa,
        Health);
    }
  }
  v25 = (ExtraDataList *)entry->extendData->node.data; /*0x5f39aa*/
  ContainerChanges = ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList); /*0x5f39ae*/
  sub_488830( /*0x5f39be*/
    (void **)&entry->extendData,
    (BSExtraDataVtbl *)LODWORD(suppressArmorSkillModifiersa),
    ContainerChanges,
    v25,
    1);
  if ( v11 ) /*0x5f39c5*/
    this->vtbl->Unk_B0(this); /*0x5f39d1*/
  if ( suppressArmorSkillModifiersa > 0.0 ) /*0x5f39de*/
    return 0; /*0x5f3b3a*/
  v16 = entry->type; /*0x5f39e4*/
  if ( (!v16 /*0x5f3a31*/
     || v16->member.type != kFormType_Weapon
     || !this->members.super.process
     || !this->members.super.process->GetWeaponOut(this->members.super.process))
    && (!v11
     || !TESBipedModelForm_CoversSlot((unsigned __int16 *)&v11[4].member, 0xD, 0)
     || !this->members.super.process->GetEquippedShieldData(this->members.super.process, 1)) )
  {
    return 1; /*0x5f3b2e*/
  }
  if ( this == (Actor *)reference || ((unsigned __int8 (__thiscall *)(TESForm *))entry->type->vtbl->Unk_1E)(entry->type) ) /*0x5f3a4f*/
  {
    Actor_UnequipItem( /*0x5f3b20*/
      this,
      0.0,
      v7,
      damage,
      (__int16)entry->type,
      1,
      (ExtraDataList *)entry->extendData->node.data,
      0,
      1,
      0);
    return 1; /*0x5f3b20*/
  }
  v17 = this->members.super.process->__vftable; /*0x5f3a62*/
  v18 = ((int (__thiscall *)(Actor *, int, int))this->vtbl->super.super.GetActiveSkinInfo)(this, v26, v27); /*0x5f3a6c*/
  if ( v11 ) /*0x5f3a5d*/
    v19 = v17->Unk_47(this->members.super.process, v18); /*0x5f3a74*/
  else
    v19 = v17->Unk_45(this->members.super.process, v18); /*0x5f3a8f*/
  v20 = v19; /*0x5f3a91*/
  if ( v19 ) /*0x5f3a95*/
    v21 = (float *)(v19 + 0x88); /*0x5f3a97*/
  else
    v21 = this->vtbl->super.super.GetPos(this); /*0x5f3aa9*/
  v30[1] = *v21; /*0x5f3aad*/
  retaddr = *((_UNKNOWN **)v21 + 1); /*0x5f3ab4*/
  sub_711440((float *)(v20 + 0x64), v30, (float *)&v28, (float *)&v29); /*0x5f3ad1*/
  v22 = (TESChildCELL *)((int (__thiscall *)(Actor *, TESForm *, void *, int))this->vtbl->Unk_B2)( /*0x5f3af5*/
                          this,
                          entry->type,
                          entry->extendData->node.data,
                          1);
  sub_4DC000((int)this, v22); /*0x5f3af9*/
  return 1; /*0x5f3b03*/
}
