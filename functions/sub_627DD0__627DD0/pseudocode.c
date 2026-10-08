char __cdecl sub_627DD0(_DWORD *a1, Actor *a2)
{
  int v2; // eax
  Actor *v4; // esi
  char v5; // bl
  CombatController *v6; // eax
  TESForm *ActorBaseForm; // ebx
  char v8; // al
  ExtraDataList *DwordAtOffset40; // eax
  ExtraDataList *v10; // eax
  float v11; // [esp+14h] [ebp+4h]

  if ( !a1 ) /*0x627dd7*/
    return 0; /*0x627dd7*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x198))(a1, 0) ) /*0x627de9*/
    return 0; /*0x627de9*/
  v2 = a1[2]; /*0x627df3*/
  if ( (v2 & 0x20) != 0 || (v2 & 0x4000) != 0 || (v2 & 0x800) != 0 ) /*0x627e17*/
    return 0; /*0x627fdd*/
  if ( !a2 ) /*0x627e24*/
    return 0; /*0x627e2a*/
  v4 = (Actor *)OblivionDynamicCast( /*0x627e40*/
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v5 = 0; /*0x627e45*/
  if ( !v4 ) /*0x627e49*/
    return 0; /*0x627e49*/
  if ( v4->vtbl->IsInCombat(v4, 1) /*0x627e80*/
    || a2->vtbl->GetCombatController(a2) && (v6 = a2->vtbl->GetCombatController(a2), sub_613670(v6, (int)v4)) )
  {
    v5 = 1; /*0x627e89*/
  }
  if ( v4 == a2 /*0x627ecc*/
    || a2 == (Actor *)reference
    || v5
    || (v4->members.super.super.super.flags & 0x800) != 0
    || v4->vtbl->super.super.IsDead((TESObjectREFR *)v4, 0)
    || (v4->members.super.super.super.flags & 0x20) != 0 )
  {
    return 0; /*0x627ecc*/
  }
  ActorBaseForm = Actor_GetActorBaseForm(a2, 1); /*0x627ed7*/
  if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) ) /*0x627edc*/
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0); /*0x627eee*/
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID); /*0x627ef3*/
  if ( v8 || a2->vtbl->GetActorValue(a2, kActorVal_Responsibility) < (int)stru_B36C30.value ) /*0x627f10*/
  {
    if ( ((int (__thiscall *)(Actor *, Actor *))v4->vtbl->GetDisposition)(v4, a2) < 0x46 /*0x627f51*/
      || v4->vtbl->GetActorValue(v4, kActorVal_Aggression) < 0x32 )
    {
      return 0; /*0x627f51*/
    }
  }
  else if ( !Actor_IsGuardClass(v4) || Actor_IsCreature(a2) ) /*0x627f1f*/
  {
    return 0; /*0x627f26*/
  }
  v11 = v4->members.super.super.pos[2]; /*0x627f58*/
  if ( Actor_CanSwim(a2) && sub_5E3400(a2) ) /*0x627f67*/
  {
    if ( sub_5E1E90(a2) ) /*0x627f72*/
    {
      if ( Shared_GetDwordAtOffset40(v4) ) /*0x627f7d*/
      {
        DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v4); /*0x627f88*/
        if ( v11 > TESObjectCELL_GetWaterHeight(DwordAtOffset40) ) /*0x627f9f*/
          return 0; /*0x627fa6*/
      }
    }
  }
  else if ( Shared_GetDwordAtOffset40(v4) ) /*0x627fa9*/
  {
    v10 = (ExtraDataList *)Shared_GetDwordAtOffset40(v4); /*0x627fb4*/
    if ( v11 < TESObjectCELL_GetWaterHeight(v10) ) /*0x627fcb*/
      return 0; /*0x627f2d*/
  }
  unk_B3B920 = (int)v4; /*0x627fd3*/
  return 1; /*0x627e29*/
}
