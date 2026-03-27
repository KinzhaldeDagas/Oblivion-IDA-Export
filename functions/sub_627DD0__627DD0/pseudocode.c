char __cdecl sub_627DD0(_DWORD *a1, Actor *a2)
{
  int v2; // eax
  Actor *v4; // esi
  char v5; // bl
  CombatController *v6; // eax
  TESForm *ActorBaseForm; // ebx
  char v8; // al
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v10; // eax
  float v11; // [esp+14h] [ebp+4h]

  if ( !a1 )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x198))(a1, 0) )
    return 0;
  v2 = a1[2];
  if ( (v2 & 0x20) != 0 || (v2 & 0x4000) != 0 || (v2 & 0x800) != 0 )
    return 0;
  if ( !a2 )
    return 0;
  v4 = (Actor *)OblivionDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v5 = 0;
  if ( !v4 )
    return 0;
  if ( v4->vtbl->IsInCombat(v4, 1)
    || a2->vtbl->GetCombatController(a2) && (v6 = a2->vtbl->GetCombatController(a2), sub_613670(v6, (int)v4)) )
  {
    v5 = 1;
  }
  if ( v4 == a2
    || a2 == (Actor *)TESDataHandler_g_PlayerRef
    || v5
    || (v4->members.super.super.super.flags & 0x800) != 0
    || v4->vtbl->super.super.IsDead((TESObjectREFR *)v4, 0)
    || (v4->members.super.super.super.flags & 0x20) != 0 )
  {
    return 0;
  }
  ActorBaseForm = Actor_GetActorBaseForm(a2, 1);
  if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) )
    ActorBaseForm = Actor_GetActorBaseForm(a2, 0);
  TESActorBaseData_AllFactionsAreEvil(&ActorBaseForm[1].member.refID);
  if ( v8 || a2->vtbl->GetActorValue(a2, kActorVal_Responsibility) < dword_B36C30 )
  {
    if ( ((int (__thiscall *)(Actor *, Actor *))v4->vtbl->GetDisposition)(v4, a2) < 0x46
      || v4->vtbl->GetActorValue(v4, kActorVal_Aggression) < 0x32 )
    {
      return 0;
    }
  }
  else if ( !sub_5E6C60(v4) || Actor_IsCreature(a2) )
  {
    return 0;
  }
  v11 = v4->members.super.super.pos[2];
  if ( Actor_CanSwim(a2) && sub_5E3400(a2) )
  {
    if ( sub_5E1E90(a2) )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v4) )
      {
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v4);
        if ( v11 > TESObjectCELL_GetWaterHeight((ExtraDataList *)ParentCell) )
          return 0;
      }
    }
  }
  else if ( TESObjectREFR_GetParentCell((TESObjectREFR *)v4) )
  {
    v10 = TESObjectREFR_GetParentCell((TESObjectREFR *)v4);
    if ( v11 < TESObjectCELL_GetWaterHeight((ExtraDataList *)v10) )
      return 0;
  }
  dword_B3B920 = (int)v4;
  return 1;
}
