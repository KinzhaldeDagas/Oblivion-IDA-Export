// Verified return predicate: returns true only for an NPC actor in a cell with direct XOWN, no XGLB, and neither Public nor TempPublic bit set; guards return false. With an NPC owner it returns true when the actor's base form differs; with a faction owner it returns true when actor rank is below the cell's XRNK requirement (absent XRNK defaults to rank 0). Other owner types and non-NPC actors return false. This is an ownership-restriction check; the calling script-condition identity remains Unknown.
bool __thiscall TESObjectCELL_IsActorOwnershipRestricted(TESObjectCELL *cell, Actor *actor)
{
  TESForm *Owner; // edi
  TESForm *v5; // ebp
  void *v6; // eax
  int v7; // edi
  SInt32 RequiredOwnerFactionRank; // ebp
  TESForm *v9; // eax
  int *v10; // eax
  int v11; // ecx
  bool v12; // [esp+Bh] [ebp-1h]

  v12 = 0; /*0x4cabcb*/
  if ( Actor_IsGuardClass(actor) ) /*0x4cabd0*/
    return 0; /*0x4cabde*/
  Owner = ExtraDataList_GetOwner(&cell->members.extraData); /*0x4cabed*/
  if ( !Owner || (cell->members.flags0 & 0x20) != 0 || (cell->members.flags0 & 0x40) != 0 ) /*0x4cac00*/
    return v12; /*0x4cac00*/
  if ( ExtraDataList_GetGlobal(&cell->members.extraData) || !Actor_IsNPC(actor) ) /*0x4cac13*/
    return 0; /*0x4caccf*/
  v5 = (TESForm *)OblivionDynamicCast( /*0x4cac43*/
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  v6 = OblivionDynamicCast( /*0x4cac45*/
         Owner,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFaction `RTTI Type Descriptor',
         0);
  v7 = (int)v6; /*0x4cac4f*/
  if ( v5 ) /*0x4cac51*/
    return v5 != actor->vtbl->super.super.GetBaseForm(actor); /*0x4cac71*/
  if ( !v6 ) /*0x4cac76*/
    return v12; /*0x4cac76*/
  RequiredOwnerFactionRank = TESObjectCELL_GetRequiredOwnerFactionRank(cell); /*0x4cac86*/
  v9 = actor->vtbl->super.super.GetBaseForm(actor); /*0x4cac99*/
  v10 = (int *)OblivionDynamicCast( /*0x4cac9c*/
                 v9,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                 &TESNPC `RTTI Type Descriptor',
                 0);
  LOBYTE(v11) = actor == (Actor *)reference; /*0x4cacaa*/
  if ( (int)TESActorBaseData_GetFactionRank(v10 + 9, v7, v11) >= RequiredOwnerFactionRank ) /*0x4cacb9*/
    return v12; /*0x4cacb9*/
  return 1; /*0x4cabd9*/
}
