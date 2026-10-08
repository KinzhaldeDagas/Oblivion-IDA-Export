// Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
bool __thiscall TESObjectREFR_IsOwnedBy(
        TESObjectREFR *reference,
        TESObjectREFR *actorReference,
        bool useFactionOwnership)
{
  bool v4; // bl
  TESBoundObject *Owner; // edi
  TESBoundObject *v6; // esi
  TESActorBase *v7; // eax
  TESActorBase *v8; // edx
  TESBoundObject *v9; // ecx
  char v10; // fps^1
  bool v11; // c0
  char v12; // c2
  bool v13; // c3
  TESGlobal *OwnershipGlobal; // [esp+8h] [ebp-8h]
  SInt32 OwnershipRank; // [esp+Ch] [ebp-4h]

  v4 = 0; /*0x4de777*/
  if ( !TESObjectREFR_GetOwner(reference) ) /*0x4de779*/
    return 0; /*0x4de874*/
  Owner = (TESBoundObject *)TESObjectREFR_GetOwner(reference); /*0x4de790*/
  OwnershipRank = TESObjectREFR_GetOwnershipRank(reference); /*0x4de799*/
  OwnershipGlobal = TESObjectREFR_GetOwnershipGlobal(reference); /*0x4de7a4*/
  if ( !Owner ) /*0x4de7a8*/
    return 0; /*0x4de85e*/
  if ( actorReference ) /*0x4de7b5*/
  {
    v4 = 1; /*0x4de7c6*/
    v6 = (TESBoundObject *)((int (__thiscall *)(TESObjectREFR *))actorReference->vtbl->GetTemplateForm)(actorReference); /*0x4de7ca*/
    if ( !v6 ) /*0x4de7ce*/
      v6 = (TESBoundObject *)actorReference->vtbl->GetBaseForm(actorReference); /*0x4de7dd*/
    v7 = (TESActorBase *)((unsigned __int8)v6->member.super.type - kFormType_NPC); /*0x4de7e3*/
    v8 = 0; /*0x4de7e6*/
    if ( (unsigned int)v7 <= 1 ) /*0x4de7eb*/
    {
      v7 = (TESActorBase *)OblivionDynamicCast( /*0x4de7fa*/
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESActorBase `RTTI Type Descriptor',
                             0);
      v8 = v7; /*0x4de802*/
    }
    if ( Owner != v6 ) /*0x4de806*/
    {
      v9 = 0; /*0x4de808*/
      if ( Owner->member.super.type != kFormType_Faction || (v9 = Owner, !useFactionOwnership) ) /*0x4de817*/
      {
        v7 = (TESActorBase *)OwnershipGlobal; /*0x4de819*/
        if ( !OwnershipGlobal /*0x4de82b*/
          || (v11 = OwnershipGlobal->data > 0.0,
              v12 = 0,
              v13 = 0.0 == OwnershipGlobal->data,
              BYTE1(v7) = v10,
              0.0 == OwnershipGlobal->data) )
        {
          v4 = 0; /*0x4de82d*/
        }
      }
      if ( v9 ) /*0x4de831*/
      {
        if ( v8 ) /*0x4de835*/
        {
          LOBYTE(v7) = actorReference == (TESObjectREFR *)::reference; /*0x4de83d*/
          if ( (int)TESActorBaseData_GetFactionRank((int *)&v8->super.actorBaseData, (int)v9, (int)v7) < OwnershipRank ) /*0x4de84e*/
            return 0; /*0x4de853*/
        }
      }
    }
  }
  return v4; /*0x4de852*/
}
