// Verified Oblivion owner predicate: reads the cell's XOWN and XRNK extra data; returns true for an NPC owner matching the actor's base form, or for a faction owner when the actor is an NPC whose faction rank meets the cell's required rank. Player identity is passed into faction-rank evaluation for its special handling. Called by door access/trespass policy and other ownership paths. Fallout has the analogous TESObjectCELL::IsActorBaseCellOwner; it takes TESActorBase* and uses a differently exposed faction-rank path.
bool __thiscall TESObjectCELL_IsOwnedByActor(TESObjectCELL *cell, Actor *actor)
{
  BSExtraDataVtbl *Owner; // esi
  bool result; // al
  TESForm *v4; // ebx
  void *v5; // eax
  int v6; // ebp
  BSExtraDataVtbl *Rank; // eax
  int v8; // esi
  TESForm *v9; // eax
  int *v10; // eax
  int v11; // ecx
  bool v12; // [esp+Bh] [ebp-5h]
  ExtraDataList *p_extraData; // [esp+Ch] [ebp-4h]

  v12 = 0; /*0x4caac8*/
  p_extraData = &cell->members.extraData; /*0x4caacd*/
  Owner = ExtraDataList_GetOwner(&cell->members.extraData); /*0x4caad6*/
  if ( Owner )
  {
    result = Actor_IsNPC(actor); /*0x4caae6*/
    if ( !result ) /*0x4caaed*/
      return result; /*0x4caaed*/
    v4 = (TESForm *)OblivionDynamicCast( /*0x4cab1c*/
                      Owner,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESNPC `RTTI Type Descriptor',
                      0);
    v5 = OblivionDynamicCast( /*0x4cab1e*/
           Owner,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFaction `RTTI Type Descriptor',
           0);
    v6 = (int)v5; /*0x4cab28*/
    if ( v4 )
    {
      if ( v4 == actor->vtbl->super.super.GetBaseForm(actor) ) /*0x4cab3a*/
        return 1; /*0x4cab4c*/
    }
    else if ( v5 )
    {
      Rank = ExtraDataList_GetRank(p_extraData); /*0x4cab57*/
      v8 = (void (__thiscall **)(BSExtraData *))((char *)&Rank->Destructor + 1) != 0 ? (unsigned int)Rank : 0;
      v9 = actor->vtbl->super.super.GetBaseForm(actor); /*0x4cab7f*/
      v10 = (int *)OblivionDynamicCast( /*0x4cab82*/
                     v9,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                     &TESNPC `RTTI Type Descriptor',
                     0);
      LOBYTE(v11) = actor == (Actor *)reference; /*0x4cab90*/
      return (int)TESActorBaseData_GetFactionRank(v10 + 9, v6, v11) >= v8; /*0x4caba1*/
    }
  }
  return v12; /*0x4caaef*/
}
